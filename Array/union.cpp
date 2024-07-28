#include<iostream>
#include<set>
#include<vector>

using namespace std;

//________________.....brute force approch for union of two sorted array....._____________
vector<int> findUnion(int arr1[],int arr2[],int n,int m){
    set<int>st;
    for(int i=0;i<n;i++){
        st.insert(arr1[i]);
    }
    //for array 2
    for(int i=0;i<m;i++){
        st.insert(arr2[i]);
    }
    // Creating the result vector from the set
    vector<int>temp;
    for(auto it:st){
        temp.push_back(it);
    }
    return temp;


}

int main(){
    int n;
    cout<<"enter the value of n:";
    cin>>n;
    int m;
    cout<<"enter the value of m:";
    cin>>m;
    int arr1[n];
    cout<<"please enter the element for array1:"<<endl;

    for(int i=0;i<n;i++)cin>>arr1[i];

    int arr2[m];
    cout<<"please enter the element for array2:"<<endl;
    for(int i=0;i<m;i++)cin>>arr2[i];
    
    vector<int> unionArray = findUnion(arr1, arr2, n, m);//declare a vector name 

    cout<<"after the union the array will be:"<<endl;
    for(int i=0;i<unionArray.size();i++){
        cout<<unionArray[i]<<" ";
    }
    cout<<endl;

    return 0;
}