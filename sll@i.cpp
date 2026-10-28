#include <iostream>
using namespace std;
class node{
    public:
    int data;
    node *next;
};
int main() {
    int n,value;
    cout << "enter the number of nodes";
    cin >> n;
    node *first = NULL;
    node *last = NULL;
    node *temp;
    for(int i=1 ; i<=n ; i++) {
        node *newNode = new node();
        cout << "enter the data for newnode" << endl;
        cin >> newNode -> data;
        newNode -> next = NULL;
        if (first == NULL) {
            first = newNode;
            last = newNode;
        }
        else {
            last -> next = newNode ; 
            last = newNode;
        }
    }
    cout << "original linked list : ";
    temp = first;
    while (temp != NULL) {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;

    cout << "enter element to insert at beginning";
    cin >> value ;
    node *newNode = new node();
    newNode -> data = value;
    newNode -> next = first;
    first = newNode;

    cout << "new linked list : ";
    temp = first;
    while(temp != NULL) {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    return 0;
}