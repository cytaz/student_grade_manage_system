#include "HeaderFile.h"
using namespace std;

void Read();
void Branch(int num);
void Welcome() {
	printf("欢迎来到学生成绩管理系统！！！\n");
	Sleep(500);
	printf("请键入数字以从下列选项中进行选择(在所有选择中我们都只会识别你输入的第一个字符)：\n");
	printf("1:查询个人信息\n");
	printf("2:成绩录入\n");
	printf("3:成绩修改\n");
	//printf("4:成绩添加\n");
	printf("5:成绩删除\n");
	printf("6:统计\n");
	//printf("7:\n");
	//printf("8:\n");
	printf("9:关于\n");
	printf("0:退出程序\n");
	
	Read();
	char s;
	cin>>s;
	Branch(s - '0');
	return ;
}
