#include<iostream>

using namespace std;
int gcd(int a, int b){
    int res= min(a,b);

    while(res>0){
        if(a%res==0 && b%res==0){
            break;
        }
        res--;
    }

    return res;
}
int main(){
    int x,y;
    cout<<"Enter Two Numbers  "<<endl;

    cin>>x>>y;

    cout<<"The Greatest Common Divisor of these two numbers is :"<<gcd(x,y)<<endl;
}