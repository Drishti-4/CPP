#include<iostream>
using namespace std;
int main(){
    int arr[50],n,low,mid,high,key;
    cout<<"enter no. of elements";
    cin>>n;
    cout<<"enter array elements";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
     cout<<"enter the no. you need to find";
    cin>>key;
    while(low<=high){
        mid=((low+high)/2);
        if(arr[mid]==key){
            cout<<"element found at position:"<<mid+1;
            return 0;
        }
        else if(arr[mid]<key){
            low=mid+1;
            
        }
        else{
            high=mid-1;
        }

    }
    cout<<"element not found";
    return 0;
}