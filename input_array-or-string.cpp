#include <iostream>
#include <cstring> 
using namespace std;
int getSize(char* ptr);
void main()
{
	int nLen;
	char str1[50];      //  �rt�����
	cout << "�п�J�@�q�r��: ";
	
	//cin >> str1;
	/*
	cin ���|�N����r�� �ť� tab�� Ū�J �o�Ǫťճ��O���ӧ@���r�굲��,
	�ϥ� cin.get(�r��, �̤j����); �M cin.get(str1, 50); �ѨM
	 get �M getline �t��: get�|�O�d����Ÿ��Agetline���|
	https://www.itread01.com/content/1542222967.html */
	//cin.get(str1, 50);
	cin.getline(str1, 50);
	char *str = str1;
	nLen = getSize(str);             // �Ǧ^����
	cout << str1 << "��" << nLen << "�Ӧr��\n";

	/*
	sizeof(�}�C�W) ���ȬO�o�Ӱ}�C�Ҧ��ڪ��O���骺�j�p�A���O�줸��;
	�}�C����=sizeof(arr)/sizeof(char)
	*/
	int length = sizeof(str1)/sizeof(*str1);        //��ܦ�1
	//length = sizeof(array)/sizeof(array[0]);        //��ܦ�2
	//length = sizeof(array)/sizeof(int);             //��ܦ�3
	cout << length;
}
int getSize(char* ptr)
{
	int i = 0;
	while (ptr[i] != '\0')	// \0���h�X�r���A�N��NULL�C
	{
		i++;
	}
	return i;
}

	
/* 
	��ƫ��A��string�A�i�ϥ�getline(cin, str);��J�t�Ů檺�r��C
	str.size()�Mstr.length()���i�Ψӭp��r����סC
	string str;
	getline(cin, str);
	cout << str << '\t' << str.size() << endl;
	cout << str << '\t' << str.length();
*/