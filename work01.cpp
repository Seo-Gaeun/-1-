#include <iostream>
using namespace std;

//���ϱ�(+) Ŭ����
class Add {
private:
    int a, b;
public:
    void setValue(int x, int y);
    int calculate();
};
//���ϱ�(+) Ŭ���� �Լ� ������
void Add::setValue(int x, int y) { a = x; b = y; }
int Add::calculate() { return a + b; }
//����(-) Ŭ����
class Sub {
private:
    int a, b;
public:
    void setValue(int x, int y);
    int calculate();
};
//����(-) Ŭ���� �Լ� ������
void Sub::setValue(int x, int y) { a = x; b = y; }
int Sub::calculate() { return a - b; }
//���ϱ�(*) Ŭ����
class Mul {
private:
    int a, b;
public:
    void setValue(int x, int y);
    int calculate();
};
//���ϱ�(*) Ŭ���� �Լ� ������
void Mul::setValue(int x, int y) { a = x; b = y; }
int Mul::calculate() { return a * b; }
//������(/) Ŭ����
class Div {
private:
    int a, b;
public:
    void setValue(int x, int y);
    int calculate();
};
//������(/) Ŭ���� �Լ� ������
void Div::setValue(int x, int y) { a = x; b = y; }
int Div::calculate() { return a / b; }

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

    return 0;
} //���� �Լ� ����