#include <stdio.h>
int main () {
int a,b,c;
printf("Üçgen taban boyutu:");
scanf("%d",&a);
for(c=1;c<=a;++c){
    for(b=1;b<=c;++b){
        printf(" * ");
        }
    printf(" \n");
    }
return 0;
}

