/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* sortList(ListNode* head) {
        if(head==NULL) return head;
        ListNode* curr=head;
        vector<int>nums;
        while(curr!=NULL)
        {
            nums.push_back(curr->val);
            curr=curr->next;
        }
        sort(nums.begin(),nums.end());
        ListNode* list=new ListNode(nums[0]);
        ListNode* ans_list=list;
        for(int i=1;i<nums.size();i++)
        {
            ListNode* n=new ListNode(nums[i]);
            list->next=n;
            list=list->next;
        }
        return ans_list;
    }
};