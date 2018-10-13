#include<stdio.h>
void sender();
void reciever(char[]);
main()
{
 sender();
}

void sender()
{
  int i;
  char cword[8],r[3];
  printf("enter 4 bit binary digits : ");
  scanf("%s",cword);
  cword[4]=(int)cword[2]^(int)cword[1]^(int)cword[0];
  cword[5]=(int)cword[1]^(int)cword[2]^(int)cword[3];
  cword[6]=(int)cword[2]^(int)cword[3]^(int)cword[0];
  cword[1]=0;
  for(i=0;i<8;i++)
  printf("%c",cword[i]);
   reciever(cword);
}

void reciever(char cword[])
{
 int i;
  int s[3];
  for(i=0;i<7;i++)
  // printf("%c",cword[i]);
 s[2]=(int)cword[2]^(int)cword[1]^(int)cword[0]^(int)cword[4];
 s[1]=(int)cword[1]^(int)cword[2]^(int)cword[3]^(int)cword[5];
 s[0]=(int)cword[2]^(int)cword[3]^(int)cword[0]^(int)cword[6];
  printf("\n%d%d%d",s[2],s[1],s[0]);
 
 return;
}
