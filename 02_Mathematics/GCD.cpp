#include<iostream>

using namespace std;
int main(){
    int n1,n2,gcd=1;
    cout<<"Enter Two Numbers"<<endl;
    cin>>n1>>n2;

    for(int i=1 ;i< min(n1,n2);i++){
        if(n1%i==0 && n2%i==0){
            gcd=i;
        }
    }

    cout<<"gcd for the given number is :"<<gcd<<endl;

    
}