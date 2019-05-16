#include <stdio.h>
#include <stdlib.h>

int main()
{
    int boyut;
    printf("Dizinin boyutunu giriniz: ");
    scanf("%d",&boyut);
    int dizi[boyut];
    for(int i=0;i<boyut;i++){
        printf("Elemanlari giriniz: ");
        scanf("%d",&dizi[i]);
    }
    printf("Siralanmadan once: ");
    for(int i=0;i<boyut;i++){
        printf("%d ",dizi[i]);
    }
    printf("Siralandiktan sonra: ");
    sirala(dizi,boyut);
    for(int i=0;i<boyut;i++){
        printf("%d ",dizi[i]);
    }
    return 0;
}
void sirala(int dizi[],int boyut){
    int temp;
    int min;
    for(int i=0;i<boyut-1;i++){
        min=i+1;
        for(int j=i+2;j<boyut;j++){
            if(dizi[j]<dizi[min]){
                min=j;
            }
        }
        if(dizi[i]>dizi[min]){
            temp=dizi[i];
            dizi[i]=dizi[min];
            dizi[min]=temp;
        }
    }

}
