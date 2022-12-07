#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define SAT 5
#define SUT 4

/*
Bu fonksiyonu herhangi bir büyüklükteki matrisi ekrana yazdıracak şekilde
kodlayınız. 
*/
void matris_yazdir(short matris[][SUT],int satir){
    int i,j;
    for(i=0;i<satir;i++){
        for(j=0;j<SUT;j++){
            printf("%d  ",matris[i][j]);
        }
        printf("\n");
    }

    
}

int main()
{
    int i,j;
    short matrisA[SAT][SUT], matrisB[SAT][SUT], matrisT[SAT][SUT];
    
    // Burada matrisA ve matrisB ye 0 ile 100 arasında rastgele değerler atayan kodu yazınız. 
    srand(time(NULL));
     for(i=0;i<SAT;i++){
        for(j=0;j<SUT;j++){
            matrisA[i][j]=rand() %100 ;
            matrisB[i][j]=rand() %100 ;}

        printf("\n");
    }

    
    // yukarıda tanımlı fonksiyonu kullanarak matrisA ve matrisB yi ekrana yazdırınız. 
    matris_yazdir(matrisA,SAT);
    matris_yazdir(matrisB,SAT);
    
    // Burada iki matrisA ve matrisB yi toplayarak sonucunu matrisT ye atayınız. 
    int c,d;
    for(c=0;c<SAT;c++){
        for(d=0;d<SUT;d++){
            matrisT[c][d]=matrisA[c][d] + matrisB[c][d];
        }
    }
    
     // yukarıda tanımlı fonksiyonu kullanarak matrisA ve matrisB yi ekrana yazdırınız. 
    matris_yazdir(matrisT,SAT);

    return 0;
}