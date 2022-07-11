#include <stdio.h>
#include <math.h>
#include <locale.h>
const double eps = 0.00001;
double f1(double x) { return 3*x - 4*log(x) - 5; }
double F1(double x) { return (5+4*log(x))/3; }
double Fp1(double x) { return 3 - 4./x; }
double f2(double x) { return sqrtf(2-x) - tan(x); }
double F2(double x) { return atan(sqrt(2-x)); }
double Fp2(double x){ return -1. / cos(x) / cos(x) - 0.5/sqrt(2-x); }
double f3(double x) { return log(2*x)-cos(x); }
double F3(double x) { return acos(log(2*x));}
double Fp3(double x) { return 1./x + sin(x); }
double dichotomy(double f(double), double a, double b)
{
double prevX = b, x = (a + b) / 2.;
while (fabs(prevX - x) > eps)
{
if (f(x) * f(a) > 0)
a = x;
else
b = x;
prevX = x;
x = (a + b) / 2.;
}
return x;
}
double iteration(double f(double), double a, double b)
{
double prevX = b + a * 0.1, x = f(prevX);
while (fabs(x - prevX) > eps)
{
prevX = x;
x = f(x);
}
return x;
}
double tangent(double f(double), double F(double), double a, double b)
{
double prevX = a + b / 2., x = prevX - f(prevX) / F(prevX);
while (fabs(prevX - x) > eps)
{
prevX = x;
x = prevX - f(prevX) / F(prevX);
}
return x;
}
double chord(double f(double), double a, double b)
{
double prevX = b, ya = f(a), yb = f(b);
double x = (ya * b - yb * a) / (ya - yb);
while (fabs(prevX - x) > eps)
{
if (ya * f(x) > 0)
a = x;
else
b = x;
ya = f(a), yb = f(b);
prevX = x;
x = (ya * b - yb * a) / (ya - yb);
}
return x;
}
int main()
{
printf("----------------------------------------------------\n");
printf("| Уравнение | Отрезок | Метод | Результат |\n");
printf("----------------------------------------------------\n");
printf("| \t 1 | [2;4] | Дихотомии | %.4f |\n", dichotomy(f1, 2, 4));
printf("----------------------------------------------------\n");
printf("| \t 1 | [2;4] | Ньютона | %.4f |\n", tangent(f1, Fp1, 2, 4));
printf("----------------------------------------------------\n");
printf("| \t 1 | [2;4] | Итераций | %.4f |\n", iteration(F1, 2, 4));
printf("----------------------------------------------------\n");
printf("| \t 1 | [2;4] | Хорд | %.4f |\n", chord(f1, 2, 4));
printf("----------------------------------------------------\n");
printf("| \t 2 | [0;1] | Дихотомии | %.4f |\n", dichotomy(f2, 0, 1));
printf("----------------------------------------------------\n");
printf("| \t 2 | [0;1] | Ньютона | %.4f |\n", tangent(f2, Fp2, 0, 1));
printf("----------------------------------------------------\n");
printf("| \t 2 | [0;1] | Итераций | %.4f |\n", iteration(F2, 0, 1));
printf("----------------------------------------------------\n");
printf("| \t 2 | [0;1] | Хорд | %.4f |\n", chord(f2, 0, 1));
printf("----------------------------------------------------\n");
printf("| \t 3 | [0;1] | Дихотомии | %.4f |\n", dichotomy(f3, 0, 1));
printf("----------------------------------------------------\n");
printf("| \t 3 | [0;1] | Ньютона | %.4f |\n", tangent(f3, Fp3, 0, 1));
printf("----------------------------------------------------\n");
printf("| \t 3 | [0;1] | Итераций | %.4f |\n", iteration(F3, 0, 1));
printf("----------------------------------------------------\n");
printf("| \t 3 | [0;1] | Хорд | %.4f |\n", chord(f3, 0, 1));
return 0;
}
