#include<iostream>
#include <cmath>

using namespace std;

bool isArmstrong(int n){
    //calculate no of digit___
    int numDigit=0;
    int temp=n;
    while(temp>0){
         numDigit++;
         temp=temp/10;
    }

    //calculate the sum of each digit raise to the power of numDigit

    int sum=0;
    temp=n;//update the original value
    while(temp>0){
        int digit= temp%10;//get the last no__
        sum+= pow(digit,numDigit);
        temp= temp/10;
    }

  // Check if the calculated sum is equal to the original number
  return sum==n;
}

int main(){
    int n;
    cout<<"please enter the no___";
    cin>>n;
    if(isArmstrong(n)){
        cout<<n <<"is armstrong no";
    }
    else{
        cout<<n <<"is not armstrong";
    }
    return 0;

}