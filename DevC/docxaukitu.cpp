#include<stdio.h>
#include<iostream>
#include<string.h>
int main()
{	char sv[30]; int c; int i=0;
	FILE *doc;
	if((doc=fopen("xaukitu.txt","r"))==NULL)
	{
		printf("Xay ra loi khi doc file"); perror("ly do: ");
		exit(1);
	}
	while((c=fgetc(doc))!=EOF)
	printf("%c",c);  
}
