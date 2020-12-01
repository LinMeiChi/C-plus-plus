/*
每個變數和陣列都有配置特定的記憶體位置，函式也有。
此程式使用函式的記憶體位置將一個函式傳入另一個函式中，
首先，我們宣告一個函式的指標變數，用來存放函式的記憶體位址， 例如
int (*ptr)(int,int);
接著就可以把這個指標變數指向所有相同宣告原型的函式(具有兩個int資料型別的傳遞參數和int傳回型別)。
例如: int add(int a, int b);
*/
#include <iostream>
using namespace std;
int add(int, int);
int sub(int, int);
void main()
{
	int (*ptr)(int, int); // 宣告一個指向函式的指標
	int a, b, c;
	cout << "輸入任意整數a和b:\n";
	cin >> a >> b;
	cout << "a = " << a << "\n" << "b = " << b << endl;

	ptr = add; // 將ptr指向函式add
	c = (*ptr)(a, b); // 使用ptr所指向的函式，ptr指向add,所以 c = add(a,b);
	cout << "a + b = " << c << endl;

	ptr = sub; // 將ptr指向函式sub
	c = (*ptr)(a, b); // 使用ptr所指向的函式，ptr指向sub,所以 c = sub(a,b);
	// ptr指向sub,所以c=sub(a,b);
	cout << "a - b = " << c << endl;
}

int add(int a, int b)
{
	return (a + b);
}

int sub(int a, int b)
{
	return (a - b);
}

