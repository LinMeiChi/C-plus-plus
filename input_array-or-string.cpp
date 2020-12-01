#include <iostream>
#include <cstring> 
using namespace std;
int getSize(char* ptr);
void main()
{
	int nLen;
	char str1[50];      //  字t串指標
	cout << "請輸入一段字串: ";
	
	//cin >> str1;
	/*
	cin 不會將換行字元 空白 tab鍵 讀入 這些空白都是拿來作為字串結束,
	使用 cin.get(字串, 最大長度); 和 cin.get(str1, 50); 解決
	 get 和 getline 差異: get會保留換行符號，getline不會
	https://www.itread01.com/content/1542222967.html */
	//cin.get(str1, 50);
	cin.getline(str1, 50);
	char *str = str1;
	nLen = getSize(str);             // 傳回長度
	cout << str1 << "有" << nLen << "個字元\n";

	/*
	sizeof(陣列名) 的值是這個陣列所佔據的記憶體的大小，單位是位元組;
	陣列長度=sizeof(arr)/sizeof(char)
	*/
	int length = sizeof(str1)/sizeof(*str1);        //表示式1
	//length = sizeof(array)/sizeof(array[0]);        //表示式2
	//length = sizeof(array)/sizeof(int);             //表示式3
	cout << length;
}
int getSize(char* ptr)
{
	int i = 0;
	while (ptr[i] != '\0')	// \0為逸出字元，代表NULL。
	{
		i++;
	}
	return i;
}

	
/* 
	資料型態為string，可使用getline(cin, str);輸入含空格的字串。
	str.size()和str.length()均可用來計算字串長度。
	string str;
	getline(cin, str);
	cout << str << '\t' << str.size() << endl;
	cout << str << '\t' << str.length();
*/