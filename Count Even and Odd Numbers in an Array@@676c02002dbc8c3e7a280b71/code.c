#include<stdio.h>
int main(){
int n;
int arr[n];
scanf("%d",&n);
for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
int evencount=0,oddcount=0;
for(int i=0;i<n;i++){
   if(arr[i]%2==0){
    evencount++;
   }
   else{
    oddcount++;
   }
}

printf("%d %d",evencount,oddcount)

    return 0;
}