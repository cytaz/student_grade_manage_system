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
			printf("请选择:\n");
			printf("1:按学号查询修改\n");
			printf("2:按名字查询修改\n");
			printf("0:退出修改程序\n");
			printf("请键入数字以从上述选项中进行选择：\n");
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
			printf("请选择:\n");
			printf("1:按学号查询删除\n");
			printf("2:按名字查询删除\n");
			printf("0:退出删除程序\n");
			printf("请键入数字以从上述选项中进行选择：\n");
			char ch;
			cin>>ch;
			int num;
			num = Inquiry(ch, 2);
			if(num != -1) {
				Delete(num);
				Is_Stu[Encode(Stu[num].num)] = false;
				printf("删除成功\n");
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
					printf("想查看版本迭代日志吗(Y/N)？\n");
					bool opt;
					while(true) {
						cin>>ch;
						if(ch == 'Y') { opt = true;break; }
						else if(ch == 'N') { opt = false;break; }
						printf("输入无效,请重新输入！\n");
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
			//printf("请稍等，系统在进行最后的操作\n"); 
			Write();
			printf("感谢您使用本系统，再见!");
			Sleep(1000);
			break;
		}
		case('S' - '0'):{
			printf("进入测试模式\n");
			//Read();
			Test();
			break;
		}
		default: {
			printf("输入无效,请重新输入！\n");
			char s;
			cin>>s;
			Branch(s - '0');
		}
	}
}

