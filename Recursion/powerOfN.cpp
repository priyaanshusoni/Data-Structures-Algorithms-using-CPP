


 #include<iostream>


 
 using namespace std;

 int power(int n ,int pow){
    if(pow==1){
        return n;
    }

    return n * power(n , pow-1);
 }
 int main(){
    int n;
    cout<<"Enter the Number to print the power"<<endl;

    cin>>n;

    cout<<"power of given number is :"<<power(n,4)<<endl;
 }