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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode *temp=head;

        while(temp!=NULL && temp->next !=NULL){
            ListNode *newnode=new ListNode;
            int a=gcd(temp->val,temp->next->val);
            newnode -> val=a;
            newnode->next = temp->next;
            temp->next=newnode;
            temp=newnode->next;
        }
        return head;

         
        
    }
};