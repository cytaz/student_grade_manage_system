#include "HeaderFile.h"
using namespace std;

void Add(Students S);
void Opt();
bool JudgeStu(long long sum);

int cnt1;
void Load() {
	printf("请输入你想录入学生的数量:");
	scanf("%d",&cnt1);
	printf("请按照如下格式进行录入（每两个量间需间隔空格）:\n");
	printf("学号         姓名   英语成绩 数学成绩 计算导论与程序设计成绩\n");
	printf("201800130001 王二狗 100      100      100\n");
	printf("201800130002 张三   99       99       99\n");
	Students S;
	int Error = 0;
	for(int i = 1;i <= cnt1;i++) {
		cin>>S.num>>S.name>>S.EngScore>>S.MathScore>>S.CSScore;
		//cout<<S.num<<" "<<S.name;
		//printf("%6d%10d%15d\n",S.EngScore,S.MathScore,S.CSScore);
		if(!JudgeStu(S.num)) Add(S);
		else Error++; 
	}
	printf("成功:%d,失败:%d\n",cnt1 - Error, Error);
	Opt();
	return ;
}
