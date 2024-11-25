#include<iostream>

using namespace std;
int main(){
    int arr[5] = {1,2,3,4,5};
    int*ptr = arr;

  
    // print the address of first element 

    cout<<arr<<endl;
    cout<<&arr<<endl;
    cout<<&arr[0]<<endl;
    cout<<arr+0<<endl;
    cout<<ptr<<endl;


   //print the address of second element

    cout<<arr+1<<endl;
    cout<<&arr[1]<<endl;
    cout<<"Address of Second Element is "<<ptr+1<<endl;

cout<<"***************************************************************"<<endl;

    //print the value
    cout<<arr[0]<<endl;
    cout<<*(arr)<<endl;
    cout<<0[arr]<<endl;

    cout<<*(ptr)<<endl;
    cout<<ptr[0]<<endl;


cout<<"***************************************************************"<<endl;


    //Printing all addresses togtether 

    for(int i=0;i<5;i++){
        // cout<<&arr[i]<<endl;

        // cout<<(arr+i)<<endl;


        // cout<<(ptr+i)<<endl;

        cout<<&(i[arr])<<endl;
    }

cout<<"*************************************************************************"<<endl;

    //printing all values together 


;
    
    for(int i=0;i<5;i++){
        cout<<ptr[i]<<" ";
    }

    cout<<endl;

     for(int i=0;i<5;i++){
        cout<<*(ptr+i)<<" ";
    }
    



cout<<endl;

cout<<"***************************************************************"<<endl;



//Arithmetic Operations on ptr


cout<<"Arithmetic Operations"<<endl;
  for(int i=0;i<5;i++){
        cout<<*ptr<<" ";

        ptr++;
    }
cout<<endl;


ptr=arr; // again intializing ptr to base address   



//Assignment answers 

cout<<"************************************************"<<endl;
int*ptr2 = arr+4;

cout<<ptr2<<endl;


for(int i=4;i>=0;i--){
    cout<<*ptr2<<" ";

    ptr2--;
}






}