#include "stdio.h"


int main()
{
    int so[10]={0,1,2,3,4,5,6,7,8,9};
    int nhap ;
    printf("nhap = ");
    scanf("%d",&nhap );
    for(int i=0 ;i<10;i++)
    {
        if(so[i]==nhap)
        {
            printf("PTU %d ơ vi tỉ %d", nhap,i);
        }

    }
    return 0;
}