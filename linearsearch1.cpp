#include <iostream>
using namespace std;
int main(){
    int key;
    int arr[50],n;
    cout<<"enter no. of elements";
    cin>>n;
    cout<<"enter array elements:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
     cout<<"enter the no. to be find";
    cin>>key;
    
    for(int i=0;i<n;i++){
        if (arr[i]==key){
        cout<<"found at position :"<<i+1;
        return 0;
        }
    }
 cout << "element not found";
 return 0;
}