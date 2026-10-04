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
    bool isPalindrome(ListNode* head) {
	// reach mid first 
	ListNode* slow = head;
	ListNode* fast = head;
	while (fast != nullptr && fast->next != nullptr)
	{
		slow = slow->next;
		fast = fast->next->next;
	}

	ListNode* mid = slow;

	//reverse second half
	ListNode* p = slow;
	ListNode* q = nullptr;
	ListNode* r = nullptr;
	while (p != nullptr)
	{
		r = q;
		q = p;
		p = p->next;
		q->next = r;
	}

	ListNode* first = head;
	ListNode* second = q;

	//

	while (second != nullptr)
	{
		if (first->val != second->val)
		{
			return false;
		}
		first = first->next;
		second = second->next;
	}
	return true;
}
};