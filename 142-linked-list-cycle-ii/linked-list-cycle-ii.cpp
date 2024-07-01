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
    ListNode *detectCycle(ListNode *head) {
        ListNode *fast=head,*slow=head,*temp=head;
        int flg=0;
        while(fast && fast->next){
            slow=slow->next;
            fast=fast->next->next;
            if(fast==slow){
                flg=1;
                break;
            }
        }
        // cout<<flg<<endl;
        if(!flg) return NULL;
        while(temp!=slow){
            temp=temp->next;
            slow=slow->next;
        }
        // cout<<fast->val<<endl;
        return slow;
    }
};