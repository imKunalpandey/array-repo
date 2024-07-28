#include<iostream>
using namespace std;

int fabonacci(int n){
    //base case
    if(n<=1){
        return n;
    }
    // Problem broken down into 2 functional calls
   
    int last=fabonacci(n-1);
    int slast= fabonacci(n-2);
    // and their results combined and returned.
    return last+slast;
}
int main(){
    int n;
    cout<<"please enter the no__";
    cin>>n;
    cout<<"fibonacci no is__ "<<fabonacci(n)<<endl;
    return 0;
}