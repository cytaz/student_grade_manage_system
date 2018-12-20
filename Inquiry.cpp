#include "HeaderFile.h"
using namespace std;

void Opt();

int Number_Inquiry(long long num) {
	int p = head;
	while(true) {
		if(p == -1) break;
		if(Stu[p].num == num)
			return p;
		p = Stu[p].next;
	}
	return -1;
}

int Name_Inquiry(char *s) {
	int p = head;
	while(true) {
		if(p == -1) break;
		if(!strcmp(Stu[p].name,s))
			return p;
		p = Stu[p].next;
	}
	return -1;
}

void MathScore_Inquiry(Students *S, int num, int l, int r) {
	int Score[MAX_SIZE];
	for(int i = 1;i <= num;i++)
		Score[i] = S[i].MathScore;
	int p1 = lower_bound(Score + 1, Score + num + 1, l) - Score;
	int p2 = upper_bound(Score + 1, Score + num + 1, r) - Score;
	cout<<"学生数："<<p2 - p1<<endl;
	for(int i = p2 - 1;i >= p1;i--) {
		cout<<S[i].num<<" "<<S[i].name;
		printf("\t%d\t%d\t%d\n",S[i].EngScore,S[i].MathScore,S[i].CSScore);
	}
}

void EngScore_Inquiry(Students *S, int num, int l, int r) {
	int Score[MAX_SIZE];
	for(int i = 1;i <= num;i++)
		Score[i] = S[i].EngScore;
	int p1 = lower_bound(Score + 1, Score + num + 1, l) - Score;
	int p2 = upper_bound(Score + 1, Score + num + 1, r) - Score;
	cout<<"学生数："<<p2 - p1<<endl;
	for(int i = p2 - 1;i >= p1;i--) {
		cout<<S[i].num<<" "<<S[i].name;
		printf("\t%d\t%d\t%d\n",S[i].EngScore,S[i].MathScore,S[i].CSScore);
	}
}

void CSScore_Inquiry(Students *S, int num, int l, int r) {
	int Score[MAX_SIZE];
	for(int i = 1;i <= num;i++)
		Score[i] = S[i].CSScore;
	int p1 = lower_bound(Score + 1, Score + num + 1, l) - Score;
	int p2 = upper_bound(Score + 1, Score + num + 1, r) - Score;
	cout<<"学生数："<<p2 - p1<<endl;
	for(int i = p2 - 1;i >= p1;i--) {
		cout<<S[i].num<<" "<<S[i].name;
		printf("\t%d\t%d\t%d\n",S[i].EngScore,S[i].MathScore,S[i].CSScore);
	}
}

int Inquiry(char &ch, int x) {
	switch(ch - '0') {
		case 1: {
			printf("请输入学号:");
			long long num; 
			scanf("%lld",&num);
			int i = Number_Inquiry(num);
			if(i == -1) {
				printf("未查到该学生信息！\n");
				//if(x == 2) Opt();
				return -1;
			}
			printf("学号         姓名   英语成绩 数学成绩 计算导论与程序设计成绩\n");
			cout<<Stu[i].num<<" "<<Stu[i].name;
			printf("\t%d\t%d\t%d\n",Stu[i].EngScore,Stu[i].MathScore,Stu[i].CSScore);
			return i;
		}
		case 2: {
			printf("请输入姓名:");
			char s[100];
			cin>>s;
			int i = Name_Inquiry(s);
			if(i == -1) {
				printf("未查到该学生信息！\n");
				//if(x == 2) Opt();
				break;
			}
			printf("学号         姓名   英语成绩 数学成绩 计算导论与程序设计成绩\n");
			cout<<Stu[i].num<<" "<<Stu[i].name;
			printf("\t%d\t%d\t%d\n",Stu[i].EngScore,Stu[i].MathScore,Stu[i].CSScore);
			return i;
		}
		case 0: {
			//if(x == 2) Opt();
			return -1;
		}
		default: {
			printf("输入无效,请重新输入！\n");
			printf("请键入数字以从选项中进行选择：\n");
			char ch;
			cin>>ch;
			Inquiry(ch, x);
		}
	}
}

void Inquiry() {
	printf("请选择您的查询方式\n");
	Sleep(500);
	printf("1:按学号查询\n");
	printf("2:按名字查询\n");
	printf("0:退出查询\n");
	printf("请键入数字以从上述选项中进行选择：\n");
	char ch;
	cin>>ch;
	int num = Inquiry(ch, 1);
	if(ch == '0') return ;
	printf("是否继续查询(输出N退出)\n");
	cin>>ch;
	if(ch != 'N') Inquiry();
	else Opt();
}
