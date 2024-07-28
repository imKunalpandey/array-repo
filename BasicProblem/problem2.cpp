#include<iostream>
using namespace std;

bool isPalidrom(int x){
    if(x<0||(x%10==0&&x!=0)){// Negative numbers and numbers ending with 0 (except 0 itself) are not palindromes
        return false;
    }
    int reverseNum=0;
    while(x>reverseNum){
        int digit= x%10;//extraction of last digit
        x=x/10; // Remove the last digit

        // Update the reversed number
        reverseNum = reverseNum * 10 + digit;
    }
     // Check if the original number is a palindrome
    // We compare x with reversedHalf or reversedHalf/10 to handle both odd and even length numbers
    return x==reverseNum||x==reverseNum/10;
    }

    int main(){
        int x;
        cout<<"please enter the no__";
        cin>>x;
        if(isPalidrom(x)){
            cout<<x <<"is pelindrom__";
        } else{
            cout<<x <<"is not pelindrom__";
        }
        return 0;
    }
