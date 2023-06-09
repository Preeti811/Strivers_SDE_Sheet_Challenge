class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        
        // ListNode* temp=head;        
        // int length=0;        
        // while(temp){
        //     length++;
        //     temp=temp->next;
        // }        
        // int middle=length/2;        
                
        // while(middle--)
        //     temp=temp->next;        
        // return temp;


        //second approach
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast && fast->next){
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
    }
};
