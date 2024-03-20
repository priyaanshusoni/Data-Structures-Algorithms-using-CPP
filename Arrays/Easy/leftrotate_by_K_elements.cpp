#include<iostream>

using namespace std;

void returnrotatedarray(int arr[], int d, int n){
      d= d%n;
      int temp[d];
      for(int i=0; i<d; i++){
          temp[i]=arr[i];
      }

      for(int i=d;i<n;i++){
         arr[i-d]=arr[i]; 
      }

      //put back temp
    //   int j =0 // for temp indexing
   for(int i=n-d;i<n;i++){
       arr[i]=temp[i-(n-d)];

   }

   

}
int main(){
    int arr[]={1,2,3,4,5,6,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"n is "<<n<<endl;

    returnrotatedarray(arr,3,n);

    for(int i=0; i<n;i++){
        cout<<arr[i]<<" ";

    }
    return 0;

    





}