#include <stdio.h>
#include <stdlib.h>
/// Uc basamakli rakamlari birbirinden farkli tum sayilari ekranda gosteren ve bu kurala uygun kac tane sayi oldugunu soyleyen program

void basamakFarki()
{
    int b,o,y;
    int sayac=0;
    for(int a=100;a<1000;a++)
    {
        b=a%10;
        o=(a/10)%10;
        y=a/100;
        if(b!=o && o!=y && b!=y)
        {

            ++sayac;
            printf("%d \t",a);
        }
    }
    printf("\n%d tane sayi vardir.",sayac);
}

void basamakAyni()
{
    int b,o,y;
    int sayac=0;
    for(int a=100;a<1000;a++)
    {
        b=a%10;
        o=(a/10)%10;
        y=a/100;
        if(b==o && o==y && b==y)
        {

            ++sayac;
            printf("%d \t",a);
        }
    }
    printf("\n%d tane sayi vardir.",sayac);
}
int main()
{
    basamakFarki();
    basamakAyni();
    return 0;
}
