#include<stdio.h>
int main() {
int n, k;
char c;
k=0;
n=0;
c=0;
for (int i = 0; k!='s' ; i++)
    {
    k=getchar();
    c=k;
   if(c!='0' && c!='1'&& c!='2' && c!='3' && c!='4' && c!='5' && c!='6' && c!='7' && c!='8' && c!='9')
   {
       n++ ;
   }
   //printf("i=%d %c\n", i, c);
}
  printf("%d", n);
}
