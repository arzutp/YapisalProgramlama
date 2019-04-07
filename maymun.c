#include <stdio.h>
#include <stdlib.h>
///bir hayvanat bahcesinde bulunan disi maymun kafesine her girdiginde giris sayisi kadar muz yemektedir.
///ancak 5. ve sonraki girisinden itibaren ((giris sayisi - yedigi toplam muz)/2)+1 formulu kadar muz yemektedir.
///erkek maymunlar ise disi maymunlardan her zaman 2 kati kadar muz yemektedir.
///klavyeden cinsiyet ve kafese giris sayisi istenir. her giristeki yenen toplam muz hesaplanir.
int main()
{
    int cinsiyet;
    int giris;
    int toplam=0;

    printf("cinsiyet giriniz. disi-1 erkek-2");
    scanf("%d",&cinsiyet);
    printf("kac defa kafese girdi?");
    scanf("%d",&giris);
    if(cinsiyet==1)
    {
        for(int i=1; i<(giris+1); i++)
        {
            if(i<5)
            {
                toplam=toplam+i;
                printf("%d\n",toplam);
            }
            else
            {
                toplam=toplam+((toplam-i)/2)+1;
                printf("%d\n",toplam);
            }
        }
    }
    else{
        for(int i=1; i<giris+1; i++)
        {
            if(i<5)
            {
                toplam=toplam+(i*2);
                printf("%d\n",toplam);
            }
            else
            {
                toplam=toplam+((toplam-i)/2)+1;
                printf("%d\n",toplam);
            }
        }
    }
    return 0;
}
