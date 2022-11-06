#include <stdio.h>
int main() {
int ales,yds;
float mezuniyet_ortalamasi;
printf("Ales puanı giriniz:");
scanf("%d",&ales);
printf("YDS puanı giriniz:");
scanf("%d",&yds);
printf("Mezuniyet ortalaması giriniz:");
scanf("%f",&mezuniyet_ortalamasi);
int lisansalim=(ales*50/100)+(yds*25/100)+((mezuniyet_ortalamasi*25)*25/100);
printf("Yüksek Lisans Alım puanınız: %d\n",lisansalim);
if(yds>=70){
    if(lisansalim>=60)
    printf("Lisansüstü programa alındınız başarılar...");
    else
    printf("Lisansüstü program için uygun değilsiniz.");
}
else
printf("YDS puanınız yeterli değil (70 ve üstü gerekli).");

return 0;
}