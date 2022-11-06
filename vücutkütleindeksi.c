#include <stdio.h>
int main () {
float kilo,boy;
printf("Kilonuzu giriniz (kg):");
scanf("%f",&kilo);
printf("Boyunuzu giriniz (m):");
scanf("%f",&boy);
float vucut_kitle_indeksi=(kilo/(boy*boy));
printf("Vücut kitle indeksiniz:%f\n",vucut_kitle_indeksi);
if(18.4>=vucut_kitle_indeksi && vucut_kitle_indeksi>0){
    printf("Zayıfsınız kilo almayı deneyin.");
}else if (24.9>=vucut_kitle_indeksi && vucut_kitle_indeksi>18.4)
{
    printf("Vücut kitle indeksiniz normal böyle devam.");
}else if (29.9>=vucut_kitle_indeksi && vucut_kitle_indeksi>24.9)
{
    printf("Kilolusunuz biraz zayıflasanız iyi olacak.");
}else if (34.9>=vucut_kitle_indeksi && vucut_kitle_indeksi>29.9)
{
    printf("Fazla kilolusunuz zayıflamayı deneyin.");
}else if (44.9>=vucut_kitle_indeksi && vucut_kitle_indeksi>34.9)
{
    printf("Şişmansınız bir diyetisyene başvurun.");
}else if (vucut_kitle_indeksi>44.9)
{
    printf("İflah olmaz bir yiyicisiniz evet obezsiniz;derhal bir uzman diyetisyene görünmenizi emrediyoruz.");
}






return 0;
}