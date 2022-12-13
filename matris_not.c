#include <stdio.h>
float ortalama(int dizi[],int uzunluk){
    int toplam=0;
    float ort;
    for(int i=0;i<uzunluk;i++){
        toplam+= dizi[i];
    }
    ort=toplam/5;
    return ort;
}
int main(){
int i,j,vize[5],final[5];
float ort1,ort2;
  for(i = 0; i < 5; ++i)
    {
        printf("%d.Öğrencinin vize ve final notunu girin: ", i+1);
        scanf("%d %d", &vize[i],&final[i]);
    }

for(j=0;j<5;j++){
    printf("%d.Öğrenci vize ve final notu:%d\t%d\n",j+1,vize[j],final[j]);

}
ort1=ortalama(vize,5);
ort2=ortalama(final,5);
printf("Vize ortalaması:%.2f\n",ort1);
printf("Final ortalaması:%.2f",ort2);

}