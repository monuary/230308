#include<iostream>
using namespace std;

class SoSimple
{
public:
	static int simObjCnt;	//static은 클래스 안에 안주하지 않고 영향을 미치기 위한 문법이므로 public에서 선언하는 경우가 많다. 물론 private에서 선언해도 문제없다.
	SoSimple() { simObjCnt++; }
};
int SoSimple::simObjCnt = 0;

int main()
{
	cout << SoSimple::simObjCnt << "번째 SoSimple 객체" << endl;
	SoSimple sim1;
	SoSimple sim2;

	cout << SoSimple::simObjCnt << "번째 SoSimple 객체" << endl;
	cout << sim1.simObjCnt << "번째 SoSimple 객체" << endl;
	cout << sim2.simObjCnt << "번째 SoSimple 객체" << endl;
	return 0;
}