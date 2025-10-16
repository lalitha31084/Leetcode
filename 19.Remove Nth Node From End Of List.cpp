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
        ListNode* temp=head;
        int cnt=0;
        while(temp!=NULL){
            cnt++;
            temp=temp->next;
        }
    int k=cnt-n;
   
    if(k==0){
        ListNode* del=head;
        head=head->next;
        delete del;
        return head;

    }
     temp=head;
      
      int i=0;
      while(temp && temp->next){
        if(i==k-1){
        ListNode* del=temp->next;
        temp->next=del->next;
        delete del;
      }
      i++;
      temp=temp->next;
      }
      return head;
    }
  
};