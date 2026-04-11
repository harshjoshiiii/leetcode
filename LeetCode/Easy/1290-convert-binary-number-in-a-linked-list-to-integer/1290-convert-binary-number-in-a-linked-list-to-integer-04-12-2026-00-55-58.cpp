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
    int getDecimalValue(ListNode* head) {
        string ans="";
        ListNode* temp=head;
        while(temp)
        {
            ans+=(temp->val+'0');
            temp=temp->next;
        }
        int num = stoi(ans, 0, 2); // base 2
    return num;
    }
};