#include<iostream>
using namespace std;

class SoSimple
{
public:
	static int simObjCnt;	//static�� Ŭ���� �ȿ� �������� �ʰ� ������ ��ġ�� ���� �����̹Ƿ� public���� �����ϴ� ��찡 ����. ���� private���� �����ص� ��������.
	SoSimple() { simObjCnt++; }
};
int SoSimple::simObjCnt = 0;

int main()
{
	cout << SoSimple::simObjCnt << "��° SoSimple ��ü" << endl;
	SoSimple sim1;
	SoSimple sim2;

	cout << SoSimple::simObjCnt << "��° SoSimple ��ü" << endl;
	cout << sim1.simObjCnt << "��° SoSimple ��ü" << endl;
	cout << sim2.simObjCnt << "��° SoSimple ��ü" << endl;
	return 0;
}