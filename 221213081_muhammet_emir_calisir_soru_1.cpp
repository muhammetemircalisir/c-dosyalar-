#include<stdio.h>
#include<stdlib.h>

int sonuc(int n,int r)
{  
    int islem;
	int x=1,y=1,z=1;
	for(int i=1;i<=n;i++)
	{
		x=x*i;
	}
	for(int j=1;j<=r;j++)
	{
		y=y*j;
	}
	for(int k=1;k<=n-r;k++)
	{
		z=z*k;
	}
	islem=x/(y*z);

return islem;

}
int main()
{
	int n,r;
	
	printf("n degerini giriniz: ");
	scanf("%d",&n);
	
	printf("r degerini giriniz: ");
	scanf("%d",&r);
	
	printf("kombinasyon sonuzu: %d",sonuc(n,r));  
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
