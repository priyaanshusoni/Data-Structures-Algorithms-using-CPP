#include<iostream>

using namespace std;
int main(){
    int n,i=2,sum=0;
    cout<<"Enter first n numbers"<<endl;
    cin>>n;
    cout<<endl;
    while(i<=n){

        if (i%2==0)
        {
            /* code */
        sum=sum+i;
        // cout<<"Sum :"<<sum<<endl;

         i=i+2;

        }

      

    }

    // i=i+2;
      cout<<"Sum :"<<sum<<endl;
}