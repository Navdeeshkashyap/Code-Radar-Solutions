int isprime(int num){
if(num<2){
    return 0;
}
else{
    for(int i=2;i*i<=n;i++){
        if(num%i==0){
            return 0;
        }
    }
}
return 1 ;
}