#include <iostream>
using namespace std;

//더하기(+) 클래스
class Add {
private:
    int a, b;
public:
    void setValue(int x, int y);
    int calculate();
};
//더하기(+) 클래스 함수 구현부
void Add::setValue(int x, int y) { a = x; b = y; }
int Add::calculate() { return a + b; }
//빼기(-) 클래스
class Sub {
private:
    int a, b;
public:
    void setValue(int x, int y);
    int calculate();
};
//빼기(-) 클래스 함수 구현부
void Sub::setValue(int x, int y) { a = x; b = y; }
int Sub::calculate() { return a - b; }
//곱하기(*) 클래스
class Mul {
private:
    int a, b;
public:
    void setValue(int x, int y);
    int calculate();
};
//곱하기(*) 클래스 함수 구현부
void Mul::setValue(int x, int y) { a = x; b = y; }
int Mul::calculate() { return a * b; }
//나누기(/) 클래스
class Div {
private:
    int a, b;
public:
    void setValue(int x, int y);
    int calculate();
};
//나누기(/) 클래스 함수 구현부
void Div::setValue(int x, int y) { a = x; b = y; }
int Div::calculate() { return a / b; }

//메인 함수
int main() {
    Add a; //더하기 객체
    Sub s; //빼기 객체
    Mul m; //곱하기 객체
    Div d; //나누기 객체

    int x, y;
    char c;

    while (true) {
        cout << "두 정수와 연산자를 입력하세요>> ";
        cin >> x >> y >> c;

        if (c == '+') {
            a.setValue(x, y);
            cout << a.calculate() << endl;
        }

        else if (c == '-') {
            s.setValue(x, y);
            cout << s.calculate() << endl;
        }

        else if (c == '*') {
            m.setValue(x, y);
            cout << m.calculate() << endl;
        }

        else if (c == '/') {
            d.setValue(x, y);
            cout << d.calculate() << endl;
        }

        else break;
    }

    return 0;
} //메인 함수 종료