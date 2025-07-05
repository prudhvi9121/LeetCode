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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head->next==nullptr) return NULL; 
        ListNode* temp1 = head;
        while(n--){
            temp1=temp1->next;
        }
        ListNode* prev = new ListNode(0);
        prev->next = head;
        ListNode* temp2 = prev;
        while(temp1){
            temp1=temp1->next;
            temp2=temp2->next;
        }
        temp2->next=temp2->next->next;
        return prev->next;
    }
};