#include <stdio.h>
int main()
{
    printf("½Ð¿é¤J¤j¤p:");
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i ++)
    {
        int star = i;
        for (int k = 1; k <= star; k ++) printf("*");
        printf("\n");
    }
}
