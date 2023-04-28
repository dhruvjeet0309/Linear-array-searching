#include<iostream>
using namespace std;

int main(){
    int arr[100],i,n,f;
    
    cout<<"Enter index : ";
    cin>>n;
    
    cout<<"\nEnter array : ";
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    
    cout<<"\nYour array : ";
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
    cout<<"\nEnter the number : ";
    cin>>f;
    
    for(i=0;i<n;i++){
        if(arr[i]==f){
            cout<<"Number found at position "<<i+1;
            break;
        }
    }
    
    for(i=i+1;i<n;i++){
        if(arr[i]==f){
            cout<<" , "<<i+1;
            break;
        }
    }
    
    
    if(i==n){
        cout<<"Number not found.  ";
    }
    
    return 0;
}