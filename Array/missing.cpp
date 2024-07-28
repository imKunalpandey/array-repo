#include<iostream>
#include<vector>
using namespace std;

//Find the missing number in an array



int missingArray(int arr[],int n){
    int expected_sum=n*(n+1)/2;
    int actual_sum=0;
    for(int i=0;i<n;i++){
        actual_sum+=arr[i];
    }
    return expected_sum - actual_sum;
}
int main(){
    int n;
    cout<<"enter the no of element:";
    cin>>n;
    int arr[n];
    cout<<"Please enter the elements of the array (excluding the missing number):"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
     // Find the missing number
    int missing = missingArray(arr, n);

    cout << "The missing number is: " << missing << endl;
    return 0;
}