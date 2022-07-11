#include<stdio.h>
int main()
{
    int k, i, p, v, j, o, len1, len2, dellen;
    int max(int x1, int y1){
    if(x1>=y1) return x1;
    else return y1;
    }
    char c[15];
    for (int i=1; k!=','; i++)
    {
        k=getchar();
        c[i]=k;
        //printf("c=%c i=%d\n", c[i], i);
        p=i-1;
    }
    for (int j=p+2; k!='s'; j++)
    {
        k=getchar();
        c[j]=k;
        //printf("c=%c j=%d\n", c[j], j);
        v=j-1;
    }
    //for (int i=1; i<16; i++)
    //{
        //printf("c(%d)=%c\n", i, c[i]);
    //}
    len1=p;
    len2=v-p-2;
    dellen=max(len1-len2, len2-len1);
    if (len1>len2)
    {
        for (int j=1; j<=dellen; j++)
        {
            printf("%c", c[j]);
        }
    }
    if (len1<len2)
    {
        for (int j=1; j<=dellen; j++)
        {
            printf("%c", c[p+2+j]);
        }
    }
    for (int i=1; i<=max(p, v-p-2) && c[v-p+i]!='s'; i++)
    {
        o=max(c[i], c[v-p+i]);
        printf("%c", o);
    }
}
