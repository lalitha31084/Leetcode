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
    void reorderList(ListNode* head) {
        if(head ==NULL || head->next==NULL) return;
        //Find Middle
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast !=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* second=slow->next;
        slow->next=NULL;
      //REverse
        ListNode* prev=NULL;
        while(second!=NULL){
            ListNode* next=second->next;
            second->next=prev;
            prev=second;
            second=next;
        }
        //MErge
        ListNode* first=head;
        second=prev;
        while(second!=NULL){
            ListNode* next1=first->next;
            ListNode* next2=second->next;
            first->next = second;
            second->next = next1;
            first = next1;
            second = next2;
        }

    }
};