///�n�F�Ѧr��P�}�C�����Y
#include <stdio.h>
int main()
{
    printf("�п�J10�Ӧr���A���঳�Ů�b�̭�:\n");
    char line[11];///�n��r���h�@��
    scanf("%s",line);///�Ф��n���Ů�
    printf("�o�Ӧr�O:%s�̭����r�A���O�O:\n");

    for(int i=0;i<11;i++){ ///��for�j��A��}�C�L�X��
        printf("��%d�Ӧr��: %c�������Ʀr�O:%d\n",i,line[i],line[i]);
    }
}
