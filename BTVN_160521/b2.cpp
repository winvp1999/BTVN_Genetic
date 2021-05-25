//Bai 2. Viet chuong trinh yeu cau nguoi dung nhap ten cua ho,
//  roi in ket qua ra tren man hinh
#include <iostream>
using namespace std;
void b2()
{
    string Name;
       
    //Input
    cout << "Nhap vao ho ten cua ban : ";
    getline(cin, Name);

    //Output
    cout << "\nHo va ten : " << Name;

}
int main()
{
    system("cls");
    fflush(stdin);

    b2();

    return 1;
}
