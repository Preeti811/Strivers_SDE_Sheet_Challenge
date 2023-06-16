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

    ListNode* reverse(ListNode* head){
        ListNode* temp=NULL;

        while(head){
            ListNode* p=head->next;
            head->next=temp;
            temp=head;
            head=p;
        }
        return temp;
    }

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        l1= reverse(l1);
        l2= reverse(l2);
        
        ListNode* temp=new ListNode(0);
        ListNode* dummy=temp;
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

            ListNode *node=new ListNode(p%10);
            temp->next=node;
            temp=temp->next;
        }
        dummy->next= reverse(dummy->next);
    return dummy->next;   
    }
};
