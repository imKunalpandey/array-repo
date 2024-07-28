#include<iostream>
using namespace std;

////Parameterized way.....

// void sumFirstN(int i, int sum){
//     //base case
//     if(i<1){
//         cout<<sum<<endl;
//         return;
//     }
//     sumFirstN(i-1,sum+i);
// }
// int main(){
//     int n;
//     cout<<"please enter the no__"<<endl;
//     cin>>n;
//     sumFirstN(n,0);
//     return 0;
// }

// void sumFirstNo(int n){
//     int sum=n*(n+1)/2;
//     cout<<"the sum of the no is__"<<sum<<endl;

// }

// int main(){
//     int n;
//     cout<<"please enter the no__";
//     cin>>n;
//     sumFirstNo(n);
// }

// calculate factorial of the given no___ by using recusion...


int factOfNo(int n){
    // base case__
    if(n==0)
    {return 1;

    } 
    return n*factOfNo(n-1);
}

int main(){
    int n;
    cout<<"please enter your desire no__";
    cin>>n;
    cout<<factOfNo(n)<<endl;
    return 0;
}