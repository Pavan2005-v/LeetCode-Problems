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
    int pairSum(ListNode* head) {
        vector<int>nums;
        while(head!=NULL)
        {
            nums.push_back(head->val);
            head=head->next;
        }
        int half=(nums.size()/2);
        int ans=INT_MIN;
        int last=nums.size()-1;
        for(int i=0;i<half;i++)
        {
            ans=max(ans,nums[i]+nums[last]);
            last--;
        }
        return ans;
    }
};