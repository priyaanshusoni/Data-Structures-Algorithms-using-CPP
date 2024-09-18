#include<iostream>

using namespace std;
int main(){
    // to find the traling zeros first we need to finf factorial and then count thr number of zeros in that factorial number 

    unsigned long long n,fact=1;
    cout<<"Enter Any Number"<<endl;
    cin>>n;

   for(unsigned long long i=1;i<=n;i++){
    fact=fact*i;
   }
   cout<<"factorial is"<<" "<<fact<<endl;

   // counting no. of trailing zeros
   unsigned long long res=0;

   while(fact%10==0){
       res++;

       fact=fact/10;
   }

   cout<<"No. of Trailing Zeros are  "<<res<<endl;




}