/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* getIntersectionNode(ListNode* headA, ListNode* headB) {
    stack<ListNode*> st1;
    stack<ListNode*> st2;

    while (headA)
    {
        st1.push(headA);
        headA = headA->next;
    }

    while (headB)
    {
        st2.push(headB);
        headB = headB->next;
    }

    ListNode* ans = nullptr;

    while (!st1.empty() && !st2.empty() && st1.top() == st2.top())
    {
        ans = st1.top();

        st1.pop();
        st2.pop();
    }

    return ans;
}
};