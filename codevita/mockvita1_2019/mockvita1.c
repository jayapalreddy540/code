#include<stdio.h>
#include<string.h>
int check_anagram(char a[], char b[])
{
  int first[26] = {0}, second[26] = {0}, c=0;
 
  // Calculating frequency of characters of first string
 
  while (a[c] != '\0')
  {
    first[a[c]-'a']++;
    c++;
  }
 
  c = 0;
 
  while (b[c] != '\0')
  {
    second[b[c]-'a']++;
    c++;
  }
 
  // Comparing frequency of characters
 
  for (c = 0; c < 26; c++)
  {
    if (first[c] != second[c])
      return 0;
  }
 
  return 1;
}

int main()
{
 char s[31];
 scanf("%s",s);
 int n;
  scanf("%d",&n);
   getchar();
  char c;
  int d;
   int l=strlen(s);
 int p=0;
  char str[11]="";
 int i=0;
      while(n--)
      {
  scanf("%c",&c);
  getchar();
  scanf("%d",&d);
  getchar();
  //printf("\n%c %d ",c,d);
    if(c=='L')  p=p+d;
    else p=p-d;
   if(p<0) p=l+p;
   p=p%l;
    str[i++]=s[p];
   }
   //printf("%s",str);
  int len=strlen(str);
  int flag=0,j=0;
  char fd[len];
  for(i=0;i<l;i++)
                              {     int k=0;
                                  for(j=i;j<i+len;j++) fd[k++]=s[j];
                                  if(check_anagram(fd,str)) {flag=1; break;}
                              
                              }
                              if(flag==1) printf("YES\n");
                              else printf("NO\n");
                               return 0;
}