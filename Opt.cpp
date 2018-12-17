#include "HeaderFile.h"
using namespace std;
void Branch(int num);
void Opt() {
	printf("操作完成,返回选择菜单\n");
	Sleep(1000);
	printf("请键入数字以从选项中进行选择：\n");
	char s;
	cin>>s;
	Branch(s - '0');
}
