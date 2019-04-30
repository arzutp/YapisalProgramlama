#include <stdio.h>
#include <stdlib.h>
#define MAX 10
/// i. eleman ile ile i+1 karsilastirilir eger i buyukse yer degistirilir
int dizi[MAX]={12,23,1,6789,976,2345,876,55,45,765432};
int main()
{
    printf("siralanmamis hali \n");
    for(int i=0;i<MAX;i++)
    {
        printf("%d \t",dizi[i]);
    }
    int temp;
    for(int i=0;i<MAX-1;i++)
    {
        for(int j=0;j<MAX-1;j++)
        {
            if(dizi[j]<dizi[j+1])
            {
                temp=dizi[j];
                dizi[j]=dizi[j+1];
                dizi[j+1]=temp;
            }
        }
    }
    printf("\n siralanmis hali \n");
    for(int i=0;i<MAX;i++)
    {
        printf("%d \t",dizi[i]);
    }
    return 0;
}
