#include<iostream>
using namespace std;
// void print1(int n){
//     for (int i = 0; i < n; i++)
//     {
//         for(int j=0;j<4;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
    
    
// }
// int main(){
//     int n;
//     cin>>n;
//         print1(n);
//     }


// void print2(int n){
//     for (int i = 0; i < n; i++)
//     {
//         for(int j=0;j<=i;j++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
    
    
// }
// int main(){
//     int n;
//     cout<<"enter the no__";
//     cin>>n;
//         print2(n);
//     }



    // void print3(int n){
    //     for(int i=1;i<=n;i++){

    // //          This is the inner loop which loops for the columns
    // //    no. of columns = row number for each line here.
    // //    Here, we print numbers from 1 to the row number
    // //    instead of stars in each row.

    //         for(int j=1;j<=i;j++){
    //             cout<<j<<" ";
    //         }
    //         cout<<endl;
    //     }
    // }
    // int main(){
    //     int n;
    //     cout<<"enter the no__";
    //     cin>>n;
    //     print3(n);

    // }


    // void print4(int n){
    //     for(int i=1;i<=n;i++){

    //          // This is the inner loop which loops for the columns
    //    // no. of columns = row number for each line here.
    //   // Here, we print numbers equal to the row number
    //    // instead of stars in each row.

    //         for(int j=1;j<=i;j++){
    //             cout<<i<<" ";
    //         }
    //         cout<<endl;
    //     }
    // }
    // int main(){
    //     int n;
    //     cout<<"enter the no__";
    //     cin>>n;
    //     print4(n);
    // }


    void print5(int n){
    for (int i = 1; i <= n; i++)
    {
        for(int j=0;j<n-i+1;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    
    
}
int main(){
    int n;
    cout<<"enter the no__";
    cin>>n;
        print5(n);
    }


//     void print6(int n){
//     for (int i = 1; i <= n; i++)
//     {
//         for(int j=1;j<=n-i+1;j++){
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
    
    
// }
// int main(){
//     int n;
//     cout<<"enter the no__";
//     cin>>n;
//         print6(n);
//     }


    // void print7(int n){
    //     for(int i=0; i<n;i++){
    //         //for space
    //         for(int j=0;j<n-i-1;j++){
    //             cout<<" ";
    //         }
    //         //for star
    //         for(int j=0;j<2*i+1;j++){
    //             cout<<"*";
    //         }

    //         //for space
    //         for(int j=0;j<n-i-1;j++){
    //             cout<<" ";
    //         }
    //         cout<<endl;
    //     }
        
    // }
    // int main(){
    //     int n;
    //     cout<<"enter the no__";
    //     cin>>n;
    //     print7(n);
    // }


    // void print8(int n){
    //     for(int i=0; i<n;i++){
    //         //for space
    //         for(int j=0;j<i;j++){
    //             cout<<" ";
    //         }
    //         //for star
    //         for(int j=0;j<2*n-(2*i+1);j++){
    //             cout<<"*";
    //         }

    //         //for space
    //         for(int j=0;j<i;j++){
    //             cout<<" ";
    //         }
    //         cout<<endl;
    //     }
        
    // }
    // int main(){
    //     int n;
    //     cout<<"enter the no__";
    //     cin>>n;
    //     print7(n);
    //     print8(n);
    // }



    // void print9(int n){
    //     int start=1;
    //     for(int i=0;i<n;i++){
    //         // if the row index is even then 1 is printed first
    //       // in that row.
    //         if(i%2==0) start=1;

    //          // if odd, then the first 0 will be printed in that row.
    //         else start=0;
    //         // We alternatively print 1's and 0's in each row by using
    //       // the inner for loop.
    //         for(int j=0;j<=i;j++){
    //             cout<<start;
    //             start=1-start;
    //         }
    //         cout<<endl;
    //     }
    // }

    // int main(){
    //     int n;
    //     cout<<"please enter the no__";
    //     cin>>n;
    //     print9(n);
    // }


    // void print10(int n){
    //     int num=1;
    //     for(int i=1;i<=n;i++){
    //         for(int j=1;j<=i;j++){
    //             cout<< num;
    //             num=num+1;
    //         }
    //         cout<<endl;
    //     }
    // }
    // int main(){
    //     int n;
    //     cout<<"please enter the number__";
    //     cin>>n;
    //     print10(n);
    // }


    // void print11(int n){
       
    //     for(int i=0;i<n;i++){

    //         // Inner loop will loop for i times and
    //       // print alphabets from A to A + i.
    //         for(char ch='A';ch<='A'+i;ch++){
    //             cout<< ch<<"";
                
    //         }
    //         cout<<endl;
    //     }
    // }
    // int main(){
    //     int n;
    //     cout<<"please enter the number__";
    //     cin>>n;
    //     print11(n);
    // }



    // void print12(int n){
    //     for(int i=0; i<n;i++){
    //         //for space
    //         for(int j=0;j<n-i-1;j++){
    //             cout<<" ";
    //         }
    //        //for characters
    //        char ch= 'A';
    //        int breakpoint= (2*i+1)/2;
    //        for(int j=1;j<=2*i+1;j++){
    //         cout<<ch;
    //         if(j<=breakpoint) ch++;
    //         else ch--;
            
    //        }



    //         //for space
    //         for(int j=0;j<n-i-1;j++){
    //             cout<<" ";
    //         }
    //         cout<<endl;
    //     }
    // }

    // int main(){
    //     int n;
    //      cout<<"please enter the number__";
    //     cin>>n;
    //     print12(n);
    // }


    // void print13(int n){
    //     for(int i=0;i<n;i++){
    //         for(int j=0;j<n;j++){
    //             if(i==0||j==0||i==n-1||j==n-1){
    //                 cout<<"*";
    //             }
    //             else cout<<" ";
    //         }
    //         cout<<endl;
    //     }
    // }
    // int main(){
    //     int n;
    //      cout<<"please enter the number__";
    //     cin>>n;
    //     print13(n);
    // }



