#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

// Create a new node
Node* createNode(int value) {
    Node* newNode = new Node;
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}

// Insert at beginning
void insertBeginning(Node*& head, int value) {
    Node* newNode = createNode(value);
    newNode->next = head;
    head = newNode;
}

// Insert at ending
void insertEnd(Node*& head, int value) {
    Node* newNode = createNode(value);

    if (head == NULL) {
        head = newNode;
        return;
    }

    Node* temp = head;

    while (temp->next != NULL)
        temp = temp->next;

    temp->next = newNode;
}

// Insert at any position
void insertPosition(Node*& head, int value, int pos) {
    if (pos == 1) {
        insertBeginning(head, value);
        return;
    }

    Node* temp = head;

    for (int i = 1; i < pos - 1 && temp != NULL; i++)
        temp = temp->next;

    if (temp == NULL) {
        cout << "Invalid position!" << endl;
        return;
    }

    Node* newNode = createNode(value);

    newNode->next = temp->next;
    temp->next = newNode;
}

// Display linked list
void display(Node* head) {
    Node* temp = head;

    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }

    cout << "NULL" << endl;
}

int main() {
    Node* head = NULL;

    // Creating linked list
    insertEnd(head, 10);
    insertEnd(head, 20);
    insertEnd(head, 30);

    cout << "Original Linked List: ";
    display(head);

    // Insert at beginning
    insertBeginning(head, 5);
    cout << "After insertion at beginning: ";
    display(head);

    // Insert at ending
    insertEnd(head, 40);
    cout << "After insertion at ending: ";
    display(head);

    // Insert at position
    insertPosition(head, 25, 4);
    cout << "After insertion at position 4: ";
    display(head);

    return 0;
}