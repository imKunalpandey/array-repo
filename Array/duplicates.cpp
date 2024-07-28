#include<iostream>
#include<set>
using namespace std;

int removeDuplicate(int arr[],int n){
    // set<int>st;
    // for(int i=0;i<n;i++){
    //     st.insert(arr[i]);
    // }

    //optimal approch or two pointer approch

    // int i=0;
    // for(int j=1;j<n;j++){
    //     if(arr[i]!=arr[j]){
    //         arr[i+1]=arr[j];
    //         i++;
    //     }
    // }
    // return i+1;

    int index=1;
    for(int i=1;i<n;i++){
        // If the current element is different from the previous one, it is unique
        if(arr[i]!=arr[i-1]){
            arr[index++]=arr[i];// Update the array in-place
        }
    }
    return index;// Return the new length of the array with unique elements

}

int main(){
    int n;
    cout<<"enter the no:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k = removeDuplicate(arr, n);
  cout << "The array after removing duplicate elements is " << endl;
  for (int i = 0; i < k; i++) {
    cout << arr[i] << " ";
  }
  return 0;
}
