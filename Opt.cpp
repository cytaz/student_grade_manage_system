#include "HeaderFile.h"
using namespace std;
void Branch(int num);
void Opt() {
	printf("�������,����ѡ��˵�\n");
	Sleep(1000);
	printf("����������Դ�ѡ���н���ѡ��\n");
	char s;
	cin>>s;
	Branch(s - '0');
}
