/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
        //t.c.--O(m+n); s.c.--O(m)
        
        unordered_set<ListNode*> nodes;
        while(headA){
            nodes.insert(headA);
            headA=headA->next;
        }
        while(headB){
            if(nodes.find(headB)!=nodes.end())
                return headB;
            
            headB=headB->next;
        }
        return NULL;
    }
};
