#include "HeaderFile.h"
using namespace std;

void Revise(int num) {
	/*printf("学号         姓名   英语成绩 数学成绩 计算导论与程序设计成绩\n");
			cout<<Stu[num].num<<" "<<Stu[num].name;
			printf("%6d%10d%15d\n",Stu[num].EngScore,Stu[num].MathScore,Stu[num].CSScore);
			
	printf("这是该学生原本的信息\n");*/
	printf("请按照如下格式进行修改（每两个量间需间隔空格）:\n");
	printf("英语成绩 数学成绩 计算导论与程序设计成绩\n");
	printf("100      100      100\n");
	cin>>Stu[num].EngScore>>Stu[num].MathScore>>Stu[num].CSScore;
	return ;
}

