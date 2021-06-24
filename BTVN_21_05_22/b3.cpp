//Bai 3. Tu ket qua cua bai tap 2:
//  Phan loai hoc sinh dua tren ket qua hoc tap. Neu diem A thi phan loai 
//  la hoc sinh Xuat sac, diem B la hoc sinh gioi, diem C la hoc sinh loai
//  kha, diem D la hoc sinh loai trung binh, diem F la hoc sinh loai yeu.
//      (Su dung switch-case)
#include <iomanip>
#include <iostream>
#include <fstream>
using namespace std;


void b3()
{
    char XepHang;

    //Input
    ifstream FileDuLieu("KetQuaBai2.txt");
    FileDuLieu >> XepHang;

    //Output
    switch (XepHang)
    {
    case 'A':
        cout << "Xep hang hoc luc thuoc hang " << XepHang
            << "\nHoc sinh loai xuat sac";
        break;
    case 'B':
        cout << "Xep hang hoc luc thuoc hang " << XepHang
            << "\nHoc sinh loai gioi";
        break;
    case 'C':
        cout << "Xep hang hoc luc thuoc hang " << XepHang
            << "\nHoc sinh loai kha";
        break;
    case 'D':
        cout << "Xep hang hoc luc thuoc hang " << XepHang
            << "\nHoc sinh loai trung binh";
        break;
    case 'F':
        cout << "Xep hang hoc luc thuoc hang " << XepHang
            << "\nHoc sinh loai yeu";
        break;
    
    default:
        break;
    }
}

int main()
{
    system("cls");
    
    b3();

    return 1;
}