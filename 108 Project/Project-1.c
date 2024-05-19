#include <stdio.h>
int main()
{
    float a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q, r, s, t, u;
    printf("Enter the number who's table you want:");
    scanf("%f", &a);
    b = 1;
    c = 2;
    d = 3;
    e = 4;
    f = 5;
    g = 6;
    h = 7;
    i = 8;
    j = 9;
    k = 10;
    l = a * b;
    m = a * c;
    n = a * d;
    o = a * e;
    p = a * f;
    q = a * g;
    r = a * h;
    s = a * i;
    t = a * j;
    u = a * k;

    printf("\n%.1fx1=%.1f", a, l);
    printf("\n%.1fx2=%.1f", a, m);
    printf("\n%.1fx3=%.1f", a, n);
    printf("\n%.1fx4=%.1f", a, o);
    printf("\n%.1fx5=%.1f", a, p);
    printf("\n%.1fx6=%.1f", a, q);
    printf("\n%.1fx7=%.1f", a, r);
    printf("\n%.1fx8=%.1f", a, s);
    printf("\n%.1fx9=%.1f", a, t);
    printf("\n%.1fx10=%.1f", a, u);
    return 0;
}