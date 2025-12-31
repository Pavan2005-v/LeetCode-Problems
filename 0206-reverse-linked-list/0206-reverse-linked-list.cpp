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
    ListNode* reverseList(ListNode* head) {
        if(head==NULL) return head;
        vector<int>nums;
        while(head!=NULL)
        {
            nums.push_back(head->val);
            head=head->next;
        }
        reverse(nums.begin(),nums.end());
        ListNode* List=new ListNode(nums[0]);
        ListNode* List1=List;
        for(int i=1;i<nums.size();i++)
        {
            ListNode* n=new ListNode(nums[i]);
            List->next=n;
            List=List->next;
        }
        return List1;
    }
};