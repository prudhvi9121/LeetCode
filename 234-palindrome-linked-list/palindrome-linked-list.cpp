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
    bool isPalindrome(ListNode* head) {
        ListNode *samp1=NULL;
        ListNode *temp=head;
        while(head){
             ListNode* nn=new ListNode(*head);
            nn->next=samp1;
            samp1=nn;
            head=head->next;
        }
        while(temp){
            if(temp->val!=samp1->val) return 0;
            temp=temp->next;
            samp1=samp1->next;
        }
        return 1;
    }
};