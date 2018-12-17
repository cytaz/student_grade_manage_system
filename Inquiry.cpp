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
		if(strcmp(Stu[p].name,s) == 0)
			return p;
		p = Stu[p].next;
	}
	return -1;
}

int Inquiry(char ch, int x) {
	switch(ch - '0') {
		case 1: {
			printf("������ѧ��:");
			long long num; 
			scanf("%lld",&num);
			int i = Number_Inquiry(num);
			if(i == -1) {
				printf("δ�鵽��ѧ����Ϣ��\n");
				if(x == 2) Opt();
				return -1;
			}
			printf("ѧ��         ����   Ӣ��ɼ� ��ѧ�ɼ� ���㵼���������Ƴɼ�\n");
			cout<<Stu[i].num<<" "<<Stu[i].name;
			printf("%6d%10d%15d\n",Stu[i].EngScore,Stu[i].MathScore,Stu[i].CSScore);
			return i;
		}
		case 2: {
			printf("����������:");
			char s[100];
			cin>>s;
			int i = Name_Inquiry(s);
			if(i == -1) {
				printf("δ�鵽��ѧ����Ϣ��\n");
				if(x == 2) Opt();
				break;
			}
			printf("ѧ��         ����   Ӣ��ɼ� ��ѧ�ɼ� ���㵼���������Ƴɼ�\n");
			cout<<Stu[i].num<<" "<<Stu[i].name;
			printf("%6d%10d%15d\n",Stu[i].EngScore,Stu[i].MathScore,Stu[i].CSScore);
			return i;
		}
		case 0: {
			if(x == 2) Opt();
			return -1;
		}
		default: {
			printf("������Ч,���������룡\n");
			printf("����������Դ�ѡ���н���ѡ��\n");
			char ch;
			cin>>ch;
			Inquiry(ch, x);
		}
	}
}

void Inquiry() {
	printf("��ѡ�����Ĳ�ѯ��ʽ\n");
	Sleep(500);
	printf("1:��ѧ�Ų�ѯ\n");
	printf("2:�����ֲ�ѯ\n");
	printf("0:�˳���ѯ\n");
	printf("����������Դ�����ѡ���н���ѡ��\n");
	char ch;
	cin>>ch;
	Inquiry(ch, 1);
	printf("�Ƿ������ѯ(���N�˳�)\n");
	cin>>ch;
	if(ch != 'N') Inquiry();
	else Opt();
}
