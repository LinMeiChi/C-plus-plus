#include <iostream>
using namespace std;
// 查詢資料型態: typeid(變數名稱).name()
int main() {
    int a;//宣告變數
    int k = 1;
    while (k) {
        cout << "請輸入一個整數: ";
        cin >> a;//輸入a的值
        cout << "十進位" << dec <<a << endl;
        cout << "八進位" << oct << a << endl;
        cout << "十六進位" << hex << a << endl;
        cout << "---------------------------------\n";
        cout<< "是否再轉換一次?(是,請輸入1；否,請輸入0)";
        cin >> k;
    }
    
    return 0;
}