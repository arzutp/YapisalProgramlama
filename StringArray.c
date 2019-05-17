#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>  ///karakter fonksiyonlari
///klavyeden girilen en fazla 10 karakter uzunlugundaki kelimenin buyuk harflerini kucuge, kucuk harflerini buyuge ceviren program
///tolower(int c) -> kucuk harfe cevirir
///touper(int c) -> buyuk harfe cevirir
int main()
{
    char kelime[11];  /// '\0' hesaba katilmali
    int i;

    printf("en fazla 10 harfli kelime giriniz: \n");
    scanf("%s",kelime); ///zaten adres oldugu icin &'a gerek yok
    for(i=0;kelime[i]!='\0';i++)
    {
        if(isupper(kelime[i]))   ///buyuk harf mi diye kontrol
        {
            kelime[i]=tolower(kelime[i]);
        }
        else
        {
            kelime[i]=toupper(kelime[i]);
        }
    }
    printf("yeni kelime: %s",kelime);
    int a=234522;
    printf("%d",strlen(a));
    return 0;
}
