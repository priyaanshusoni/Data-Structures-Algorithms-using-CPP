#include<iostream>

using namespace std;
int main(){

    int n;
    int sum=0;
    cin>>n;
    int checkNo=n;

    while(n!=0){
    
 
    int lastdigit= n%10;
    sum=(sum + (lastdigit * lastdigit * lastdigit));

    n=(n/10);

    }

    if(sum==checkNo){
        cout<<"YES"<<endl;

    }

    else{
        cout<<"No"<<endl;
    }




}  