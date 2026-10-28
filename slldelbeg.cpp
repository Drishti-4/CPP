#include<iostream>
using namespace std;
 class node{
    public:
    int data;
    node *next;
 };
 int main(){
    int n,value;
    cout<<"enter no. of nodes";
    cin>>n;
    node *first=NULL;
    node *last=NULL; 
    node *temp;
    for (int i=1;i<=n;i++){
        node *newNode = new node();
        cout<<"enter data for node"<<" ";
        cin>>newNode->data;;
        newNode->next=NULL;
        if(first==NULL){
            first=newNode;
            last=newNode;
        }else{
            last->next=newNode;
            last=newNode;
            
        }
    }
    cout<<"original linked list:";
    temp = first;
    while(temp!=NULL){
        cout<<temp->data << " ";
        temp=temp->next;
    }
    temp = first;
    first = first -> next;
    delete temp;
    temp = first;
    cout << endl;

     cout << "new linked list : ";
    temp = first;
    while(temp != NULL) {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    return 0;
}