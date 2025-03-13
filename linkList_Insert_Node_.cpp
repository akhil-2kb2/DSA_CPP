#include <iostream>
using namespace std;

class Node {
public:
    int value;
    Node* next;

    // Constructor to initialize node with a value and optional next pointer
    Node(int val) : value(val), next(nullptr) {}
};

class LinkedList {
private:
    Node* head;
    Node* tail;

public:
    // Constructor initializes an empty list with head and tail as nullptr
    LinkedList() : head(nullptr), tail(nullptr) {}

    // Destructor to delete all nodes and free memory
    ~LinkedList() {
        Node* current = head;
        while (current != nullptr) {
            Node* next = current->next;
            delete current;
            current = next;
        }
    }

    // Inserts a new node at the beginning of the list
    void insertAtFront(int newValue) {
        Node* newNode = new Node(newValue);
        newNode->next = head;
        head = newNode;
        if (tail == nullptr) {  // If list was empty, update tail
            tail = head;
        }
    }

    // Inserts a new node at the end of the list
    void insertAtEnd(int newValue) {
        Node* newNode = new Node(newValue);
        if (tail == nullptr) {  // If list is empty, head and tail both point to newNode
            head = tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    // Inserts a new node after a given previous node
    bool insertAfter(Node* previous, int newValue) {
        if (previous == nullptr) {  // Ensure previous node is valid
            cout << "Previous node cannot be NULL" << endl;
            return false;
        }
        Node* newNode = new Node(newValue);
        newNode->next = previous->next;
        previous->next = newNode;

        // Update tail if the new node is inserted at the end
        if (previous == tail) {
            tail = newNode;
        }
        return true;
    }

    // Prints the entire list
    void printList() const {
        if (head == nullptr) {
            cout << "List is empty" << endl;
            return;
        }
        Node* temp = head;
        while (temp != nullptr) {
            cout << "[" << temp->value << "] ";
            temp = temp->next;
        }
        cout << endl;
    }

    // Retrieves the head of the list
    Node* getHead() const {
        return head;
    }
};

int main() {
    LinkedList list;

    list.insertAtEnd(10);
    list.insertAtEnd(20);
    list.insertAtEnd(30);
    list.insertAtFront(5);

    // Inserting after the first node (list.getHead()->next)
    list.insertAfter(list.getHead()->next, 15);

    cout << "Linked List: ";
    list.printList();  // Expected Output: [5] [10] [15] [20] [30]

    return 0;
}

