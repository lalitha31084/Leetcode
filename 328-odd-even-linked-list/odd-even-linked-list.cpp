class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        vector<int> v;
        ListNode* temp = head;

        // Step 1: Store all node values in the vector
        while (temp != nullptr) {
            v.push_back(temp->val);
            temp = temp->next;
        }

        temp = head;
        int i = 0;

        
        while (i < v.size()) {
            temp->val = v[i];
            temp = temp->next;
            i+= 2;
        }

        i= 1;

        while (i < v.size()) {
            temp->val = v[i];
            temp = temp->next;
            i += 2;
        }

        return head;
    }
};
