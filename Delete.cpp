#include "HeaderFile.h"
using namespace std;

bool JudgeStu(long long num);

void Delete(int num) {
	/*if(num == -1) {
		printf("未找到该学生");
		return ; 
	}*/
	if(num == head) {
		head = Stu[num].next;
		Stu[Stu[num].next].prev = -1;
	}
	else if(num == tail) {
		tail = Stu[num].prev;
		Stu[Stu[num].prev].next = -1;
	}
	else {
		Stu[Stu[num].prev].next = Stu[num].next;
		Stu[Stu[num].prev].next = Stu[num].next;
	}
	Stu[num].prev = Stu[num].next = -1;
	return ;
}
