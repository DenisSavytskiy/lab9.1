//////////////////////////////////////////////////////////////////////////////
// sum.cpp
// ���� ��������� �������
#include <math.h>
#define M_PI 3.14159265358979323846
#include "dod.h"
#include "sum.h"
#include "var.h" // ��������� ������ ���������� ������
using namespace nsDod;
using namespace nsVar;

void nsSum::sum() {
	n = 0;
	a = -x;
	s = (x < 0) ? -x - (M_PI / 2) : -x + (M_PI / 2);
	do {
		n++;
		dod();
		s += a;
	} while (fabs(a) >= eps);
}
