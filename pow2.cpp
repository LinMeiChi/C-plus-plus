// 2次方寫法
//方法1:
#include <iostream>
using namespace std;
long  powerof2(int value);   //宣告函式原型，傳入int參數，傳回值資料型別是long
void main()
{
    int p;
    for (int k = 0; k < 20; k++)
    {
        p = powerof2(k); //呼叫函式，傳入整數k，將傳回值指定給sq變數
        cout << k << "\t" << p << endl;
    }
}
long powerof2(int value)
{
    //計算2N = 2*2*2*......*2(N個2)
    //例28 = 2 * 2 * 2 * 2 * 2 * 2 * 2 * 2 = 256   
    long seed = 1; //設定連乘的初始值
    for (int t = 0; t < value; t++)
    {
        seed = seed * 2;   //迭代連乘
    }
    return seed;
}



/*
//方法2:
#include<ctime>
int main()
{
    int sum = 1;
    srand(time(NULL));
    int k = rand()%(30-1+1)+1;
    for (int i = 0; i <= k; i++)
    {
        
        int i_value = pow(2, i);    //pow(底,幾次方)
        cout << i << '\t' << i_value << endl;
    }
}
*/