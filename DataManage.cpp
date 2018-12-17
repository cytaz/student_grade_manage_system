#include "HeaderFile.h"
using namespace std;

bool JudgeStu(long long num);

/*void Swap(int a,int b) {
	Students t;
	t = Stu[a];
	Stu[a] = Stu[b];
	Stu[b] = t;
}*/

void Insert_1(Students S) {
	Stu[cnt + 1] = S;
	int t = cnt;
	if(JudgeStu(Stu[t].num))
		return ;
	while(Stu[t + 1].num > Stu[t].num)
		swap(Stu[t],Stu[t + 1]);
}//插入方案1：逐一比较 
