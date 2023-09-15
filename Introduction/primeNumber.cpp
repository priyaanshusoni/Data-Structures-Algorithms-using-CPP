#include<iostream>

using namespace std;
int main(){
    int n,i;
    cout<<"Enter Any Number "<<endl;
    cin>>n;

   
    for(i=2;i<n;i++){
        if (n%i==0)
        {
            /* code */cout<<"It is not a Prime Number for"<<endl;
        }
        
        else
        {
            cout<<"It is a prime number for"<<endl;
        }

        
        
    }

}