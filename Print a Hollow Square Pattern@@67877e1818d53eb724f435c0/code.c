#include<stdio.h>
int main(){

int n;
scanf("%d",&n);
for(int i=1;i<=n;i++){
    printf("*");
    for(int j=2;j<n;j++){
        if(i==1 || i==n){
    printf("*");
        }
    }else{
         printf(" ");
    }
    printf("*");
     printf("\n");
}



    return 0;
}
















// #include<stdio.h>
// int main(){
// int n;
// scanf("%d",&n);
// for(int i=1;i<=n;i++){
//     printf("*");
//     for(int j=2;j<n;j++){
//     if(i==1 || i==n){
//         printf("*");
//     }
//     else{
//         printf(" ");
//     }
//     }
    
//     printf("*");
//     printf("\n");
    
// }
//     return 0;
// }