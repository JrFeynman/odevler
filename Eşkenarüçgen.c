#include <stdio.h>
int main(){
int a,b,c,d;
printf("Eşkenar üçgen taban boyu:");
scanf("%d",&a);
for(b=1;b<=a;b++){
    for(c=1;c<=a-b;c++){
        printf(" ");
    }
    for(d=1;d<=b;d++){
        printf("* ");
    }
    printf("\n");




}
return 0;





}