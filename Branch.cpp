#include "HeaderFile.h"
using namespace std;

int Inquiry(char &ch, int x);
void Inquiry();
void Opt();
void Load();
void Revise(int num);
void Add();
void Delete(int num);
void Count();
void Test();
void Read();
void Write();
long long Encode(long long num);

void Branch(int num) {
	switch(num) {
		case 1:{ Inquiry();break; }
		case 2:{ Load();break; }
		case 3:{
			printf("��ѡ��:\n");
			printf("1:��ѧ�Ų�ѯ�޸�\n");
			printf("2:�����ֲ�ѯ�޸�\n");
			printf("0:�˳��޸ĳ���\n");
			printf("����������Դ�����ѡ���н���ѡ��\n");
			char ch;
			cin>>ch;
			int num;
			num = Inquiry(ch, 2);
			if(num != -1) {
				Revise(num);
				Opt();
			}
			break;
		}
		case 4:{ Add();break; }
		case 5:{
			printf("��ѡ��:\n");
			printf("1:��ѧ�Ų�ѯɾ��\n");
			printf("2:�����ֲ�ѯɾ��\n");
			printf("0:�˳�ɾ������\n");
			printf("����������Դ�����ѡ���н���ѡ��\n");
			char ch;
			cin>>ch;
			int num;
			num = Inquiry(ch, 2);
			if(num != -1) {
				Delete(num);
				Is_Stu[Encode(Stu[num].num)] = false;
				printf("ɾ���ɹ�\n");
			}
			Opt();
			break;
		}
		case 6:{ Count();Opt();break; }
		//case 7:{}
		//case 8:{}
		case 9:{
			fstream _file;
			_file.open("readme.txt",ios::in);
			char ch;
			while(_file.get(ch)) {
				if(ch == '~') {
					printf("��鿴�汾������־��(Y/N)��\n");
					bool opt;
					while(true) {
						cin>>ch;
						if(ch == 'Y') { opt = true;break; }
						else if(ch == 'N') { opt = false;break; }
						printf("������Ч,���������룡\n");
					}
					if(opt) continue;
					else break;
				}
				cout<<ch;
			}
			Opt();
			break;
		}
		case 0:{
			//printf("���Եȣ�ϵͳ�ڽ������Ĳ���\n"); 
			Write();
			printf("��л��ʹ�ñ�ϵͳ���ټ�!");
			Sleep(1000);
			break;
		}
		case('S' - '0'):{
			printf("�������ģʽ\n");
			//Read();
			Test();
			break;
		}
		default: {
			printf("������Ч,���������룡\n");
			char s;
			cin>>s;
			Branch(s - '0');
		}
	}
}

