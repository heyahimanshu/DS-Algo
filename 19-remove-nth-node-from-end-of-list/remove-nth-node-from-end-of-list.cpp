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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==NULL) return NULL;
        int count=0;
        ListNode* temp = head;
        while(temp){
            count++;
            temp=temp->next;
        }
        if(count==n){
            ListNode*x=head;
            head=head->next;
            delete x;
            return head;
        }
        ListNode* temp1=head;
        ListNode* prev=NULL;
        int count1=0;
        while(temp1){
            count1++;
            if(count1==count-n+1){
                prev->next=prev->next->next;
                delete temp1;
                break;
            }
            prev=temp1;
            temp1=temp1->next;
        }
        return head;

    }
};