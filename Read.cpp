#include "HeaderFile.h"
using namespace std;

long long Encode(long long num);

void Read() {
	fstream _file;
	_file.open("data\\info.txt",ios::in);
	_file>>cnt;
	for(int i = 1;i <= cnt;i++)
		_file>>Stu[i].num>>Stu[i].name>>Stu[i].EngScore>>Stu[i].MathScore>>Stu[i].CSScore;
	//cin>>ch;
	/*while((int)ch != 0) {
		if(ch != ' ')
			t = t * 10 + (ch - '0');
		cin>>ch;
	}*/
	for(int i = 1;i <= MAX_SIZE;i++)
		Stu[i].prev = Stu[i].next = -1;
	for(int i = 1;i <= cnt;i++) {
		Stu[i].prev = i - 1;
		Stu[i].next = i + 1;
		Is_Stu[Encode(Stu[i].num)] = true; 
	}
	Stu[1].prev = Stu[cnt].next = -1;
	head = 1, tail = tail1 = cnt;
	_file.close();
}

