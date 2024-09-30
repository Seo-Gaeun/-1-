#include <iostream>
#include "work01.h"
using namespace std;

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

    return 0; //메인 함수 종료
}