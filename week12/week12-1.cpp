///week12-1.cpp��ƧP�_
#include <stdio.h>
int isPrime(int n)
{///��Ƥ���㰣
    for(int i=2;i<n;i++){
        if(n%i==0) return 0;///����
    }
    return 1;///���\!!!�������঳�\�A���r!!
}

int main()
{
    printf("�п�J1�Ӽ�");
    int n;
    scanf("%d",&n);
    if(isPrime(n))
        printf("n�O���");
    else
        printf("n���O���");
}
