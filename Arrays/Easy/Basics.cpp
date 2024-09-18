<<<<<<< HEAD
// #include<iostream>

// using namespace std;

// const int SIZE = 1e8; // Using a defined constant for array size

// int arr[SIZE];

// int main() {
//     for(int i = 0; i < SIZE; i++) {
//         cout << arr[i] << endl;
//     }
//     return 0;
// }

//largest element in an array 
#include<iostream>

using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int largest = arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }

    }

    cout<<"Largest Element is "<<largest<<endl;
    
}
=======
// #include<iostream>

// using namespace std;

// const int SIZE = 1e8; // Using a defined constant for array size

// int arr[SIZE];

// int main() {
//     for(int i = 0; i < SIZE; i++) {
//         cout << arr[i] << endl;
//     }
//     return 0;
// }

//largest element in an array 
#include<iostream>

using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int largest = arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }

    }

    cout<<"Largest Element is "<<largest<<endl;
    
}
>>>>>>> 7b0ddf00bcb78678a06bca489ae7779a51d18a7b
