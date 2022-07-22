#include<stdio.h>
#include<windows.h>
#include<bits/stdc++.h>
#include<iostream>
#include<string>
#include<cstring>
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<time.h>
#include<unistd.h>
#include<cstdlib>
#include<conio.h>
#define random(x) (rand()%x)
using namespace std;
int main()
{
	double a,b,c;
	cout << "welcome to Mouse connector!/欢迎使用鼠标连点器！" << endl;
	cout << "Please select a language!/请选择语言:(Chinese or English Press 1 for Chinese and 2 for English)/选中文按1，选英文按2" << endl;
	cin >> c;
	if(c == 2)
	{
		system("title Mouse connector");
		cout << "Press the space bar to execute this product, press ESC once to end, and press ESC twice to exit the program" << endl;
		cout << "MOUSEEVENTF_LEFTDOWN:";
		cin >> a;
		cout << "MOUSEEVENTF_LEFTUP:";
		cin >> b;
		cout << "OK,Beginning!" << endl;
    	while(1)
    	{
        	if(GetAsyncKeyState(VK_SPACE))
        	{
            	while(1)
            	{
                	mouse_event(MOUSEEVENTF_LEFTDOWN,500,500, 0, 0);
                	Sleep(1000 * a);
					mouse_event(MOUSEEVENTF_LEFTUP,500,500, 0, 0);
                	Sleep(b * 1000);
                	if(GetAsyncKeyState(VK_ESCAPE))
					{
						cout << "OK,closed!" << endl;
						cout << "This product was invented by author King34 without team assistance.Welcome to use next time！";
						return 0; 
					}
            	}
        	}
    	}
	}
	if(c == 1)
	{
		system("title 鼠标连点器");
		cout << "本产品按空格键执行，按一次Esc键结束，按二次Esc键退出程序" << endl; 
		cout << "鼠标左键按下:";
		cin >> a;
		cout << "鼠标左键抬起:";
		cin >> b;
		cout << "开始" << endl;
    	while(1)
    	{
        	if(GetAsyncKeyState(VK_SPACE))
        	{
            	while(1)
            	{
                	mouse_event(MOUSEEVENTF_LEFTDOWN,500,500, 0, 0);
                	Sleep(1000 * a);
					mouse_event(MOUSEEVENTF_LEFTUP,500,500, 0, 0);
                	Sleep(b * 1000);
                	if(GetAsyncKeyState(VK_ESCAPE))
					{
						cout << "好的，关闭" << endl;
						cout << "本产品由作者King34一手发明，无团队协助。欢迎下次使用！再见！";
						return 0; 
					}
            	}
        	}
    	}
	}
	if(c == 3)
	{
		cout << "欢迎！你找到了彩蛋！" << endl;
		usleep(500000);
		cout << "本产品代表了作者很可能会退出Dev.C++的舞台，因为他准备...放弃了...再见。"; 
	} 
    return 0;
}
