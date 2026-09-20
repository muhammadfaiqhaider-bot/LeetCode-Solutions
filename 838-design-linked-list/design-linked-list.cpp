struct Node {
	int value;
	Node* next;
};

class MyLinkedList
{
public:
	Node* head; // this create pointer to the first node of list

	MyLinkedList() {
		head = nullptr;
	}

	int get(int index) {

		if (head == nullptr)return -1;

		int count = 0;
		Node* temp = new Node;
		temp = head;

		while (temp != nullptr)
		{
			if (count == index)return temp->value;

			temp = temp->next;
			count++;
		}

		return -1;
	}

	void addAtHead(int val) {
		Node* temp = new Node;
		temp->value = val;

		temp->next = head;
		head = temp;
	}

	void addAtTail(int val) {
		Node* newNode = new Node;
		newNode->value = val;

		if (head == nullptr)
		{
			head = newNode;
			head->next = nullptr;
			return;
		}

		Node* temp = new Node;
		temp = head;

		while (temp->next != nullptr)
		{
			temp = temp->next;
		}
		temp->next= newNode;
		newNode->next = nullptr;
	}

	void addAtIndex(int index, int val) {
		Node* newNode = new Node;
		newNode->value = val;

		Node* pre = nullptr;
		Node* temp = head;

		if (index == 0)
		{
			newNode->next = head;
			head = newNode;
			return;
		}

		for (int i = 0; i <= index; i++)
		{
			if (temp == nullptr && i < index) { delete newNode; return; }
			if (index == i) {
				if (temp == nullptr)
				{
					pre->next = newNode;
					newNode->next = nullptr;
					return;
				}
				pre->next = newNode;
				newNode->next = temp;
				return;
			}
			pre = temp;
			temp = temp->next;
		}
	}


	void deleteAtIndex(int index) {

		if (head == nullptr)return;
		Node* temp = head;
		Node* pre = nullptr;

		int count = 0;

		if (index == 0)
		{
			head = head->next;
			delete temp;
			return;
		}

		while (temp != nullptr)
		{
			if (count == index)
			{
				pre->next = temp->next;
				delete temp;
				return;
			}
			pre = temp;
			temp = temp->next;
			count++;
		}
	}

};