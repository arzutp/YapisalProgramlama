#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j=1;
    int *jp1,*jp2=&j;

    jp1 = jp2;  ///pointera pointer atadik ikiside ayni adresi gösteriyor.

    i = ++(*jp2); ///jp2 nin gosterdigi adresteki degeri arttirdik i ye atadik
    *jp2 = *jp1+i;  ///jp2 nin adresindeki degeri jp1 adresindeki deger ve i ile toplayip degistirdik



    printf("i=%d \n j=%d \n *jp1=%d \n *jp2=%d\n",i,j,*jp1,*jp2);
    return 0;
}
