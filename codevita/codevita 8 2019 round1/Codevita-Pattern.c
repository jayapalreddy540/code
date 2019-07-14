#include<stdio.h>
int pattern(int sizeOfPattern)
{
    int x=0,i,j,difference=0;
    int temp=sizeOfPattern;
    for(i=0;i<temp;i++)
    {
        for(j=0;j<i*2;j++) printf("*");
        for(j=0;j<sizeOfPattern;j++)
        {
            x=x+10;
            printf("%d",x);
            
        }
        difference=x+((sizeOfPattern-1)*sizeOfPattern)*10;
        for(j=0;j<sizeOfPattern;j++)
        {
            difference=difference+10;
            if(j==sizeOfPattern-1)
            {
                difference=difference/10;
            }
            printf("%d",difference);
        }
        sizeOfPattern=sizeOfPattern-1;
        printf("\n");
    }
    return 0;
}
int main()
{
  int sizeOfPattern;
  scanf("%d",&sizeOfPattern);
  pattern(sizeOfPattern);

return 0;
}