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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        ListNode * temp=new ListNode(0);
        ListNode * res=temp;
        int carry=0;
       
        while(l1 || l2 || carry){
            int p=0;
            
            if(l1){
                p+=l1->val;
                l1=l1->next;
            }
            
             if(l2){
                p+=l2->val;
                l2=l2->next;
            }
            p+=carry;
            
            carry=p/10;
           
            ListNode * node=new ListNode(p%10);
            temp->next=node;
            temp=temp->next;
        }
        
        return res->next;
        
        
    }
};
