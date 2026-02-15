// Double DoubleLinkedList
#include <iostream>
using namespace std;

class Node {
	public:
		int data;
		Node *next;
		Node *prev;
		Node(int data) : data(data), next(nullptr), prev(nullptr) {}
};

class DoubleLinkedList {
	private:
		Node *head; // first node
		Node *tail; // last node
	public:
		DoubleLinkedList() : head(nullptr) {} // empty(null) when created

		void push_back(int data) {
			Node *nNode = new Node(data); // creating an object to add

			// if empty
			if (!head) {
				head = tail = nNode; // now points to this node
				return;
			}


			// if not empty
			tail->next = nNode;
			nNode->prev = tail;
			tail = nNode;
		}

		void push_front(int data) {
			Node *nNode = new Node(data);

			if(head == nullptr) {
				head = tail = nNode; // now points to this node
				return;
			}

			nNode->next = head; // points to head
			nNode->prev = nullptr;
			head->prev = nNode;
			head = nNode; // becomes head
		}

		void insert(int pos, int data) {
			Node* nNode = new Node(data);

			if(pos == 0 || !head) {
				nNode->next = head;
				head = nNode;
			}

			Node* temp = head;

			for(int i = 0; i < pos && temp; i++) {
				temp = temp->next;
			}

			if(!temp) {
				delete nNode;
				return; // out of bounds
			}
			nNode->next = temp->next;
			nNode->prev = temp;

			// if the next node exists (not nullptr)
			if(temp->next) {
				temp->next->prev = nNode;
			}

			temp->next = nNode;

		}

		void pop_back() {
			if(!head) return;

			// only 1 value
			if(head == tail) {
				head = tail = nullptr;
				return;
			}
			// more values

			Node* temp = tail;
			tail = tail->prev;
			tail->next = nullptr;
			delete temp;
		}


		void pop_front() {
			if(!head) return;

			if(head == tail) {
				head = tail = nullptr;
				return;
			}

			Node* temp = head;
			head = head->next;
			head->prev = nullptr;
			delete temp;
		}

		void remove(int pos) {
			if(!head) return;

			if (pos == 0) {
				head = head->next;
				if (head) head->prev = nullptr;
				return;
			}

			Node* temp = head;
			Node* prev = nullptr;

			int i = 0;

			// move to pos position
			for(int i = 0; i < pos && temp; i++) {
				temp = temp->next;
			}

			// if middle val
			if(!temp)
				return; // out of bounds

			if(temp->prev) temp->prev->next = temp->next;

			if(temp->next) temp->next->prev = temp->prev; // the next node prev should reference the previous node, not the deleted one.


		}


		bool search(int value) {
			if(!head) return false;
			// using 2 pointer approach

			Node* front = head;
			Node* back = tail;

			while(front != back && front->next != back) {
				if(front->data == value || back->data== value) return true;

				front = front->next;
				back = back->prev;
			}

			if(front == back) {
				if(front->data == value) {
					return true;
				}
			}
			return false;
		}


		// normal traversal
		void display() {
			Node *temp = head;
			while (temp != nullptr) {
				cout << "VALUE: " << temp->data << endl;
				temp = temp->next;
			}
		}

		// two-pointer approach (unordered print)
		void display2() {
			if(!head) return;
			Node* front = head;
			Node* back = tail;

			while(front != back && front->next != back) {
				cout<<front->data<<endl;
				cout<<back->data<<endl;

				front = front->next;
				back = back->prev;

			}
			// if odd
			if(front == back) {
				cout<<front->data<<endl;
			} else {
				cout << front->data<<endl;
				cout << back->data<<endl;
			}
		}

};

int main() {
	DoubleLinkedList l1;
	l1.push_back(10);
	l1.push_back(11);
	l1.push_back(12);
	l1.push_back(13);
	l1.push_back(14);

	// l1.push_front(9);

	cout << "11 Exists: " << l1.search(11) << endl;

	cout<<"Before: "<<endl;
	l1.display(); // shows: 10,12
	// l1.remove(1);
	
	l1.insert(1, 17);

	cout<<"After: "<<endl;
	l1.display();
}