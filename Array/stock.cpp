#include<iostream>
#include<vector>
using namespace std;
int maxProfit(vector<int>&prices){
       int mini=prices[0];
       int profit=0;
       int n=prices.size();
       for(int i=1;i<n;i++){
        int cost=prices[i]-mini;
        profit=max(profit,cost);// update profit
        mini=min(mini,prices[i]);//update minimum.
       }
       return profit;
}

int main(){
    int n;
    cout<<"enter prices:";
    cin>>n;
    vector<int>prices(n);
    cout << "Enter prices: "<<endl;
    for(int i=0;i<n;i++){
        cin>>prices[i];
    }
    int result=maxProfit(prices);
    cout << "the maximum profit will be: " << result<<endl;
    return 0;
}