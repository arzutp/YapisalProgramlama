#include <stdio.h>
#include <stdlib.h>
///deðer deðiþtirme
///call by reference(adresle gönderme)

void degistir(int *a,int *b)
{
    int gecici = *a;
    *a=*b;
    *b=gecici;

}

int main()
{
    int x=5,y=10;
    degistir(&x,&y);

    printf("x=%d,y=%d\n",x,y);
    return 0;
}
