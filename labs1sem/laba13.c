#include <stdio.h>
int main() {
    int p0, p1, n1, n2, d, o, m;
    char k, c, s[1000];
    for (int i=1; k!='0'; i++){
        k=getchar();
        s[i]=k;
        m=i;
    }
    n1=0;
    n2=0;
    p1=0;
    k='0';
    for (int i=1; i!=m; i++){
        k=s[i];
        if (k=='k' || k=='p' || k=='s' || k=='t' || k=='f' || k=='h' || k=='K' || k=='P' || k=='S' || k=='T' || k=='F' || k=='H'){
            n1++;
        }
        if (k=='i' || k=='o' || k=='e' || k=='u' || k=='a' || k=='y' || k=='I' || k=='O' || k=='E' || k=='U' || k=='A' || k=='Y'){
            n2++;
        }
        if (k==' ' || k==',' || k=='.' || k=='!' || k=='?'){
            p0=p1+1;
            p1=i;
            d=p1-p0;
            if (d==n1+n2 && n1>0){
                for (int j=p0; j<p1; j++){
                    printf("%c", s[j]);
                }
            }
            n1=0;
                n2=0;
                d=0;
        }
    }
}
