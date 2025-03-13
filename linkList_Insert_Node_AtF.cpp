#include<iostream>
using namespace std;
class Node {
	public:
	   int Value;
	   Node* Next;
};
void printList(Node* n){
	while(n!=NULL){
  	cout <<"["<< n->Value << "]" << " ";
	n = n->Next;
  }
}
void insertAtTheFront(Node**head, int newValue){
	//1. Prepare a newNode
	Node *newNode = new Node();
	newNode->Value = newValue;
	//2. Put it in front of current head
	newNode->Next = *head;
	//3. Move head of the list to point to the newNode
	*head = newNode;
}
void insertAtTheEnd(Node** head, int newValue){
	//1. Prepare a newNode
	Node* newNode = new Node();
	newNode->Value = newValue;
	newNode->Next = NULL;
	//2. If Linked list is empty, newNode will be a head node
	if(*head == NULL){*head = newNode; return;}
	//3. Find the last node
	Node* last = *head;
	while(last->Next!=NULL){
   		last = last->Next;
   }
	//4. Insert newNode after last node (at the end)
	last->Next = newNode;
}
void insertAfter(Node* previous, int newValue){
	//1. Check if previous node is NULL
	if(previous == NULL){
		cout << "Privious can't be NULL" << endl;
		return;
	}
	//2. Prepare a newNode
	Node* newNode = new Node();
	newNode->Value = newValue;
	//3. Insert newNode after previous
	newNode->Next = previous->Next;
	previous->Next = newNode;
}
int main(){
	Node* head = new Node();
	Node* second = new Node();
	Node* third = new Node();

	head->Value = 1;
		head->Next = second;
	second->Value = 2;
		second->Next = third;
	third->Value = 3;
		third->Next = NULL;
	cout << "\n" << "LinkList is-> ";
	//insertAtTheFront(&head, 0);
	//insertAtTheFront(&head, -1);
	//insertAtTheFront(&head, -2);
	insertAfter(head, 4);
        insertAfter(head->Next->Next, 5);
	//insertAtTheEnd(&head, 6);
	//insertAtTheEnd(&head, 7);
	printList(head);
	cout << "\n" << endl;
}
