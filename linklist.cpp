#include<iostream>
using namespace std;
class Node {
   public:
	int Value;
	Node* Next;
};
void printList(Node*n){
	while(n!=NULL){
	   cout << n->Value << " ";
	   n =n->Next;
 }
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
	printList(head);
	cout << endl;
}
