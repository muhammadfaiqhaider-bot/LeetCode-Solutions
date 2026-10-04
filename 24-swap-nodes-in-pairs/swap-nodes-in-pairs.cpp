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
    ListNode* swapPairs(ListNode* head) {

	if (head == nullptr || head->next == nullptr)
		return head;

	ListNode* right = head->next;
	ListNode* left = head;

	head = right;

	ListNode* previous = nullptr;
	ListNode* temp = nullptr;

	while (left != nullptr && right != nullptr) {

		temp = left;
		left->next = right->next;
		right->next = temp;

		if (previous != nullptr)
			previous->next = right;

		previous = left;

		left = left->next;

		if (left != nullptr)
			right = left->next;
	}

	return head;
}
};