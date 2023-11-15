// Check If Kth Bit Is Set Or Not 

#include<iostream>

using namespace std;
int main(){
    // using left shift operator 
    int n; // to check for the number 
    int k; // to check for the position 

    // if n=3 : binary = 000..011 : k=2 : (k-1)=1 :Binary= 0000..01  ; X= 1<<(k-1)= 0000..010 now n&x = 1 --> Yes
     cin>>n;
     cin>>k;

     int x= 1<<(k-1);
     

     
     if((n&x)!=0){
     cout<<"YES"<<endl;
     }
     else{
     cout<<"NO"<<endl;
     }
 