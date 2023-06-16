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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
       
        ListNode* temp, *dummy;
       // dummy= new ListNode();
        temp=NULL;
        dummy=NULL;
        if(list1==NULL)
            return list2;

        if(list2==NULL)
            return list1;

        if(list1->val > list2->val){
            temp=list2;
            dummy=list2;
            list2=list2->next;
        }
        else{
            temp=list1;
            dummy=list1;
            list1=list1->next;            
        }
        
        while(list1 && list2){
            if(list1->val>list2->val){
                temp->next=list2;
                list2=list2->next;
            }
            else{
                temp->next=list1;
                list1=list1->next;
            }
            temp=temp->next;
        }
        if(list1)
             temp->next=list1;
        if(list2)
            temp->next=list2;
        
        return dummy;
    }
};
