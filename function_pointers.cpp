/*
�C���ܼƩM�}�C�����t�m�S�w���O�����m�A�禡�]���C
���{���ϥΨ禡���O�����m�N�@�Ө禡�ǤJ�t�@�Ө禡���A
�����A�ڭ̫ŧi�@�Ө禡�������ܼơA�ΨӦs��禡���O�����}�A �Ҧp
int (*ptr)(int,int);
���۴N�i�H��o�ӫ����ܼƫ��V�Ҧ��ۦP�ŧi�쫬���禡(�㦳���int��ƫ��O���ǻ��ѼƩMint�Ǧ^���O)�C
�Ҧp: int add(int a, int b);
*/
#include <iostream>
using namespace std;
int add(int, int);
int sub(int, int);
void main()
{
	int (*ptr)(int, int); // �ŧi�@�ӫ��V�禡������
	int a, b, c;
	cout << "��J���N���a�Mb:\n";
	cin >> a >> b;
	cout << "a = " << a << "\n" << "b = " << b << endl;

	ptr = add; // �Nptr���V�禡add
	c = (*ptr)(a, b); // �ϥ�ptr�ҫ��V���禡�Aptr���Vadd,�ҥH c = add(a,b);
	cout << "a + b = " << c << endl;

	ptr = sub; // �Nptr���V�禡sub
	c = (*ptr)(a, b); // �ϥ�ptr�ҫ��V���禡�Aptr���Vsub,�ҥH c = sub(a,b);
	// ptr���Vsub,�ҥHc=sub(a,b);
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

