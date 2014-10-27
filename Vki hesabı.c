#include <stdio.h>

int main()
{
	//vücut kitle indeksini hesaplayıp, yorumlayan program...
	float boy,kilo,vki,k,e;
	char cinsiyet;
	printf("cinsiyetiniz (kiz(k) erkek(e)):");
	scanf("%c",&cinsiyet);

	printf("boyunuz:"); scanf("%f",&boy);
	printf("kilonuz:"); scanf("%f",&kilo);
	vki=kilo/(boy*boy);
	

	if(cinsiyet=='k')
	{
	if(vki<19.1)
		printf("Zayifsiniz.Saglik riski!\n");
	else if(19.1<=vki && vki<=25.8)
		printf("Normalsiniz.Risk yok.\n");
	else if(25.9<=vki && vki<=32.2)
		printf("Sismanlik sınırıinda yada sismansiniz.Riskli!\n");
	else if(32.3<=vki)
		printf("Obezite.Ciddi derecede riskli!!\n");

	}
	else if(cinsiyet=='e')
	{
		if(vki<20.7)
		printf("Zayifsiniz.Saglik riski!\n");
	else if(20.7<=vki && vki<=26.4)
		printf("Normalsiniz.Risk yok.\n");
	else if(26.5<=vki && vki<=31.1)
		printf("Sismanlik sınırıinda yada sismansiniz.Riskli!\n");
	else if(31.2<=vki)
		printf("Obezite.Ciddi derecede riskli!!\n");
	
	}
	else
		printf("gecersiz deger girildi.");	
	
	
	return 0;

}
