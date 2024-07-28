#include<iostream>
using namespace std;

void printName(int i,int n){
    // if(i>n) // Base Condition  // Base case: if i exceeds n, return
    // return;
    // cout<<"Prince"<<endl;
    //for printing 1 to n;
    //for printing n,1 then,
     if(i<1) return;

    cout<<i<<endl;
    printName(i-1,n);

    // printName(i+1,n); // Function call to print till i increments.
}
int main(){
    int n;
    cout<<"please enter the no"<<endl;
    cin>>n;
    // printName(1,n); // Call the function to print "Prince" n times....10

    //for printing n to 1;
    printName(n,n);

    return 0;

}