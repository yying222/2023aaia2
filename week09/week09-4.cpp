///week09-4.cpp �r�ꪺ���� �ҥ� Page 4-8
#include <stdio.h>
#include <string.h>///�n�ϥΡu�r�ꪺ�禡�v
int main()
{
    char line[100];///�i��100�Ӧr���A�ܪ�
    printf("�п�J�@��r���A���n���Ů�A�̫���浲����J\n");
    scanf("%s",line);

    int N = strlen(line);///�d�X�r�����
    printf("�r����׬O:%d\n",N);
    ///strcpy(a, "Hello"); �r�����
    ///strcat(a, b);�r�굲�X ��k��b ���쥪��a���᭱
    ///strcmp(a, b);�r���� (�v�r������A�ݽ֤���j)
}
