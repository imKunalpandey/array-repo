#include<iostream>
using namespace std;


void leftRotatedByOne(int arr[],int n){
    int temp=arr[0];// storing the first element of array in a variable
    for(int i=1;i<n;i++){
        arr[i-1]=arr[i];
    }
    arr[n-1]=temp;//// assigned the value of variable at the last index

   for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
}
 

int main(){
    int n;
    cout<<"enter the element:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    

    leftRotatedByOne(arr, n);

    

    return 0;

}
