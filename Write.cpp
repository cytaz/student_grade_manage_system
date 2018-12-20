#include "HeaderFile.h"
using namespace std;

bool cmp0(Students a, Students b);

Students Stu1[MAX_SIZE];
void Write() {
	fstream _file;
	_file.open("data\\info.txt",ios::out);
	int cnt1 = 0;
	if (head == -1) return ;
	int p = head;
	while(p != -1) {
		Stu1[++cnt1] = Stu[p];
		p = Stu[p].next;
	}
	sort(Stu1 + 1, Stu1 + cnt1 + 1, cmp0);
	_file<<cnt1<<endl;
	for(int i = 1;i <= cnt1;i++)
		_file<<Stu1[i].num<<" "<<Stu1[i].name<<" "<<Stu1[i].EngScore
		<<" "<<Stu1[i].MathScore<<" "<<Stu1[i].CSScore<<endl;
	_file.close();
}
