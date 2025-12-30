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
    int getDecimalValue(ListNode* head) {
        string ans="";
        while(head!=NULL)
        {
            int d=head->val;
            ans+=(to_string(d));
            head=head->next;
        } 
        int c=0;
        int a=0;
        for(int i=ans.length()-1;i>=0;i--)
        {
            if(ans[i]=='1')
            {
                a+=(pow(2,c));
            }
            c++;
        } 
        return a;     
    }
};