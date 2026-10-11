#include<iostream>
using namespace std;
int main()
{
	double a, b, c;
	
	cout << "回车以开始并输入下一数字：";
	cin.get();
	cout << "请输入三个正数：" << endl;
	cout << "a=";
	cin >> a;
	cout << "b=";
	cin >> b;
	cout << "c=";
	cin >> c;
	/*以下是通过if-else嵌套实现大小比较*/
	double M;
	if (a >= b) {
		if (a >= c)M = a;
		else M = c;
	}
	else {
		if (b >= c)M = b;
		else M = c;
	}
	cout << "最大值为：";
	cout << M << endl;
	cin.get();
		cout << "按任意键关闭";
	return 0;
}