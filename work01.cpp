#include <iostream>
#include "work01.h"
using namespace std;

//���ϱ�(+) Ŭ���� �Լ� ������
void Add::setValue(int x, int y) { a = x; b = y; }
int Add::calculate() { return a + b; }

//����(-) Ŭ���� �Լ� ������
void Sub::setValue(int x, int y) { a = x; b = y; }
int Sub::calculate() { return a - b; }

//���ϱ�(*) Ŭ���� �Լ� ������
void Mul::setValue(int x, int y) { a = x; b = y; }
int Mul::calculate() { return a * b; }

//������(/) Ŭ���� �Լ� ������
void Div::setValue(int x, int y) { a = x; b = y; }
int Div::calculate() { return a / b; }