#include "HeaderFile.h"
using namespace std;

void Read();
void Branch(int num);
void Welcome() {
	printf("��ӭ����ѧ���ɼ�����ϵͳ������\n");
	Sleep(500);
	printf("����������Դ�����ѡ���н���ѡ��(������ѡ�������Ƕ�ֻ��ʶ��������ĵ�һ���ַ�)��\n");
	printf("1:��ѯ������Ϣ\n");
	printf("2:�ɼ�¼��\n");
	printf("3:�ɼ��޸�\n");
	//printf("4:�ɼ����\n");
	printf("5:�ɼ�ɾ��\n");
	printf("6:ͳ��\n");
	//printf("7:\n");
	//printf("8:\n");
	printf("9:����\n");
	printf("0:�˳�����\n");
	
	Read();
	char s;
	cin>>s;
	Branch(s - '0');
	return ;
}
