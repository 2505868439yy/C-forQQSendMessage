#include <stdio.h>
#include <Windows.h>

/******************************************
*   1.先用VC6.0建一个工程，把这个文件丢进去编译
*   2.要先打开与某个人的qq对话框，把你要对那个人轰炸的信息复制好
*   3.运行程序，然后把qq名字打进去，然后输入次数，回车就可以轰炸了
*******************************************/

int main()
{
    int i;
    char name[100];
    printf("请输入你要轰炸目标的qq名称:\n");
    scanf("%s",name);//这个名字就是你要轰炸对象的qq名称
    printf("请输入轰炸次数:\n");
    scanf("%s",&i); //这边输入的是次数
    HWND H = FindWindow(NULL,name);//这边在找你的对话窗口
    while(i-- > 0)
    {
        SendMessage(H,WM_PASTE,0,0);//相当于黏贴操作
        SendMessage(H,WM_KEYDOWN,VK_RETURN,0);//相当于回车操作
    }
    return 0;
}
