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
    unordered_set<int> Set;
public:
    ListNode* deleteDuplicates(ListNode* head) {
        run(head, nullptr);
        return head;
    }
    void run(ListNode* node,ListNode* prev) {
        if(!node) return;
        if(Set.find(node->val) != Set.end()){
            prev->next = node->next;
        }
        else{
            Set.insert(node->val);
            prev = node;
        }
        run(node->next, prev);
      
        
    }
  
    
};