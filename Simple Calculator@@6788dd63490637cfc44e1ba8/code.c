#include<stdio.h>
int main(){
int a ,b;
char op;
scanf("%d %d %c",&a,&b,&op);
switch(op){
    case'+':
     int result=a+b;
    printf("%d",result);
case'-':
     int result=a-b;
    printf("%d",result);

case'*':
     int result=a*b;
    printf("%d",result);

case'/':
     int result=a/b;
    printf("%d",result);
}

    return 0;
}