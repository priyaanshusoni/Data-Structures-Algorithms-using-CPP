#include<iostream>
#include<vector>


using namespace std;
void merge(int arr[], int low , int mid ,int high){

    
           vector<int>temp(high-low+1);
             
        int left= low;
        int right= mid+1;
        int index=0;

        while(left<=mid && right<=high){
            if(arr[left]<=arr[right]){
              temp[index]=arr[left];
              left++,index++;
            }
            else{
                temp[index]=arr[right];
                index++,right++;

            }
        }
        
    //left array is not empty yet 
    while(left<=mid){
        temp[index]=arr[left];
        index++,left++;
    }
    //right array is not empty yet 
    while(right<=high){
        temp[index]=arr[right];
        index++,right++;
    }
    index=0;

    while(low<=high){
       arr[low]=temp[index];
       low++, index++;
    }


}

void mergesort(int arr[], int low , int high){
if(low==high){
        return ;
    }

    int mid= low +(high-low)/2;
    mergesort(arr,low,mid);
    mergesort(arr,mid+1,high);
    merge(arr,low,mid,high);

}


int main(){
    int arr[] = {6,3,1,2,8,9,10,7,3,10};
    cout<<"Array is"<<endl;
    mergesort(arr,0,9);
    for(int i=0;i<10;i++){
     cout<<arr[i]<<" ";
    }
  return 0;
}