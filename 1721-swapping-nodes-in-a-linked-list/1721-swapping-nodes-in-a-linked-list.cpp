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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* temp=head;
        vector<int>v;
        while(temp!=nullptr){
                v.push_back(temp->val);
                temp=temp->next;
            }
         int res1=k-1;
         int res2=v.size()-k;
         swap(v[res1],v[res2]);

       temp=head;
       int i=0;
       while(temp!=nullptr){
            temp->val = v[i];   
            temp = temp->next;  
            i++;
       }
       return head;   
    }
};