#include<iostream>
using namespace std;

int main() {
	// Write your code here
	int a,odd=0,even=0,n;
	cout<<"Enter Number"<<endl;
	cin>>n;

	while(n!=0){
		
         a= n%10;
		 if(a%2==0){
			 even=even+a;
			 
		 }
		 if(n%10!=0){
			 odd=odd+a;
			 
		 }	 
		
	}

	 cout<<even<<odd;
	
}
