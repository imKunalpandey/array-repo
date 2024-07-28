#include<iostream>
using namespace std;

void rotateLeft(int arr[],int k, int n){
    if(n==0) return;
    k=k%n;
    if(k>n){
        return;
    }
    int temp[k];//store k in temp 
    for(int i=0;i<k;i++){
        temp[i]=arr[i];
    }

    for(int i=k;i<n;i++){
        arr[i-k]=arr[i];//shifting eliment on left side
    }

    //put last element
    for(int i=n-k;i<n;i++){
        arr[i]=temp[i-(n-k)];
    }

}

int main(){
    int n;
    cout<<"enter the no of element:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cout<<"please enter the the value of k:";
    cin>>k;

    rotateLeft(arr, k, n);

    cout<<"after rotating the element to the left:"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}