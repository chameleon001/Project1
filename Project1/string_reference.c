#include <iostream>
#include <string>
 
using namespace std;
 
int main()
{
    /*
        String�� ���� �����ϼ̴� �е��� ctrl + f�� ����
        �˻��� �Ͻø� ���� ���ϰ� �Լ� ��ɿ� ���� ���ø�
        ã�� �� �ֽ��ϴ�.
    */
 
    // ����� ���ÿ� ���� ����
    cout << "string a = \"hello\"" << endl;
    string a = "hello";
    cout << a << endl <<  endl;
    
    // ���� �� ���� ����
    // ���⼭ b = "~"�̷��� �ϸ� �ʱ�ȭ�̰�, b += "~"�̷��� �ϸ� �߰� �����̴�.
    cout << "string b; b = \"world\"" << endl;
    string b;
    b = "world";
    cout << b << endl << endl;
 
    cout << "b += \"you are in Crocus now\"" << endl;
    b += "  you are in Crocus now";
    cout << b << endl << endl;
 
    // �߰� ���� ��� (2) << �� ����� += ���� �ӵ��鿡�� �� ������. >>
    b.append(" Good Bye !");
    cout << "b.append(\" Good Bye !\");" << endl << endl;
    cout << b << endl << endl;
 
 
    // �� ��Ʈ�� ��ġ��
    cout << "string c = a + b;" << endl;
    string c = a + b;
    cout << c << endl << endl;
 
 
    // ��Ʈ�� �ʱ�ȭ ��Ű��
    cout << "c.assign(10,1);" << endl;
    c.assign(10, '1');
    cout << c << endl << endl;
 
    // ��Ʈ�� ����
    cout << "c.clear();" << endl;
    c.clear();
    cout << "String c �� ���� :: " << c << endl << endl;
 
    // ��Ʈ������ ���ڿ� ã��
    cout << "b.find(\"Crocus\")" << endl;
    cout << b.find("Crocus") << "��°���� Crocus�� C�� �����մϴ�. " << endl << endl;
 
    // ��Ʈ������ Ư�� �κ� �����
    // erase(������, ���������� � �����ͳ�?);
    // ������� b.erase(2,3)�̸� b[2] ~ b[4] ���� �����.
    cout << "������ ��� :: " << b[2] << b[3] << b[4]<< endl << endl;
    b.erase(2, 3);
    cout << "������ �� :: " <<  b << endl << endl;
 
    // a ��Ʈ�� ���� ���ϱ�
    cout << "a.length() :: " << a.length() << endl << endl;
 
    // a�� b ���ڿ� ���� �ٲٱ�
    cout << "swap(b,a);" << endl;
    swap(b, a);
    cout << "b :: " + b + "  a :: " + a << endl << endl;
 
    // �κ� ���ڿ� ����
    // substr(a,b)�� �����ϸ� a���ͽ����ؼ� b������ �����ش�.
    // ���ø� ���� 0,3�� d[0], d[1], d[2]�� �����ش�.
    cout << "string d = b.substr(0,2);" << endl;
    string d = b.substr(0, 3);
    cout << d << endl << endl;
 
    return 0;
}
//http://www.crocus.co.kr/503
