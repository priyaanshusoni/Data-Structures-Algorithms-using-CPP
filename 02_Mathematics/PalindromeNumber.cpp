#include<iostream>

using namespace std;

bool Ispalindrome(long n ){

    int digit,reverse=0;
    int originalvalue=n;

    while(n!=0){
        digit= n%10;
        reverse= ((reverse*10) + digit );

        n=n/10;
    }

    if(reverse==originalvalue){
        return true;
    }

    else{
        return false;
    }

 

}
int main(){
    int k;
    cout<<"Enter a Number"<<endl;
    cin>>k;

    cout<<Ispalindrome(k)<<endl;
    
}