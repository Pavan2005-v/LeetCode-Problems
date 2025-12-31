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
    ListNode* middleNode(ListNode* head) {
        vector<int>nums;
        while(head!=NULL)
        {
            nums.push_back(head->val);
            head=head->next;
        }
        int mid_index=nums.size()/2;
        ListNode* List=new ListNode(nums[mid_index]);
        ListNode* head1=List;
        for(int i=mid_index+1;i<nums.size();i++)
        {
            ListNode* n=new ListNode(nums[i]);
            List->next=n;
            List=List->next;
        }
        return head1;
    }
};