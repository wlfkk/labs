#include <stdio.h>

int main(void)
{
int n;
scanf("%d", &n);
if (n == 0) {
printf("\n");
}
int arr[n][n];
for (int i = 0; i < n; i++) {
for (int j = 0; j < n; j++) {
scanf("%d", &arr[i][j]);
}
}
for (int i = 0; i < n; i++) {
for (int j = n - 1 - i; j > i - 1; j--) {
printf("%d ", arr[i][j]);
}
for (int k = i + 1; k < n - i; k++) {
printf("%d ", arr[k][i]);
}
for (int r = i + 1; r < n - i; r++) {
printf("%d ", arr[n - 1 - i][r]);
}
for (int w = n - 2 - i; w > i; w--) {
printf("%d ", arr[w][n - 1 - i]);
}
}
printf("\n");
}

