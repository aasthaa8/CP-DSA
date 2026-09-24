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
    void reorderList(ListNode* head) {

        ListNode *slow= head;
        ListNode*fast=head->next;
        while(fast!=nullptr && fast->next!=nullptr)
        {
            slow=slow->next;
            fast=fast->next;
            fast=fast->next;
        }
        ListNode* prev=nullptr;
        ListNode* curr=slow;
        while(curr!=nullptr)
        {
            ListNode *next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }

        ListNode *start=head;
        while(start!=nullptr && prev!=nullptr)
        {
            ListNode *temp=start->next;
            ListNode *temp2=prev->next;
            start->next=prev;
            prev->next=temp;
            start=temp;
            prev=temp2;
        }
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna