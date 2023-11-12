#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char karakter ='C';
	int integerdegerim=1;
	float floatsayim=5.43;
	double doublesayim=3231321213123;
	
	printf("karakterim = %c, karakterimin adresi =%d\n",karakter,&karakter);
	printf("integerdegerim = %d, integerimin adresi =%d\n",integerdegerim,&integerdegerim);
	printf("floatsayim = %f, floatsayimin adresi =%d\n",floatsayim,&floatsayim);
    printf("doublesayim = %lf, doublesayimin adresi =%d\n",doublesayim,&doublesayim);
	return 0;
}
