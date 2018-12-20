#include <string>
#include <cstring> 
using namespace std;
#define MAX_SIZE 100000
struct Students {
	long long num;
	char name[100];
	int EngScore;
	int MathScore;
	int CSScore;
	int prev,next;
	
	Students operator = (const Students a) {
		this->num = a.num;
		//this->name = a.name;
		this->MathScore = a.MathScore;
		this->EngScore = a.EngScore;
		this->CSScore = a.CSScore;
		this->prev = a.prev;
		this->next = a.next;
		
		memset(this->name,0,sizeof(this->name));
		int len = strlen(a.name);
		for(int i = 0;i < len;i++)
			this->name[i] = a.name[i];
	}
};

extern int cnt;
extern Students Stu[100000];
extern bool Is_Stu[100000000];
extern int head, tail, tail1;
extern int TF;

