#include <stdio.h>
#include <stdlib.h>

int main()
{
	printf("Degerli kullanicimiz programin kullanim sekli soyledir:\n\n\n\nA veya a ve D veya d ile karaktere yon verebilirsiniz\nW veya w ile de belirlediginiz yonde karakter yol almaktadir\n\nBaslangicta karakter kuzey yonune konumlandirilmistir\n\n\nDevam etmek icin basiniz");
	getchar();
	system("CLS");
	char komut[100];
	
	printf("Karakteri hareket ettiricek komutlari giriniz: ");
	gets(komut);										
	
	int x,y,ilk,kg=1,db=0,i=0,j=0;
	
	printf("Istenilen yerin kordinatlarini giriniz: ");	
	printf("\nX ekseni --> ");
	scanf("%d",&x);
	
	printf("Y ekseni --> ");
	scanf("%d",&y);
	
	
	for(ilk=0 ; ilk<100 ; ilk++)
	{
		if(kg==1)
		{
			if(komut[ilk]=='a' or komut[ilk]=='A')
			{
				db=-1;
				kg=0;
			}
			else if (komut[ilk]=='d' or komut[ilk]=='D')
			{
				db=1;
				kg=0;
			}
			else if(komut[ilk]== 'w' or komut[ilk]== 'W')
			{
				j++;
			}
			}
		else if(db==-1)
		{
			if(komut[ilk]=='a' or komut[ilk]=='A')
			{
				db=0;
				kg=-1;
			}
			else if (komut[ilk]=='d' or komut[ilk]=='D')
			{
				db=0;
				kg=1;
			}
			else if(komut[ilk]== 'w' or komut[ilk]== 'W')
			{
				i--;
			}
		}
		else if(kg==-1)
		{
			if(komut[ilk]=='a' or komut[ilk]=='A')
			{
				db=1;
				kg=0;
			}
			else if (komut[ilk]=='d' or komut[ilk]=='D')
			{
				db=-1;
				kg=0;
			}
			else if(komut[ilk]== 'w' or komut[ilk]== 'W')
			{
				j--;
			}
		}
		else if(db==1)
		{
			if(komut[ilk]=='a' or komut[ilk]=='A')
			{
				db=0;
				kg=1;
			}
			else if (komut[ilk]=='d' or komut[ilk]=='D')
			{
				db=0;
				kg=-1;
			}
			else if(komut[ilk]== 'w' or komut[ilk]== 'W')
			{
				i++;
			}	
		}
	}
	if(x==i and y==j)
	{
		printf("\nGirdiginiz kordinatlar ile karakterin kordinatlari aynidir.");
	}
	else
	{
		printf("\nGirdiginiz kordinatlar ile karakterin kordinatlari ayni degildir.");
	}
	
	return 0;
}
