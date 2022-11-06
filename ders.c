#include <stdio.h>
int main(){
int n;
printf("Bir 'n' sayısı girin:");
scanf("%d",&n);
float toplam=0;
for (float k=1;k<=n;k++)
{
    toplam += (k+1)/k;
}
printf("%f",toplam);

}