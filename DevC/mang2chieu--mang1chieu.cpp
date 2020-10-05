#include<conio.h>
#include<stdio.h>
#include<malloc.h>

int main()
{
    int mang2chieu[20][30];
    int *mang1chieu;
    int a,dong,cot,k=0;
    printf("Nhap vao so dong: ");scanf("%d",&dong);
    printf("Nhap vao so cot: ");scanf("%d",&cot);
    mang1chieu=(int*)malloc(dong*cot*(sizeof(int)));
    printf("\n\n");

    for(int i=0;i<dong;i++)
        for(int j=0;j<cot;j++)
        {
            printf("Nhap vao phan tu A[%d][%d]: ",i,j);
            scanf("%d",&mang2chieu[i][j]);
            mang1chieu[k]=mang2chieu[i][j];
            k++;    
        }
    
    //IN MANG MOT CHIEU
        
    /*for(int i=0;i<dong;i++)
        for(int j=0;j<cot;j++)
        {
            printf("%d ",mang2chieu[i][j]);
        }
        printf("\n");*/

    for(int i=0;i<k;i++)
        printf("%d ",mang1chieu[i]);
    getch();
    
}  
