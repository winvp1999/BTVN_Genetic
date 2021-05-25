//Bai 7. Viet chuong trinh de nhap diem kiem tra, diem thi giua ky,
//  diem thi cuoi ky, sau do tinh tong diem va in ket qua ra man hinh
#include <iostream>
using namespace std;
void b7()
{
    float Point_1, Point_2, Point_3, MidPoint, FinalPoint;
    //Input
    cout << "Nhap vao diem kiem tra lan thu nhat\t: ";
    cin >> Point_1;
    cout << "Nhap vao diem kiem tra lan thu hai\t: ";
    cin >> Point_2;
    cout << "Nhap vao diem kiem tra lan thu ba\t: ";
    cin >> Point_3;
    cout << "Nhap vao diem kiem tra giua ky\t\t: ";
    cin >> MidPoint;
    cout << "Nhap vao diem kiem tra cuoi ky\t\t: ";
    cin >> FinalPoint;

    float s = Point_1 + Point_2 + Point_3 + MidPoint + FinalPoint;

    //Output
    cout << "\nTong diem kiem tra\t: " << s
        << "\nDiem trung binh\t\t: " << s / 5;
}
int main()
{
    system("cls");
    fflush(stdin);

    b7();

    return 1;
}