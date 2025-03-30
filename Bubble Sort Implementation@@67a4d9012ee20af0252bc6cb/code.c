void printarr(int *arr,int n){
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
}
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
void bubblesort(int *arr,int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    printarr(arr,n);
}