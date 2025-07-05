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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* temp1 = list1;
        ListNode* temp2 = list2;
        ListNode* res=new ListNode();
        ListNode* temp = res;
        while(temp1 && temp2){
            ListNode* newNode;
            if(temp1->val <= temp2->val){
                newNode = temp1;
                temp1=temp1->next;
            }else{
                newNode = temp2;
                temp2 = temp2->next;
            }
            temp->next = newNode;
            temp = temp->next;
        }
        if(temp1) temp->next = temp1;
        if(temp2) temp->next = temp2;
        return res->next;
    }
};