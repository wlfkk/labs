#include <stdio.h>
int sign(int x){
if(x>0) return 1;
else if(x==0) return 0;
else return -1;
}
int abs(int x){
return x*sign(x);
}
int min(int x1,int y1){
if(x1>y1) return y1;
else return x1;
}
int max(int x1, int y1){
if(x1>=y1) return x1;
else return y1;
}
int ifunc(int k, int i, int j, int l){
k--;
return (i*i/(abs(j-l)+k+1)-j*j/(abs(i-l)+k+1))%30;
}
int jfunc(int k, int i, int j, int l){
k--;
return sign(l)*min(i, j)-sign(j)*i, l + k;
}
int lfunc(int k, int i, int j, int l){
return (i-j)*(j-l)*(l-i)%20;
}
int main() {
int i, j, l, k = 1, cou=0, i0=-8, j0 = -5, l0=12;
while(k<50){
i = ifunc(k, i0, j0, l0);
j = jfunc(k, i0, j0, l0);
l = lfunc(k, i0, j0, l0);
if(i<=0 && i>=0-10 && j>=i+10 && j<=-i+10){
printf("Попадание в заданую область\n");
printf("k=%d i=%d j=%d l=%d\n", k, i, j, l);
return 0;
}
i0 = i;
j0 = j;
l0 = l;
k++;
}
printf("Нет попадания в заданую область\n");
printf("k=%d i=%d j=%d l=%d\n", k, i, j, l);
return 0;
}
