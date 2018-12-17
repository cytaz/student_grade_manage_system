#include "HeaderFile.h"
using namespace std;

long long Encode(long long num) {
	long long t = 0;
	t = num % 10000;
	num /= 10000;
	t += (num % 100) * 10000;
	num /= 10000;
	t += (num % 100) * 1000000;
	return t;
}

bool JudgeStu(long long num) {
	num = Encode(num);
	return Is_Stu[num];
}
