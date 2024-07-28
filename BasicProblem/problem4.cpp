#include<iostream>

using namespace std;

bool isPrime(int n){
    if(n<=1){
        return false;
    }
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    int n;
    cout <<"please enter the no__";
    cin>>n;
    if(isPrime(n)){
        cout<<n <<" this is the prime no__"<<endl;
    }
    else{
        cout<<n <<" is not prime no__"<<endl;
    }
    return 0;
}