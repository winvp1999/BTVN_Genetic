//Bai 4. Cho mot mang gom 20 phan tu nhap ngau nhien:
//  - Tim vi tri cac phan tu lon nhat mang (co gia tri giong nhau)
//  - Tim vi tri cac phan tu be nhat mang (co gia tri giong nhau)
#include <iostream>
#include <fstream>
using namespace std;
void b4()
{
    system("cls");
    int Quantity = 20, choice;
    float Array[Quantity];
    //Input
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
    //Solve
    int MaxQuantity = 1, MinQuantity = 1;
    float Max = Array[0], Min = Array[0],
        MaxArray[Quantity],MinArray[Quantity];

    for (int i = 0; i < Quantity; i++)
    {
        if (Max < Array[i])
        {
            Max = Array[i];
            MaxQuantity = 1;
            MaxArray[MaxQuantity - 1] = i;
        }
        else if (Max == Array[i])
        {
            MaxQuantity++;
            MaxArray[MaxQuantity - 1] = i;
        }
        if (Min > Array[i])
        {
            Min = Array[i];
            MinQuantity = 1;
            MinArray[MinQuantity - 1] = i;
        }
        else if (Min == Array[i])
        {
            MinQuantity++;
            MinArray[MinQuantity - 1] = i;
        }
    }
    //Output
    cout << "\nMang vua nhap la :" << endl;
    for (int i = 0; i < Quantity; i++) cout << Array[i] << " ";
    cout << endl;

    if (MaxQuantity > 1)
    {
        cout << "\nPhan tu lon nhat trong mang la\t: " << Max
            << "\nXuat hien tai cac vi tri\t: ";
        for (int i = 1; i < MaxQuantity; i++) cout << MaxArray[i] << " ";
    }
    else cout << "\nPhan tu lon nhat trong mang la\t: " << Max
            << "\nXuat hien duy nhat tai vi tri\t: " << MaxArray[0];
    cout << endl;
    if (MinQuantity > 1)
    {
        cout << "\nPhan tu be nhat trong mang la\t: " << Min
            << "\nXuat hien tai cac vi tri\t: ";
        for (int i = 1; i < MinQuantity; i++) cout << MinArray[i] << " ";
    }
    else cout << "\nPhan tu be nhat trong mang la\t: " << Min
            << "\nXuat hien duy nhat tai vi tri\t: " << MinArray[0];
}
int main()
{
    b4();

    return 1;
}