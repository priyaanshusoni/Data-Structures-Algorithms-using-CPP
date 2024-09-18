


 #include<iostream>


 
 using namespace std;

 int SumOfSquareOfNnumbers(int n){
    if(n==1){
        return 1;
    }

    return n * n +  SumOfSquareOfNnumbers(n-1);
 }
 int main(){
    int n;
    cout<<"Enter the Number to print the SumOfSquareOfNnumbers"<<endl;

    cin>>n;

    cout<<"SumOfSquareOfNnumbers of given number is :"<<SumOfSquareOfNnumbers(n)<<endl;
 }