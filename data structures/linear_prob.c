#include<stdio.h>
#define N 10
int insert (void);
void display(void);
int search(int );
void Remove(void);
int hash[N],j=0,a;
main()
{
  int ch,ele;
  while(1)
   {
     printf("\n1.insert 2.displayy 3.search 4.remove 5.exit=");
    scanf("%d",&ch);
     switch(ch)
     {
       case 1:insert();break;
       case 2: display();break;
       case 3: printf("enter an element to search=");
               scanf("%d",&ele);
               search(ele);
               break;
       case 4: Remove();break;
       case 5: exit(0);break;
       default: printf("enter a valid choice");
      }
    }
}


int insert(void)
{
  int i,ele;
  if(j<N)
  {
    printf("enter value=");
    scanf("%d",&ele);
     i=ele%N;
        while(hash[i]!=0)
             i=(i+1)%N;
         hash[i]=ele;
        j++;
  }
  else
    printf("overflow");
}
 

void display(void)
{
  int i;
  for(i=0;i<N;i++)
     printf(" %d",hash[i]);
}


int search(int x)
{
  int y,z;
  y=x%N;
 for(z=0;z<N;z++)
  {
     if(hash[y]==x)
      {
          printf("element found at %d position",y+1);
         return y;
      }
     else
        y=(y+1)%N;
   }
  printf("element not found\n");
   return 0;
}


void Remove(void)
{
  int m,a;
  printf("enter value to be deleted=");
  scanf("%d",&a);
   if(m=search(a))
   {
     printf("deletedvalue is %d",hash[m]);
     hash[m]=0;
     j--;
     return;
   }
   printf("given element is not in the hash table");
}

