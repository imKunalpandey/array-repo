
// find how many time the number appears in the array.....

#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Please enter the number of elements in the array..." << endl;
    cin >> n;

    // Dynamically allocate array
    int arr[n];
    cout << "Enter the elements of the array..." << endl;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    // Precompute using a hash array (assuming maximum value in arr is 12)
    int hash[13] = {0}; 
    for(int i = 0; i < n; i++){
        // Increment the count
        hash[arr[i]] += 1;
    }

    int q;
    cout << "Please enter the number of queries..." << endl;
    cin >> q;
    cout << "Enter the query elements..." << endl;
    while (q--){
        int number;
        cin >> number;
        // Fetch and print the count of number in the array
        cout << hash[number] << endl;
    }

    return 0;
}