#include<iostream>

using namespace std;
int main(){
    int * a = new int; // assigning memory in heap 


  *a = 5;

  cout<<*a<<endl;
    int* arr = new int[100];


    for(int i=0;i<100;i++){
        arr[i] = i+1;
    }

    for(int i=0;i<100;i++){
        cout<<arr[i]<<endl;
    }
// continous 100 blocks ka adreess ka address de diya uss address  ko store krwane k lie int * arr ek pointer variable h jise apn use kr rhe h jo firsteleemnt ka address store kr rha h ya base address bhi store kr rha hai 


  float *f = new float;

 // int main() function ko memory stack main allocate hoti hai 


 // teeno ptr variable ko memory heap main allocate kr rha hai lekin ptr jo h wo stack memory m hai 






 //lekin kaam hone ke baad heap se memory release kaise kare ? 

 //delete => ye jo keyword hai isse issi kaam ke lie use karte hai 


 delete a;

 delete[] arr;

 delete f;

}


