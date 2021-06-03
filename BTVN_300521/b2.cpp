//Bai 2. Tim cac so chinh phuong trong mang 20 phan tu
#include <iostream>
#include <fstream>
#include <math.h>
using namespace std;
bool CheckSquareNumber(int x)
{
    for (int i = 1; i <= (int) sqrt(x); i++)
    if (i * i == x) return true;
    return false;
}

void b2()
{
    system("cls");
    int Quantity = 20, choice, ResultQuantity = 0;
    int Array[Quantity], Result[Quantity];
    cout << "Ban co muon lay ket qua da nhap o bai 1 khong?\n\t1. Co\t2. Khong";
    cout << "\nNhap vao lua chon cua ban : ";
    cin >> choice;
    if (choice == 1)
    {
        ifstream input("input.txt");
        for (int i = 0; i < Quantity; i++) input >> Array[i];
        cout << "\nNap du lieu thanh cong";
        input.close();
    }
    else
    {
        cout << "\nNhap lan luot cac phan tu cua mang :";
        for (int i = 0; i < Quantity; i++)
        {
            cout << "\n Nhap vao phan tu thu " << i + 1 << " : ";
            cin >> Array[i];
        }
    }
    //Output
    cout << "\nMang vua nhap la :" << endl;
    for (int i = 0; i < Quantity; i++) cout << Array[i] << " ";
    cout << endl;

    for (int i = 0; i < Quantity; i++)
    if (CheckSquareNumber(Array[i]))
    {
        Result[ResultQuantity] = Array[i];
        ResultQuantity++;
    }

    if (ResultQuantity > 0)
    {
        cout << "\nTrong mang co tong cong " << ResultQuantity << " so chinh phuong\n";
        for (int i = 0; i < ResultQuantity; i++) cout << Result[i] << " ";
    }
    else cout << "\nKhong co so chinh phuong nao trong mang";    
}
int main()
{
    b2();

    return 1;
}