#include "HeaderFile.h"
using namespace std;

void Read();
void Swap(int a, int b);
long long Encode(long long num);

void Test() {
	char ch;
	FILE *fp=freopen("data\\info.txt","r",stdin);
	//rewind(stdin);
	int n;
	cin>>n;
	cout<<n<<endl;
	freopen("CON","r",stdin);
	//rewind(stdin);
	cin>>n;
	cout<<n<<endl;
	while(1);
	cout<<Encode(201800130038L)<<endl;
	cout<<cnt<<endl;
	cout<<Stu[1].num<<endl;
	swap(Stu[1], Stu[2]);
	cout<<Stu[1].name<<endl;
	//while(1);
}
