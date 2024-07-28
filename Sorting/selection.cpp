#include<iostream>
using namespace std;

// Given an array of N integers, write a program to implement the Selection sorting algorithm.

void selection_sort(int arr[], int n){
    for(int i=0;i<n-1;i++){
        //let first element be minimum.
        int mini=i;
        //inner loop
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[mini]){
                mini=j;
            }
        }
        //swap after minimum element find
        int temp = arr[mini];
        arr[mini]=arr[i];
        arr[i]= temp;
    }
    //after selection sort element will be
    cout<<"after selection sort"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout << "\n";
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i]; //enter the array
    
    cout<<"before selection sort"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout << "\n";
    selection_sort(arr,n); //This line of code is a function call in C++
    return 0;

        
    
}