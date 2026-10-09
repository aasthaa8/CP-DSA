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

    void rev(ListNode* head,int times)
    {
        ListNode* curr=head;
        ListNode* prev=nullptr;

        while(times--)
        {
            ListNode* nex=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nex;
        }
        return;
    }
    ListNode* swapPairs(ListNode* head) {
        if(head==nullptr)
        {
            return head;
        }

        ListNode* left=head;
        ListNode* prevleft=nullptr;
        ListNode* res=nullptr;

        while(true)
        {
            ListNode*right=left;
            for(int i=0;i<1;i++)
            {
                if(right==nullptr)
                {
                    break;
                }
                right=right->next;
            }
            if(right)
            {
                ListNode* nextleft=right->next;
                rev(left,2);
                if(prevleft)
                {
                    prevleft->next=right;
                    prevleft=left;
                }
                if(res==nullptr)
                {
                    res=right;
                    prevleft = left;
                }
                left=nextleft;
            }
            else
            {
                if(prevleft)
                {
                    prevleft->next=left;
                }
                if(res==nullptr)
                {
                    res=left;
                }
                break;
            }
        }
        return res;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna