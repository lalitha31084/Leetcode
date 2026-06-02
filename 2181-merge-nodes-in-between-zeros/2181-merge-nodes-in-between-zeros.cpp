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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* mod=head->next;
        ListNode* cur=mod;

        int s=0;
        while(cur){
            if(cur->val!=0)
            s+=cur->val;
            else{
                mod->val=s;
                mod->next=cur->next;
                mod=mod->next;
                s=0;
            }
            cur=cur->next;
        }
        return head->next;
        
        
    }
};