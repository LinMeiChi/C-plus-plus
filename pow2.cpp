// 2����g�k
//��k1:
#include <iostream>
using namespace std;
long  powerof2(int value);   //�ŧi�禡�쫬�A�ǤJint�ѼơA�Ǧ^�ȸ�ƫ��O�Olong
void main()
{
    int p;
    for (int k = 0; k < 20; k++)
    {
        p = powerof2(k); //�I�s�禡�A�ǤJ���k�A�N�Ǧ^�ȫ��w��sq�ܼ�
        cout << k << "\t" << p << endl;
    }
}
long powerof2(int value)
{
    //�p��2N = 2*2*2*......*2(N��2)
    //��28 = 2 * 2 * 2 * 2 * 2 * 2 * 2 * 2 = 256   
    long seed = 1; //�]�w�s������l��
    for (int t = 0; t < value; t++)
    {
        seed = seed * 2;   //���N�s��
    }
    return seed;
}



/*
//��k2:
#include<ctime>
int main()
{
    int sum = 1;
    srand(time(NULL));
    int k = rand()%(30-1+1)+1;
    for (int i = 0; i <= k; i++)
    {
        
        int i_value = pow(2, i);    //pow(��,�X����)
        cout << i << '\t' << i_value << endl;
    }
}
*/