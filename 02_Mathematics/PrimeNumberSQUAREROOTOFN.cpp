#include<iostream>

using namespace std;
int main(){
    // checking for a number if prime or not 

    int n;
    cout<<"Enter the Value Of a Number"<<endl;
    cin>>n;

    if(n==1)
    cout<<"Not Prime !"<<endl;

    if(n%2==0 || n%3==0)
    cout<<"Not Prime !"<<endl;

   for(int i =5 ; i*i<=n; i=i+6){
     if(n%i==0 || n%(i+2)==0){
     cout<<"Not Prime!"<<endl;
     
     }

   }

    cout<<"Prime !"<<endl;
    



  return 0;

   }

     
     
    
   
   
   


