#include<iostream>

using namespace std;


void fun(int*p){
    *p=*p+10;

}

void change(int* p){
    p++;
}
void change2(int** p){
    *p= *p+1;
}
int main(){
//     int n=10;
    
//    int *p = &n;

//    int**ptr = &p;
// * means it points to the value of type int 
// ** means it points to the ptr type value and then that points to type int 



// int***p1 = &ptr;


// *p= *p+4; // o/p is 14


// **ptr = **ptr+10; // o/p is 14+10 = 24 

// cout<<**ptr<<endl;



int n =10;
int *p1=&n; // single pointer 
cout<<"Values of n is "<<n<<endl;
cout<<"Adress of n is "<<&n<<endl;
cout<<"Address of n is "<<p1<<endl;  // prints adddress of n;


int **p2 = &p1; // double pointer 

cout<<"Adress of p1 pointer is  "<<p2<<endl;  // contains address of p1
cout<<"Adress of p1 pointer is  "<<&p1<<endl;


int***p3 = &p2; // triple pointer 

// n pointer = n X* followed by variable name  => *** for triple pointer 


cout<<"Adreess of p2 pointer is "<<p3<<endl;

cout<<"Address of p2 pointer is "<<&p2<<endl;




//modifying values stored in each pointers 

// changing values on n 

*p1=*p1+5; // 15

cout<<"Changes value of n by using p1 pointer is "<<n<<endl;


**p2=**p2+1; // 16
cout<<"Changes value of n by using p2 double pointer is "<<n<<endl;

***p3 = ***p3+ 4; // 20


cout<<"Changes value of n by using p3 triple pointer is "<<n<<endl;


// changing values by passing to a function 

int x =7;
int*y = &x;
int**z = &y;

fun(y);


cout<<"Changed value of x is "<<x<<endl;
cout<<"Changed value of x is "<<*y<<endl;




// chaging address of pointer 
cout<<"previous adddress of x is "<<y<<endl;
change(y);
cout<<"updates address of x is"<<y<<endl; // no change 


// changing address through pointer 


cout<<"previous adddress of y is "<<y<<endl;
change2(z);
cout<<"updates address of y is"<<y<<endl;

//q.1


char c[]= "GATE2024";
int in[]= {1,2,3,4,5,6,7,8};


char* p= c;
int * t= in;
cout<<p+p[3]-p[1]<<endl;
cout<<p+4<<endl;
cout<<t+4<<endl; // 0x61fed0
cout<<&in[4]<<endl; //0x61fed0




return 0;


} 


