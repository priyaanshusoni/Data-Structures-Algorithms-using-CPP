// second largest element in an array 


// #include<iostream>

// using namespace std;
// int main(){
    //brute force approach (sort array )
    // int arr[10]={1,4,5,6,7,8,9,9,9,9}; //sorted array 
    // int n=10,secondL;
    // int largest = arr[9];
    // for(int i=n-2;i>=0;i--){
    //     if(arr[i]<largest){
    //         secondL= arr[n-i];
    //         break;
    //     }
    // }
    // cout<<"Second Largest Element is "<<secondL<<endl;



// // 
// }

// #include<iostream>

// using namespace std;
// int main(){
//       //better solution 
//        int n;
//     cout<<"Enter Size"<<endl;
//     cin>>n;
    
//     int arr[n];
//     cout<<"Enter Elements"<<endl;
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }

//     int largest = arr[0];
//     for(int i=0;i<n;i++){
//         if(arr[i]>largest){
//             largest=arr[i];
//         }

//     }

//     cout<<"Largest Element is "<<largest<<endl;

//     int second_largest = -1;
//     for(int i=0;i<n;i++){
//         if(arr[i]>second_largest && arr[i]!=largest){
//              second_largest=arr[i];
//         }

//     }

//     cout<<"Second Largest Element is "<<second_largest<<endl;



    

// } time complexity = O(2n)


#include<iostream>

using namespace std;
int main(){
    //Optimal Solution 
    int arr[]= {2,4,5,7,8,9};
    //second largest ;
    int largest = arr[0];
    int second_largest= -1;

    for(int i=0;i<6;i++){
        if(arr[i]>largest ){
            second_largest=largest;
            largest=arr[i];
        }

        else if( arr[i]< largest && arr[i]> second_largest){
            second_largest=arr[i];
        }
    }

    cout<<second_largest;

     
} 