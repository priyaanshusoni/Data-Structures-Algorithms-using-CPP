if(low>=high){
        return ;
    }

    int mid= (low + high) / 2;

    mergesort(arr,low,mid);
    mergesort(arr,mid+1,high);
    merge(arr,low,mid,hi