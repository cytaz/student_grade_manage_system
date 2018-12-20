#include "HeaderFile.h"
using namespace std;

bool cmp0(Students a, Students b) {	return a.num < b.num; }
bool cmp1(Students a, Students b) {	return strcmp(a.name,b.name) == 1 ? 0 : 1; }
bool cmp2(Students a, Students b) {	return a.MathScore < b.MathScore; }
bool cmp3(Students a, Students b) {	return a.EngScore < b.EngScore; }
bool cmp4(Students a, Students b) {	return a.CSScore < b.CSScore; }

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
