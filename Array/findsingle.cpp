#include<iostream>
#include<vector>
using namespace std;
//Find the number that appears once, and the other numbers twice

int findSingleElement(vector<int>&nums){
    int n=nums.size();
    int singleElement=0;
    for(int i=0;i<n;i++){
        singleElement=singleElement^nums[i];
    }
    return singleElement;
}

int main(){
    int n;
    cout<<"enter the no:";
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    
    int result= findSingleElement(nums);
    cout << "The single number is: " << result<<endl;
    return 0;
}