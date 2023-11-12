#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 20;
    float sayim = 4.64;
    double doublesayim = 4.56;
    char karakterim = 'h';

    
    printf("a degiskeni hafizada %d byte kadar yer tutar\n",sizeof(a));
    printf("Char hafizada %d byte kadar yer tutar\n",sizeof(karakterim));
    printf("Float hafizada %d byte kadar yer tutar\n",sizeof(sayim));
    printf("Double hafizada %d byte kadar yer tutar\n",sizeof(doublesayim));



    return 0;
}
