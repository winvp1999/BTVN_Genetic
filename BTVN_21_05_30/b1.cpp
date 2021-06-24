//Bai 1. Nhap ngau nhien 20 phan tu cua mang:
//  - Tim phan tu so chan lon nhat va vi tri cua no
//  - Tim phan tu so le lon nhat va vi tri cua no
//  - Sap xep cac phan tu so chan tu lon den be va tu be den lon
//  - Thuc hien tuong tu voi cac phan tu so le
#include <iostream>
using namespace std;
bool ParityCheck(int x, int surplus)
{
    return x % 2 == surplus ? true : false;
}
int Max(int array[], int surplus, int quantity)
{
    int Position = -1, Max = array[0];
    string Parity = (surplus == 0 ? "chan" : "le");
    for (int i = 0; i < quantity; i++)
    if (ParityCheck(array[i], surplus) && array[i] > Max)
    {
        Max = array[i];
        Position = i;
    }
    if (Position == -1) cout << "\nMang khong co so " << Parity;
    else 
    {
        cout << "\nSo " << Parity << " lon nhat : " << Max
            << "\nVi tri : " << Position + 1;
    }
    return Position;
}

void Sort(int array[], int surplus, int quantity, int ok)
{
    cout << endl;
    string Parity = (surplus == 0 ? "chan" : "le");
    string str = (surplus == 0 ? "le" : "chan");
    cout << "\nGiu nguyen cac so " << str;
    if (ok != -1)
    {        
        int _array[quantity];
        for (int i = 0; i < quantity; i++)
        _array[i] = array[i];
        
        array = new int[quantity];
        for (int i = 0; i < quantity; i++)
        array[i] = _array[i];
        
        for (int i = 0; i < quantity - 1; i++)
        for (int j = i + 1; j < quantity; j++)
        if (ParityCheck(array[i], surplus) && ParityCheck(array[j], surplus))
        {
            if (array[i] > array[j])
            {
                int tg = array[i];
                array[i] = array[j];
                array[j] = tg;
            }
            else
            {
                int tg = _array[i];
                _array[i] = _array[j];
                _array[j] = tg;
            }
        }
        cout << "\nMang sau khi sap xep cac so " << Parity << " tu be den lon :" << endl;
        for (int i = 0; i < quantity; i++) cout << array[i] << " ";
        cout << endl;
        cout << "\nMang sau khi sap xep cac so " << Parity << " tu lon den be :" << endl;
        for (int i = 0; i < quantity; i++) cout << _array[i] << " ";
        cout << endl;
    }
    else 
    {
        cout << "\nMang giu nguyen nhu cu vi khong co so " << Parity << " nao : " << endl;
        for (int i = 0; i < quantity; i++) cout << array[i] << " ";
        cout << endl;
    }
}

void b1()
{
    system("cls");
    int Quantity = 20;
    int Array[Quantity];
    //Input
    cout << "Nhap lan luot cac phan tu cua mang :";
    for (int i = 0; i < Quantity; i++)
    {
        cout << "\n Nhap vao phan tu thu " << i + 1 << " : ";
        cin >> Array[i];
    }
    //Output
    cout << "\nMang vua nhap la :" << endl;
    for (int i = 0; i < Quantity; i++) cout << Array[i] << " ";
    cout << endl;

    int even = Max(Array, 0, Quantity); //Phan tu so chan lon nhat va vi tri cua no

    int odd = Max(Array, 1, Quantity);  //Phan tu so le lon nhat va vi tri cua no

    Sort(Array, 0, Quantity, even);     //Sap xep cac phan tu so chan tu be den lon
                                        //va tu lon den be
    
    Sort(Array, 1, Quantity, odd);      //Sap xep cac phan tu so le tu be den lon
                                        //va tu lon den be
}
int main()
{
    b1();
    return 1;
}