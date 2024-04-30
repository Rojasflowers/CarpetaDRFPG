#include <stdio.h>
int main (){
int n,n2,n3;
printf("ingrese 3 números"); scanf("%i %i %i",n,n2,n3);
if (n>n2 && n>n3){
    printf("%i",n);
    if (n2>n3){
    printf("%i %i",n2,n3);
    }
    else
    {
    printf("%i %i",n3,n2);
}
}

if (n2>n && n2>n3){
    printf("%i",n2);
    if (n>n3){
    printf("%i %i",n,n3);
    }else
    {
    printf("%i %i",n3,n);
}
}

if (n3>n2 && n3>n){ 
    printf("%i",n3);
    if (n2>n){
    printf("%i %i",n2,n);
    }else
    {
    printf("%i %i",n,n2);
}
}
    return 0;
}