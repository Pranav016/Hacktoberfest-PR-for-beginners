#include<bits/stdc++.h>
using namespace std;

class LinkedList
{
	public:

	class Node
	{
		public:
		int data;
		Node* next;
		Node(int d)
		{
			data = d;
			next = NULL;
		}
	};

	Node* head;


	Node* deleteNode(int key)
	{

		Node *temp;


		Node *first = head;


		Node *second = head;
		for (int i = 0; i < key; i++)
		{


			if (second->next == NULL)
			{

				if (i == key - 1){
					temp = head;
					head = head->next;
					free (temp);
				}
				return head;
			}
			second = second->next;
		}


		while (second->next != NULL)
		{
			first = first->next;
			second = second->next;
		}


		temp = first->next;
		first->next = first->next->next;
		free (temp);
		return head;
	}

	Node* push(int new_data)
	{
		Node* new_node = new Node(new_data);
		new_node->next = head;
		head = new_node;
		return head;
	}

	void printList()
	{
		Node* tnode = head;
		while (tnode != NULL)
		{
			cout << (tnode->data) << ( " ");
			tnode = tnode->next;
		}
	}
};


int main()
{
	LinkedList* llist = new LinkedList();


	llist->head = llist->push(10);
	llist->head = llist->push(5);
	llist->head = llist->push(23);
	llist->head = llist->push(45);

	cout << ("Linked list:\n");
	llist->printList();

	int N;
	cout << ("\n\nEnter the Nth node to be deleted: ");
	cin >> N;
	llist->head = llist->deleteNode(N);

	cout << ("\nLinked List after Deletion:\n");
	llist->printList();
}

