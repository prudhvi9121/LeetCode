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
        ListNode* samp=NULL;
        while(head){
            cout<<head->val<<" ";
            ListNode* nn=new ListNode(*head);
            nn->next=samp;
            samp=nn;
            head=head->next;
        }
        return samp;
    }
};