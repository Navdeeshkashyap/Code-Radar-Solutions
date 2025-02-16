#include<stdio.h>
int main(){
int c;
scanf("%d",&c);
if(c>='A' && c<='Z'){
    printf("Uppercase");
}
else if(c>='a' && c<='z'){
     printf("Lowercase");
}
else{
     printf("Not an alphabet");
}



    return 0;
}