#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a= 5,*ap;   ///bir int ve integer bir adres tanimladik
    float b=3.2,*bp;
    double c= 3.412,*cp;
    char d = 'a',*dp;

    int sayilar [5]={1,2,3,4,5};
    int *arrayp;
    arrayp=&sayilar;  ///dizinin ilk elemanin adresini atadik

    ap=&a;
    bp=&b;
    cp=&c;
    dp=&d;

    printf("%p adresindeki dizi degeri %d dir. \n",arrayp,*arrayp);
    arrayp = &sayilar[1]; ///sayilarin ikinci elemanin adresini tutuyor
    printf("%p adresindeki intin degeri %d dir. \n",ap,*ap);
    printf("%p adresindeki float in degeri %f dir. \n",bp,*bp);
    printf("%p adresindeki double degeri %.3f dir. \n",cp,*cp);
    printf("%p adresindeki charin degeri %c dir. \n",dp,*dp);
    printf("%p adresindeki sayilarin elemaninin degeri %d dir. \n",dp,*dp);
    printf("%p adresindeki dizi degeri %d dir. \n",arrayp,*arrayp);



    printf("\n");
    return 0;
}
