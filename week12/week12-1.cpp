///week12-1.cpp質數判斷
#include <stdio.h>
int isPrime(int n)
{///質數不能整除
    for(int i=2;i<n;i++){
        if(n%i==0) return 0;///失敗
    }
    return 1;///成功!!!結尾不能有功，有毒!!
}

int main()
{
    printf("請輸入1個數");
    int n;
    scanf("%d",&n);
    if(isPrime(n))
        printf("n是質數");
    else
        printf("n不是質數");
}
