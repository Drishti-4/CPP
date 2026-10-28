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
        node *newnode = new node();
        cout<<"enter data for node"<<" ";
        cin>>newnode->data;;
        newnode->next=NULL;
        if(first==NULL){
            first=newnode;
            last=newnode;
        }else{
            last->next=newnode;
            last=newnode;
            
        }
    }
    cout<<"original linked list:";
    temp = first;
    while(temp!=NULL){
        cout<<temp->data << " ";
        temp=temp->next;
    }

    int pos;
    cout<<"enter position to delete";
    cin>>pos;

    temp=first;
    for(int i=1;i<pos-1;i++){
        temp=temp->next;
    }

    node *delNode = temp->next;
    temp->next=delNode->next;
    delete delNode;
    cout << endl;

     cout << "new linked list : ";
    temp = first;
    while(temp != NULL) {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    return 0;
}