#include "dod.h"
#include "var.h" // ��������� ������ ���������� ������
#include <cmath>
using namespace nsVar;
void nsDod::dod() {
	a *= ((1. - 2 * n) / ((2 * n + 1) * pow(x, 2)));
} // ���������� ������������