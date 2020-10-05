#include<stdio.h>
#include <conio.h>

void quicksort(int *a,int l,int r)
{
     if(l>=r) return; // ket thuc
     int i=l;
     int j=r;
     int x=a[l];
     while(i<=j)
     {
                while(a[i]<x) i++;
                while(a[j]>x) j--;
                if(i<=j)
                {
                        int temp=a[i];
                        a[i]=a[j];
                        a[j]=temp;
                        i++;j--;
                }
     }
     quicksort(a,l,j);
     quicksort(a,i,r);
     
}
int main()
{
      int *a,n,i;
      printf("nhap so phan tu n:");scanf("%d",&n);		//input
      a=new int[n];
      for (i=0;i<n;i++)						//nhap mang
      {
          printf("a[%d]=",i);scanf("%d",&a[i]);
      }
      quicksort(a,0,n-1);
      printf("mang sap xep tnag dan la:");
     for(i=0;i<n;i++)						//output	
      {
      printf("%d ",a[i]);
      }
      getch();
      delete a;
}
