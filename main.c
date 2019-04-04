#include <stdio.h>
#include <stdlib.h>
///100 tane kapi var. Bu kapilar 1'den 100'e kadar numaralandirilmis.
///Kapilarin hepsi kilitli. Elimizde 1'den 20'ye kadar numaralandirilmi� 20 tane anahtar var.
///Bir kap�n�n numaras� bir anahtar�n numaras�na tam b�l�n�yorsa o anahtar o kap�y� a�abiliyor (ya da kilitleyebiliyor!)
///1 numaral� anahtardan ba�layarak her anahtar i�in kap�lar� dola��l�yor. Anahtar ile kap� a��l�yor ya da kilitleniyor.
///Yani kap� a��ksa kilitleniyor kap� kilitli ise kap� a��l�yor.
///20. turdan sonra, yani son anahtarin kullan�lmas�ndan sonra hangi kap�lar a��k hangi kap�lar kilitlidir?
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
