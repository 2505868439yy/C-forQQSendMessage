#include <stdio.h>
#include <Windows.h>

int main()
{
    int i;
    char name[100];
    printf("��������Ҫ��ըĿ���qq����:\n");
    scanf("%s",name);
    printf("�������ը����:\n");
    scanf("%s",&i);
    HWND H = FindWindow(NULL,name);
    while(i-- > 0)
    {
        SendMessage(H,WM_PASTE,0,0);
        SendMessage(H,WM_KEYDOWN,VK_RETURN,0);
    }
    return 0;
}