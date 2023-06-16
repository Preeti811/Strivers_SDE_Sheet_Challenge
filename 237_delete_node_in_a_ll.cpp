/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

//given node ke next pointer ko we will delete, you just need to change the value of the node no need to delete the node
//eg-- 1 2 3 4 5 node=3
// temp=node->next i.e. 4 wala node, replace node->val with temp->val then point node-> next to temp->next then delete 4 wala node
//i.e. 1--->2---->4----->5
class Solution {
public:
    void deleteNode(ListNode* node) {
      ListNode* temp = node -> next;
		  node -> val = temp -> val;
		  node -> next = temp -> next;
		  delete(temp);
        
    }  
};
