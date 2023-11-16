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

    // time=O(n) and space=O(1)
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* currentNode=head;
        while(currentNode!=nullptr){
            ListNode* temp=currentNode->next;
            if(temp!=nullptr and temp->val==currentNode->val){
                currentNode->next=temp->next;
                delete temp;
            }else{
                currentNode=temp;
            }

        }
        return head;
        
    }
