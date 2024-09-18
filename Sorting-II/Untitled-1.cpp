class Solution
{
    public:
    void merge(int arr[], int l, int m, int r)
    {
         // Your code here
         vector<int>temp(r-l+1);
             
        int left= l;
        int right= m+1;
        int index=0;

        while(left<=m && right<=r){
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
    while(left<=m){
        temp[index]=arr[left];
        index++,left++;
    }
    //right array is not empty yet 
    while(right<=r){
        temp[index]=arr[right];
        index++,right++;
    }
    index=0;

    while(l<=r){
       arr[l]=temp[index];
       l++, index++;
    }

         
         
    }
    public:
    void mergeSort(int arr[], int l, int r)
    {
        //code here
        if(l==r){
            return;
        }
        int m =   ( l + (r-l) ) /2;
        mergeSort(arr,l,m);
        mergeSort(arr,m+1,r);
        merge(arr,l,m,r);
    }
};

//{ Driver Code Starts.


int main()
{
    int n,T,i;

    scanf("%d",&T);

    while(T--){
    
    scanf("%d",&n);
    int arr[n+1];
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);

    Solution ob;
    ob.mergeSort(arr, 0, n-1);
    printArray(arr, n);
    }
    return 0;
}
// } Driver Code Ends