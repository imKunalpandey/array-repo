#include<iostream>
using namespace std;

void bubbleSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        bool swapped= false;
        for(int j=0;j<n-i-1;j++){  //stope before the sorted portion
           if(arr[j]>arr[j+1]){
            //the swap
            swap(arr[j],arr[j+1]);
            swapped= true;
           }
        }
        if(!swapped){
            break;
        }
    }
    //after bubble sorting
    cout<<"after bubble sort"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
}

int main(){
    int n;
    cout << "Enter number of elements: "<<endl;
    cin>>n;
    int arr[n];
    cout << "Enter the array: "<<endl;
    for(int i=0;i<n;i++) cin>>arr[i];

     //before bubble sorting
    cout<<"before bubble sort"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";

    bubbleSort(arr,n);

    return 0;
}