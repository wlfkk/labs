#include<stdio.h>
int main(void)
{
long long max;
long long a[max][max];
long long n;
scanf("%lld", &n);
for (long long i = 0; i < n; ++i) {
for (long long j = 0; j < n; ++j) {
scanf("%lld", &a[i][j]);
}
}
int nstr = 0, maxel = -500000;
for (long long i = 0; i < n; ++i) {
for (long long j = 0; j < n; ++j) {
if (a[i][j] > maxel) {
maxel = a[i][j];
nstr = i;
}
}
}
long long s = 0;
long long j = 0;
while (j <= n - 1) {
s += a[nstr][j];
j++;
}
printf("%lld\n", s);

return 0;
}
