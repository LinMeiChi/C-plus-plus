#include <iostream>
using namespace std;
// �d�߸�ƫ��A: typeid(�ܼƦW��).name()
int main() {
    int a;//�ŧi�ܼ�
    int k = 1;
    while (k) {
        cout << "�п�J�@�Ӿ��: ";
        cin >> a;//��Ja����
        cout << "�Q�i��" << dec <<a << endl;
        cout << "�K�i��" << oct << a << endl;
        cout << "�Q���i��" << hex << a << endl;
        cout << "---------------------------------\n";
        cout<< "�O�_�A�ഫ�@��?(�O,�п�J1�F�_,�п�J0)";
        cin >> k;
    }
    
    return 0;
}