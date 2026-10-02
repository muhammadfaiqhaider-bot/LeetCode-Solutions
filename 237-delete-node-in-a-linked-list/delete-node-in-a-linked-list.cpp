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
    void deleteNode(ListNode* node) {

	ListNode* temp = node;
	ListNode* pre = nullptr;
	while (temp->next != nullptr)
	{

		temp->val = temp->next->val;
		pre = temp;
		temp = temp->next;
		if (temp->next == nullptr)
			pre->next = nullptr;
	}
	delete temp;

}
};