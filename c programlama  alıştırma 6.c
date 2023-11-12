#include <stdio.h>
#include <stdlib.h>

int main()
{
    
    int ilksayim;
    float ikincisayim;
    char basharf;


    printf("Lutfen isminizin bas harfini giriniz\n");
    scanf("%c",&basharf);

    printf("Lutfen ilk sayiyi giriniz\n");
    scanf("%d",&ilksayim);

    printf("Lutfen ikinci sayiyi giriniz\n");
    scanf("%f",&ikincisayim);


    printf("Ilk sayim:%d Ikinci sayim:%f Isminizin bas harfi %c",ilksayim,ikincisayim,basharf);


    return 0;
}
