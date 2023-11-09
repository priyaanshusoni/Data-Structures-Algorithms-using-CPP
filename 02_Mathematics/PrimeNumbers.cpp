#include<iostream>

using namespace std;
bool Isprime(int n){
    if(n==1){
        return false;
    }
    for(int i=2;i<n;i++){
        if(n%i==0){
            return false;
        }

    }
    
            return true;
        
    }
int main(){

    int x;
    cout<<"Enter Number"<<endl;
    cin>>x;

    cout<<Isprime(x)<<endl;
    
}