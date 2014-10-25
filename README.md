C-projects
==========
#include <stdio.h>


char harfecevir(int vz,int fn)
{
	float ortalama;
	char harf;

	ortalama=(vz*0.4)+(fn*0.6);

	if(ortalama<50)
		harf='F';
	else if(ortalama<60)
		harf='D';
	else if(ortalama<70)
		harf='C';
	else if(ortalama<80)
		harf='B';
	else
		harf='A';
	return harf;

}



int main()
{
	int vize,final;
	printf("Vize notunuzu giriniz:\n");  scanf("%d",&vize);
	printf("Final notunuzu giriniz:\n"); scanf("%d",&final);
	printf("Harf Notu : %c\n",harfecevir(vize,final));
	return 0;

}
