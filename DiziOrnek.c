#include <stdio.h>
#include <stdlib.h>

int dizi[10]={10,3,-255,39,33,15,452,671,91,-1};
int main()
{
    printf("-dizi elemanlari toplami- \n");

    int toplam=0;
    for(int i=0;i<10;++i)
    {
        toplam+=dizi[i];
    }
    printf("toplam=%d \n",toplam);


    printf("-en buyuk elemani bul- \n");
    int max=dizi[0];
    int k=0;
    for(int i=0;i<10;++i)
    {
        if(dizi[i]>max)
        {
            max=dizi[i];
            k=i;
        }
    }
    printf("en buyuk eleman=%d \n %d.indiste \n",max,k);


}
