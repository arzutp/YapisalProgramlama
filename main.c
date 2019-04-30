#include <stdio.h>
#include <stdlib.h>
#define MAX 10
///ilk sayidan baslayarak elde tutariz tuttugumuz sayilar sagindaki en buyuk sayiyi buluruz.
///elde tutulan sayi ile en buyuk sayi yer degistirir
///elde tutulan sayinin sagindan devam edilir.
int dizi[MAX]={10,3,-255,34,54,12,2,3,4,5};
int main()
{
    printf("-buyukten kucuge siralama (selection sort)- \n");
    printf("normal hali \n");
    for(int k=0;k<MAX;++k)
    {
        printf("%d\t",dizi[k]);
    }
    printf("\n");

    int max,temp;
    for(int k=0;k<MAX;k++)
    {
        max=k;
        for(int i=k+1;i<MAX;i++)
        {
            if(dizi[i]>dizi[max])
            {
                max=i;
            }
        }
        temp=dizi[k];
        dizi[k]=dizi[max];
        dizi[max]=temp;
    }

    printf("siralanmis hali \n");
    for(int k=0;k<MAX;++k)
    {
        printf("%d\t",dizi[k]);
    }

    return 0;
}
