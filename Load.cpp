#include "HeaderFile.h"
using namespace std;

void Add(Students S);
void Opt();
bool JudgeStu(long long sum);

int cnt1;
void Load() {
	printf("����������¼��ѧ��������:");
	scanf("%d",&cnt1);
	printf("�밴�����¸�ʽ����¼�루ÿ�������������ո�:\n");
	printf("ѧ��         ����   Ӣ��ɼ� ��ѧ�ɼ� ���㵼���������Ƴɼ�\n");
	printf("201800130001 ������ 100      100      100\n");
	printf("201800130002 ����   99       99       99\n");
	Students S;
	int Error = 0;
	for(int i = 1;i <= cnt1;i++) {
		cin>>S.num>>S.name>>S.EngScore>>S.MathScore>>S.CSScore;
		//cout<<S.num<<" "<<S.name;
		//printf("%6d%10d%15d\n",S.EngScore,S.MathScore,S.CSScore);
		if(!JudgeStu(S.num)) Add(S);
		else Error++; 
	}
	printf("�ɹ�:%d,ʧ��:%d\n",cnt1 - Error, Error);
	Opt();
	return ;
}
