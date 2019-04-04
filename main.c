#include <stdio.h>
#include <stdlib.h>
///100 tane kapi var. Bu kapilar 1'den 100'e kadar numaralandirilmis.
///Kapilarin hepsi kilitli. Elimizde 1'den 20'ye kadar numaralandirilmiş 20 tane anahtar var.
///Bir kapının numarası bir anahtarın numarasına tam bölünüyorsa o anahtar o kapıyı açabiliyor (ya da kilitleyebiliyor!)
///1 numaralı anahtardan başlayarak her anahtar için kapıları dolaşılıyor. Anahtar ile kapı açılıyor ya da kilitleniyor.
///Yani kapı açıksa kilitleniyor kapı kilitli ise kapı açılıyor.
///20. turdan sonra, yani son anahtarin kullanılmasından sonra hangi kapılar açık hangi kapılar kilitlidir?
int main()
{
    for(int i=1;i<101;i++)
    {
        int top=0;
        for (int j=1;j<21;j++)
        {

            if(i%j==0)
            {
                top+=1;
            }
        }
        if(top%2==0){
            printf("%d. kapi kapali \n",i);
        }
        else{
            printf("%d. kapi acik \n",i);
        }
    }

    return 0;
}
