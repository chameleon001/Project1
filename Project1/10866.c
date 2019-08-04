/*

������ �����ϴ� ��(Deque)�� ������ ����, �Է����� �־����� ����� ó���ϴ� ���α׷��� �ۼ��Ͻÿ�.

����� �� ���� �����̴�.

    push_front X: ���� X�� ���� �տ� �ִ´�.
    push_back X: ���� X�� ���� �ڿ� �ִ´�.
    pop_front: ���� ���� �տ� �ִ� ���� ����, �� ���� ����Ѵ�. ����, ���� ����ִ� ������ ���� ��쿡�� -1�� ����Ѵ�.
    pop_back: ���� ���� �ڿ� �ִ� ���� ����, �� ���� ����Ѵ�. ����, ���� ����ִ� ������ ���� ��쿡�� -1�� ����Ѵ�.
    size: ���� ����ִ� ������ ������ ����Ѵ�.
    empty: ���� ��������� 1��, �ƴϸ� 0�� ����Ѵ�.
    front: ���� ���� �տ� �ִ� ������ ����Ѵ�. ���� ���� ����ִ� ������ ���� ��쿡�� -1�� ����Ѵ�.
    back: ���� ���� �ڿ� �ִ� ������ ����Ѵ�. ���� ���� ����ִ� ������ ���� ��쿡�� -1�� ����Ѵ�.

�Է�

ù° �ٿ� �־����� ����� �� N (1 �� N �� 10,000)�� �־�����. �Ѥ� �ٺ��� N���� �ٿ��� ����� �ϳ��� �־�����. �־����� ������ 1���� ũ�ų� ����, 100,000���� �۰ų� ����. ������ �������� ���� ����� �־����� ���� ����.
���

����ؾ��ϴ� ����� �־��� ������, �� �ٿ� �ϳ��� ����Ѵ�.
���� �Է�

15
push_back 1
push_front 2
front
back
size
empty
pop_front
pop_back
pop_front
size
empty
pop_back
push_front 3
empty
front

���� ���

2
1
2
0
2
1
-1
0
1
-1
0
3
*/

#include <iostream>
#include <cstdio>
#include <deque>
#include <string>
 
using namespace std;
 
int main()
{
    int n;
    deque<int> dq;
 
    cin >> n;
 
 
    while (n--)
    {
        string str;
        int val;
        cin >> str;
 
        // push_back���ڸ� ã�� ���
        if (str.find("push_back") == 0)
        {
            cin >> val;
            dq.push_back(val);
        }
 
        // push_front���ڸ� ã�� ���
        else if (str.find("push_front") == 0)
        {
            cin >> val;
            dq.push_front(val);
        }
 
        else if (str.find("pop_back") == 0)
        {
            if (dq.empty() == 1)
                cout << "-1" << endl;
            else
            {
                cout << dq.back() << endl;
                dq.pop_back();
            }
        }
 
        else if (str.find("pop_front") == 0)
        {
            if (dq.empty() == 1)
                cout << "-1" << endl;
            else
            {
                cout << dq.front() << endl;
                dq.pop_front();
            }
        }
 
        else if (str.find("front") == 0)
        {
            if (dq.empty() == 1)
                cout << "-1" << endl;
            else
                cout << dq.front() << endl;
        }
 
        else if (str.find("back") == 0)
        {
            if (dq.empty() == 1)
                cout << "-1" << endl;
            else
                cout << dq.back() << endl;
        }
 
        else if (str.find("size") == 0)
            cout << dq.size() << endl;
 
        else if (str.find("empty") == 0)
            cout << dq.empty() << endl;
    }
}
