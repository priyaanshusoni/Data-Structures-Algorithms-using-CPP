#include<iostream>

using namespace std;

int sumofdivisors(int n){
      int sumofdivisors=0;


       for(int i=1;i<=n;i++){
        if(n%i==0){
            sumofdivisors+=i;

        }

    }

    return sumofdivisors;
}

int main(){

     int k;
     cout<<"Enter the Number"<<endl;
     cin>>k;

     int sumofAllDivisor=0;

    //sumofAlldivisors of any number n

    for(int i=1;i<=k;i++){

         sumofAllDivisor = sumofAllDivisor+ sumofdivisors(i);



    }


    cout<<"Total sum is"<<sumofAllDivisor<<endl;


  
    
}