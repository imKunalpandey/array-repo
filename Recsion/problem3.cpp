#include<iostream>
using namespace std;

void reverseArray(int i,int arr[],int n){
    //base condition 
    if(i>=n/2){
        return;
    }
    swap(arr[i],arr[n-i-1]); //swaping condition
    reverseArray(i+1,arr,n);
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    
    for(int i=0;i<n;i++){
        
        cin>>arr[i];
       
    }
    reverseArray(0,arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"";
    }
    return 0;
}