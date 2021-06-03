//Bai 3. Kiem tra trong 1 mang co bao nhieu so nguyen to
#include <iostream>
#include <fstream>
#include <math.h>
using namespace std;
bool CheckPrimeNumber(int x)
{
    if (x == 0) return false;
    if (x == 1 || x == 2) return true;
    for (int i = 2; i <= sqrt(x); i++)
    if (x % i == 0) return false;
    return true;
}
void b3()
{
    system("cls");
    int Quantity, *Array, choice;
    //Input
    cout << "Ban co muon lay ket qua da nhap o bai 1 khong?\n\t1. Co\t2. Khong";
    cout << "\nNhap vao lua chon cua ban : ";
    cin >> choice;
    if (choice == 1)
    {
        Quantity = 20;
        Array = new int[Quantity];
        ifstream input("input.txt");
        for (int i = 0; i < Quantity; i++) input >> Array[i];
        cout << "\nNap du lieu thanh cong";
        input.close();
    }
    else
    {
        cout << "\nNhap vao so luong phan tu cua mang";
        cin >> Quantity;
        Array = new int[Quantity];
        for (int i = 0; i < Quantity; i++)
        {
            cout << "\n Nhap vao phan tu thu " << i + 1 << " : ";
            cin >> Array[i];
        }
    }
    //Output
    int ResultArray[Quantity], ResultQuantity = 0;
    cout << "\nMang vua nhap la :" << endl;
    for (int i = 0; i < Quantity; i++) cout << Array[i] << " ";
    cout << endl;

    for (int i = 0; i < Quantity; i++)
    if (CheckPrimeNumber(Array[i]))
    {
        ResultArray[ResultQuantity] = Array[i];
        ResultQuantity++;
    }

    if (ResultQuantity > 0)
    {
        cout << "\nTrong mang co tong cong " << ResultQuantity << " so nguyen to\n";
        for (int i = 0; i < ResultQuantity; i++) cout << ResultArray[i] << " ";
    }
    else cout << "\nKhong co so nguyen to nao trong mang";
}
int main()
{
    b3();

    return 1;
}