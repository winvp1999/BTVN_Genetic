//Bai 1. Nhap 2 so nguyen tim so lon nhat va so be nhat
#include <iostream>
using namespace std;
int Max(int x, int y)
{
    return x > y ? x : y;
}
int Min(int x, int y)
{
    return x < y ? x : y;
}
void b1()
{
    system("cls");
    int FirstNumber, SecondNumber;
    //Input
    cout << "Nhap vao so thu nhat\t: ";
    cin >> FirstNumber;
    cout << "Nhap vao so thu hai\t: ";
    cin >> SecondNumber;
    cout << endl;
    
    //Output
    cout << "So lon hon la\t: " << Max(FirstNumber, SecondNumber)
        << "\nSo be hon la\t: " << Min(FirstNumber, SecondNumber);
}

int main()
{
    b1();

    return 1;
}
