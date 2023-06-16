class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {

        if(head==NULL || k==0 || head->next==NULL)
            return head;

        int cnt=1;
        ListNode* temp=head;
        while(temp->next){
            cnt++;
            temp=temp->next;
        }
        temp->next=head;
        k=k%cnt;
        k=cnt-k;

        while(k>0){
            temp=temp->next;  k--;        
        }
        head=temp->next;
        temp->next=NULL;
        return head;
    }
};
