
////check if an array is sorted and rotated:

#include<iostream>
#include<vector>
using namespace std;

class solution{
    public:
    bool check(vector<int> & nums){
             int n= nums.size();
             int count=0;

             for(int i=1;i<n;i++){
                if(nums[i]<nums[i-1]){
                    count++;
                }
             }
             // circular check....
             if(nums[n-1]>nums[0]){
                count++;
             }
             // For a sorted and rotated array, there should be at most one "drop"
             return count<=1; //if count is more than 1 it means the array has multiple drops and hence its not sorted so this condition is given


    }
};

  ///brute force appoarch for check array is sorted

  bool isSorted(int arr[],int n){
    for(int i=1;i<n;i++){
        if(arr[i]>=arr[i-1]){

        }
        else{
            return false;
        }
    }

     return true;
  }

int main(){
    int n;
    cout<<"enter the no:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    bool ans=isSorted(arr,n);
    if(ans) cout<<"true"<<endl;
    else cout<<"false"<<endl;
    return 0;

}