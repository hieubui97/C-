#include<stdio.h>
#include<iostream>
#include<string.h>
int main()
{	char xau[100],xau1[100]; int j=0;
	FILE *doc;
	if((doc=fopen("data.txt","r"))==NULL) 
	{
	printf("k doc duoc file, ban vui long tao file moi.");perror(" Ly do: ");
	exit(1);
	}
	else fgets(xau,100,doc);
	fclose(doc);
	printf("Chuoi trong file la: %s\n",xau);
//chuan hoa xau
	printf("Chuoi trong file sau chuan hoa la:");
	int n,m; n=0; m=strlen(xau);
	//Chuan hoa chu cai dau
for (int i=0;i<strlen(xau);i++)
	{
	if (xau[i]!=' ') break; 
	n++;
    }
    printf("%c",toupper(xau[n]));
    //xoa khoang trong thua cuoi chuoi ki tu
for (int i=strlen(xau)-1;i>=0;i--)
	{
	if (xau[i]!=' ') break; 
	m--;
	}
	//chuan hoa khoang cach giua cac tu + giu nguyen viet Hoa (neu co) cac chu cai dau moi tu.
for (int k=n+1;k<m;k++)
	if ((xau[k]==' ')&&((xau[k+1]==' ')||xau[k+1]=='.'||xau[k+1]==','||xau[k+1]==';'))
	 continue;
	else if (xau[k-1]==' ')
     {
	 xau[k]=(xau[k]);
    xau1[j++]=xau[k];
     }
	else if (xau[k-1]=='.') xau1[j++]=toupper(xau[k]); 
	else if ((xau[k-1]==',')||(xau[k-1]==';')) xau1[j++]=xau[k]; 
	else    xau1[j++]=tolower(xau[k]);
	xau1[j]=0;
	//chuan hoa sau dau . , ;
for(int i=0;i<j;i++)
	if(xau1[i]=='.'||xau1[i]==';'||xau1[i]==',') printf("%c ",xau1[i]);
	else printf("%c",xau1[i]);

		
}

	

