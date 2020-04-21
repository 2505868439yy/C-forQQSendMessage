#include <stdio.h>
#include <Windows.h>

int main()
{
    int i;
    char name[100];
    printf("请输入你要轰炸目标的qq名称:\n");
    scanf("%s",name);
    printf("请输入轰炸次数:\n");
    scanf("%s",&i);
    HWND H = FindWindow(NULL,name);
    while(i-- > 0)
    {
        SendMessage(H,WM_PASTE,0,0);
        SendMessage(H,WM_KEYDOWN,VK_RETURN,0);
    }
    return 0;
}