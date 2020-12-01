#include <iostream>
# include<string>
# include<cmath>
using namespace std;
int main()
{
	double a;
	cout << "請輸入一個浮點數: " << endl;
	cin >> a;
	cout << "a = " << a << endl;
	cout << "大於a的最小整數 = " << ceil(a) << endl;
	cout << "小於a的最大整數 = " << floor(a) << endl;
	cout << "四捨五入 = " << round(a) << endl;
	cout << "絕對值 = " << fabs(a) << endl;
	cout << "---------------------------------------------"  << endl;
	int x,y;
	cout << "請輸入兩個整數: " << endl;
	cin >> x >> y;
	cout << "指數 = " << exp(y) << endl;
	cout << "對數 = " << log(y) << endl;
	cout << "次方 = " << pow(x,y) << endl;
	cout << "開根號 = " << sqrt(y) << endl;
	cout << "餘數 = " << fmod(y,x) << endl;
	cout << "---------------------------------------------" << endl;
	cout << "正弦函數 = " << sin(a) << endl;
	cout << "反正弦函數 = " << asin(a) << endl;
	cout << "餘弦函數 = " << cos(a) << endl;
	cout << "反餘弦函數 = " << acos(a) << endl;
	cout << "正切函數 = " << tan(a) << endl;
	cout << "反正切函數 = " << atan(a) << endl;
	cout << "---------------------------------------------" << endl;
	char s1[100] = { 'H','i','\0' }, s2[] = "Maggie!", s3[20] = "Nice to meet you.";
	char str[60];
	cout << "s1 = " << s1 << endl;
	cout << "s2 = " << s2 << endl;
	//複製
	strcpy(str, s3);
	cout << "將s3複製到str: " << str << endl;
	strncpy(s1, s2, 2);
	cout << "將s2後2個字元複製到s1: " << s1 << endl;
	//串接
	strcat(s1, s2);
	cout << "將s1與s2串接: " << s1 << endl;
	cout << "將s1與s2串接: " << s1 << endl;
	//大寫轉小寫
	strlwr(s3);
	cout << "將大寫轉成小寫: " << s3 << endl;
	//小寫轉大寫
	strupr(s1);
	cout << "將大寫轉成小寫: " << s1 << endl;
}

