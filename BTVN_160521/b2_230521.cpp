//Bai 2. Giai phuong trinh bac 2 ax^2 + bx + c = 0
#include <iostream>
#include <string>
#include <math.h>
using namespace std;
#define string(num) #num

void b2()
{
    system("cls");
    float HeSoBacHai, HeSoBacMot, HeSoTuDo;
    //Input
    cout << "Nhap vao he so bac hai\t: ";
    cin >> HeSoBacHai;
    cout << "Nhap vao he so bac mot\t: ";
    cin >> HeSoBacMot;
    cout << "Nhap vao he so tu do\t: ";
    cin >> HeSoTuDo;

    //Output
    float Delta = HeSoBacMot * HeSoBacMot - 4 * HeSoBacHai * HeSoTuDo;
    if (Delta > 0)
    {
        cout << "\nPhuong trinh co hai nghiem"
            << "\nNghiem thu nhat x1 = " 
            << (-HeSoBacMot - sqrt(Delta)) / 2 * HeSoBacHai
            << "\nNghiem thu nhat x1 = " 
            << (-HeSoBacMot + sqrt(Delta)) / 2 * HeSoBacHai;
    }
    else if (Delta == 0)
    {
        cout << "\nPhuong trinh co mot nghiem kep"
            << "\nNghiem x1 = x2 = " << -HeSoBacMot / 2 * HeSoBacMot;
    }
    else cout << "\nPhuong trinh vo nghiem";
}

int main()
{
    b2();

    return 1;
}
