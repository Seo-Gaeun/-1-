#include <iostream>
#include "work01.h"
using namespace std;

//���� �Լ�
int main() {
    Add a; //���ϱ� ��ü
    Sub s; //���� ��ü
    Mul m; //���ϱ� ��ü
    Div d; //������ ��ü

    int x, y;
    char c;

    while (true) {
        cout << "�� ������ �����ڸ� �Է��ϼ���>> ";
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

    return 0; //���� �Լ� ����
}