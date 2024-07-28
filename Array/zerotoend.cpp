#include<iostream>
#include <vector>
using namespace std;

//brute force approch

void moveZero(int arr[], int n) {
    vector<int> temp;

    // Collect all non-zero elements
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            temp.push_back(arr[i]);
        }
    }

    // Number of non-zero elements
    int nz = temp.size();

    // Move non-zero elements back to the original array
    for (int i = 0; i < nz; i++) {
        arr[i] = temp[i];
    }

    // Fill the rest of the array with zeros
    for (int i = nz; i < n; i++) {
        arr[i] = 0;
    }

    // _________________..................optimal approch....................________________

    int j=-1;
    //find first zero
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            j=i;
            break;
        }
    }
    // If no zero is found, return as the array is already sorted
    if(j==-1)return;
    // Move non-zero elements to the left
    for(int=j+1;i<n;i++){
        if(arr[i]!=0){
            swap(arr[i],arr[j]);
            j++;
        }
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
    
     moveZero(arr,n);

    cout<<"after puting all the zero to the last:"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}