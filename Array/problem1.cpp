#include<iostream>
using namespace std;
//find largest element in an array

int largestElement(int arr[], int n){
      int max= arr[0];
      for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
      }
      return max;
}

int main(){
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    int max= largestElement(arr,n);
    cout<<"the largest no is :"<<max<<endl;
    return 0;
}