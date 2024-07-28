#include<iostream>
using namespace std;

void print(int n){
  
  for(int i=1;i<=n;i++){
    for(int j=i;j<=n;j++){
      cout<<"*";
    }
    cout<<endl;
   
    
  }
}
int main(){
    int n;
    cout<<"enter the no";
    cin>>n;
    print(n);
}