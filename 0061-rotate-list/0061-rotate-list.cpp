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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL)
        {
            return head;
        }
        ListNode* curr=head;
        vector<int>temp;
        while(curr!=NULL)
        {
            temp.push_back(curr->val);
            curr=curr->next;
        }
        k=k%temp.size();
        vector<int>temp1=temp;
        for(int i=0;i<temp.size();i++)
        {
            temp1.push_back(temp[i]);
        }
        int ind=temp.size()-k;
        vector<int>a;
        for(int i=ind;i<ind+temp.size();i++)
        {
            a.push_back(temp1[i]);
        }
        ListNode* List=new ListNode(a[0]);
        ListNode* ans=List;
        for(int i=1;i<a.size();i++)
        {
            ListNode* n=new ListNode(a[i]);
            List->next=n;
            List=List->next;
        }
        return ans;
    }
};