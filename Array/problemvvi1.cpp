//find second largest element in given an array

#include<iostream>
#include <algorithm> // For the sort function
#include <limits.h>
using namespace std;

//this is the brute force approch in which it is NOT valid for if single array... and if all the arry have same value

// int sLargestElement(int arr[],int n){
//      sort(arr, arr+n);
//      int largest= arr[n-1];
//      int sLargest;
//      for(int i=n-2;i>=0;i--){
//         if(arr[i]!=largest){
//             sLargest=arr[i];
//             break;
//         }
//      }
//      return sLargest;
// }

// int main(){
//     int n;
//     cout<<"enter the no arry :";
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++) cin>>arr[i];
//     int result= sLargestElement(arr,n);
//     cout<<"the second largest element is :"<<result<<endl;
//     return 0;
// }

// OPTIMAL APPROCH................

int sLargestElement(int arr[],int n){
    //Edge Case Handling
    if(n<2){ 
    cout<<"Array should have atleast 2 element :"<<endl;
    return -1;
    }

    int largest=INT_MIN;
    int sLargest= INT_MIN;

    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            sLargest=largest;// Set second to the current value of first because the old largest element (first) is now the second largest.
            largest=arr[i];//Set first to the current element (arr[i]), making it the new largest element.
        }
        else if(arr[i]>sLargest && arr[i]<largest){
            sLargest=arr[i];
        }
    }

      //Check for No Second Largest:
      if(sLargest==INT_MIN){
        cout<<"there is no second largest element:"<<endl;
        return INT_MIN;
      }
    
    
    
    
    
    return sLargest;

}

int main(){
    int n;
    cout<<"enter the no of array:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    int result=sLargestElement(arr,n);
    cout<<"the second largest element is:"<<result<<endl;
    return 0;
}