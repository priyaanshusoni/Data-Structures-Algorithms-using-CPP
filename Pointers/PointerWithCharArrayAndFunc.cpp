#include<iostream>

using namespace std;
 

int main(){
    // Declare a character array with 5 elements
    // char arr[5] = {'a','b','c','d','e'};
    // Declare another character array with 5 elements and initialize it with a string literal
    // char arr2[5] = "1234";

    // Declare a pointer to a character and assign it the address of the first element of the arr array
    // char* ptr = arr;

    // Print the address of the first element of the arr2 array as a void pointer
    // cout<<"Address of arr2: "<<(void*)arr2<<endl;
    // The (void*) is used to cast the pointer to a void pointer
    // This is done to print the address of the array without it being interpreted as a character





   char name = 'a';

   

   char*ptr3 = &name;

   cout<<ptr3; // aaa

   cout<<(void*)ptr3<<endl; // 0x61
   cout<<(void*)&name; // 0x61








   // functions 



}
