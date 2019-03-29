#include <stdio.h>
#include <stdlib.h>
void mukemmelSayi(int a)
{
    int toplam=0;
    for(int i=1;i<a;i++)
    {
        if(a%i==0)
        {
            toplam=toplam+i;
        }
    }
    printf("toplam=%d\n",toplam);
    if(toplam==a)
    {
        printf("%d sayi mukemmel sayidir. ",a);
    }
    else{
        printf("%d mukemmel sayi degildir. ",a);
    }
}

int main()
{
    int sayi;
    printf("bir sayi giriniz: \n");
    scanf("%d",&sayi);
    mukemmelSayi(sayi);

    return 0;
}
