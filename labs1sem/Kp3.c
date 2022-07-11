#include<stdio.h>
#include<math.h>
#include<locale.h>
int main() {
    setlocale(0,"Russian");
double z, S, p, x, a=0, b=0.5, h, eps=1;
int n;
while(1+eps>1) {
    eps/=2;
}
h=(b-a)/10;
printf("Машинное эпсилон = %21.19f\n\n",eps);
printf("--------------------------------------------------------------\n");
printf("|   x  |          S            |       arctg(x)        |  n  |\n");
printf("--------------------------------------------------------------\n");
for(x=a; x<b+0.001; x+=h) {
n=1;
S=x;
p=x;
while( p>eps || -p>eps ) {
    p= -p*x*x;
    z=p/(2*n+1);
    S+=z;
n++;
}
printf("| %4.2f | %21.19f | %21.19f | %3d |\n", x, S, atan(x), n);
}
printf("--------------------------------------------------------------\n");
return 0;
}

