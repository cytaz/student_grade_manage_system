#include "HeaderFile.h"
using namespace std;

bool cmp(Students a, Students b);

Students Stu2[MAX_SIZE];
void Count() {
	int cnt1 = 0;
	if (head == -1) return ;
	int p = head;
	while(p != -1) {
		Stu2[++cnt1] = Stu[p];
		p = Stu[p].next;
	}
	sort(Stu2 + 1, Stu2 + cnt1 + 1, cmp);
	cout<<"ѧ������"<<cnt1<<endl;
	printf("ѧ��         ����   Ӣ��ɼ� ��ѧ�ɼ� ���㵼���������Ƴɼ�\n");
	for(int i = 1;i <= cnt1;i++) {
		cout<<Stu2[i].num<<" "<<Stu2[i].name;
		printf("%6d%10d%15d\n",Stu2[i].EngScore,Stu2[i].MathScore,Stu2[i].CSScore);
	}
	return ;
}

