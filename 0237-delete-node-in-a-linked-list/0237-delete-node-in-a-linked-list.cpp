/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
        ListNode* n;
        ListNode* dup;
        while(node->next!=NULL)
        {
            n=node->next;
            node->val=n->val;
            dup=node;
            node=node->next;
        }
        dup->next=NULL;
    }
};