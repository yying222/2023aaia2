#include <stdio.h>
int main()
{
    printf("½Ð¿é¤J¤j¤p:");
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        int space = i, star = n;
        for (int k = 1; k <= space; k++) printf(" ");
        for (int k = 1; k <= star; k++) printf("*");
        printf("i:%d\n", i);
    }
}