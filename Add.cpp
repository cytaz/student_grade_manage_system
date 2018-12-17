#include "HeaderFile.h"
using namespace std;

long long Encode(long long tail1);

void Add(Students S) {
	Is_Stu[Encode(S.num)] = true;
	/*if(head == -1) {
		head = tail = 1;
		//if(tail1 == 0) tail1 = 0;
		Stu[++tail1] = S;
		Stu[tail1].prev = -1;
		Stu[tail1].next = -1;
		return ;
	}
	int p = head;
	while(true) {
		if(S.num < Stu[p].num) {
			if(p != head) {
				Stu[Stu[p].prev].next = ++tail1;
				Stu[tail1].prev = Stu[p].prev;
				Stu[p].prev = tail1;
				Stu[tail1].next = p;
			}
			else {
				Stu[++tail1].prev = -1;
				Stu[p].prev = tail1;
				Stu[tail].next = p;
				head = tail1;
			}
			Stu[tail1] = S;
			break;
		}
		else if(p == tail) {
			Stu[p].next = ++tail1;
			Stu[tail1].prev = p;
			Stu[tail1].next = -1;
			Stu[tail1] = S;
			tail = tail1;
			break;
		}
		p = Stu[p].next;
	}*/
	tail1++;
	Stu[tail].next = tail1;
	Stu[tail1] = S;
	Stu[tail1].prev = tail;
	Stu[tail1].next = -1;
	tail = tail1;
}

void Add() {
	
	return ;
}
