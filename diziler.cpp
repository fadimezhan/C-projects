#include<stdio.h>
#include<ctype.h>

int main()
{
	char cumle[100];
	printf("Cumle giriniz:");
	gets(cumle);
	cumle[0]=toupper(cumle[0]);
	for(int i=0;i<=100;i++)
	{if(cumle[i]==' '&&cumle[i+1]!=' ')
		cumle[i+1]=toupper(cumle[i+1]);
	}

	printf("%s\n",cumle);
	return 0;

}