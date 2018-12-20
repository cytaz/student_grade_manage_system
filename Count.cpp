#include "HeaderFile.h"
using namespace std;

bool cmp0(Students a, Students b);
bool cmp1(Students a, Students b);
bool cmp2(Students a, Students b);
bool cmp3(Students a, Students b);
bool cmp4(Students a, Students b);

void MathScore_Inquiry(Students *S, int num, int l, int r);
void EngScore_Inquiry(Students *S, int num, int l, int r);
void CSScore_Inquiry(Students *S, int num, int l, int r);

Students Stu2[MAX_SIZE];
void Count() {
	int cnt1 = 0;
	if (head == -1) return ;
	int p = head;
	while(p != -1) {
		Stu2[++cnt1] = Stu[p];
		p = Stu[p].next;
	}
	printf("��������?\n");
	printf("0:ѧ��\n");
	printf("1:����\n");
	printf("2:Ӣ��ɼ�\n");
	printf("3:��ѧ�ɼ�\n");
	printf("4:���㵼���������Ƴɼ�\n");
	int num;
	cin>>num;
	switch(num) {
		case 0:sort(Stu2 + 1, Stu2 + cnt1 + 1, cmp0);break;
		case 1:sort(Stu2 + 1, Stu2 + cnt1 + 1, cmp1);break;
		case 2:sort(Stu2 + 1, Stu2 + cnt1 + 1, cmp2);break;
		case 3:sort(Stu2 + 1, Stu2 + cnt1 + 1, cmp3);break;
		case 4:sort(Stu2 + 1, Stu2 + cnt1 + 1, cmp4);break;
		default:printf("�������󣬷���ѡ��˵�\n");return ;
	}
	if(num == 2 || num == 3 || num == 4) {
		int l, r;
		printf("������?(��l~r�ĸ�ʽ,l<r)\n");
		scanf("%d~%d",&l, &r);
		printf("ѧ��         ����   Ӣ��ɼ� ��ѧ�ɼ� ���㵼���������Ƴɼ�\n");
		switch(num) {
			case 2:MathScore_Inquiry(Stu2, cnt1, l, r);break;
			case 3:EngScore_Inquiry(Stu2, cnt1, l, r);break;
			case 4:CSScore_Inquiry(Stu2, cnt1, l, r);break;
		}
		return ;
	}
	cout<<"ѧ������"<<cnt1<<endl;
	printf("ѧ��         ����   Ӣ��ɼ� ��ѧ�ɼ� ���㵼���������Ƴɼ�\n");
	for(int i = 1;i <= cnt1;i++) {
		cout<<Stu2[i].num<<" "<<Stu2[i].name;
		printf("\t%d\t%d\t%d\n",Stu2[i].EngScore,Stu2[i].MathScore,Stu2[i].CSScore);
	}
	return ;
}

