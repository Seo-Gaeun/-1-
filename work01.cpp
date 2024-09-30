#include <iostream>
#include "work01.h"
using namespace std;

//더하기(+) 클래스 함수 구현부
void Add::setValue(int x, int y) { a = x; b = y; }
int Add::calculate() { return a + b; }

//빼기(-) 클래스 함수 구현부
void Sub::setValue(int x, int y) { a = x; b = y; }
int Sub::calculate() { return a - b; }

//곱하기(*) 클래스 함수 구현부
void Mul::setValue(int x, int y) { a = x; b = y; }
int Mul::calculate() { return a * b; }

//나누기(/) 클래스 함수 구현부
void Div::setValue(int x, int y) { a = x; b = y; }
int Div::calculate() { return a / b; }