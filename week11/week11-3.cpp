#include <stdio.h>
int gcd(int a, int b)
{
    if (a == 0) return b;
    if (b == 0) return a;
    return gcd(b, a % b);
}
int main()
{
    printf("½Ð¿é¤J2­Ó¼Æ¦r:");
    int a, b;
    scanf("%d %d", &a, &b);
    int ans = gcd(a, b);
    printf("µª®×¬O:%d", ans);
}