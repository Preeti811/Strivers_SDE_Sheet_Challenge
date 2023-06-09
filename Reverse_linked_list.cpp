class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        
        ListNode *t=NULL;
                
        while(head!=NULL){
            ListNode *temp=head->next;
            head->next=t;
            t=head;
            head=temp;
        }
       return t;  
       
       //using stack
        
//         ListNode* temp=head;
//         stack<int> s;
        
//         while(temp){
//             s.push(temp->val);
//             temp=temp->next;
//         }
        
       
//        temp=head;
//         while(!s.empty()){
//             temp->val=s.top();
//             s.pop();
//             temp=temp->next;
//         }
//         return head;
    }
};
