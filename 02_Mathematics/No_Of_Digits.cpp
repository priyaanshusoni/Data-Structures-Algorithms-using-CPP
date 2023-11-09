// finding no. of digits in a number 

#include<iostream>


using namespace std;


int countdigits(int n ){
    int count=0 ;
    while(n!=0){
        count++;
        n=n/10;
     
    }
     return count;
}

int main(){
    cout<<"Printing the no. of digits"<<endl;

    cout<<countdigits(123);

    
    

    
}