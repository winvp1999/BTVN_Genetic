//Bai 2. Viet chuong trinh doi ma nhi phan sang thap phan
#include <iostream>
using namespace std;
//Binh phuong mot so
long sqr(long x)
{
    return x * x;
}
//Luy thua cua 2 co so x
long pow(int x)
{
    if (x == 0) return 1;
    else 
        if (x % 2 == 0) return sqr(pow(x / 2));
        else return 2 * sqr(pow(x / 2));
}
//Kiem tra xuau nhi phan
bool UnvalidBinary(string str)
{
    for (int i = 0; i < str.length(); i++)
    if (str[i] != '0' && str[i] != '1') return true;
    return false;
}
//Chuyen doi xau nhi phan thanh so thap phan
int convertBintoDec(string str)
{
    int Exponent = 0;
    long DecimalNumber = 0;
    for (int i = str.length() - 1; i >= 0; i--)
    {
        DecimalNumber += pow(str.length() - i - 1) * (int) (str[i] - 48);
    } 
        
    return DecimalNumber;
}
//Ham xu ly
void b2()
{
    system("cls");
    string BinaryNumber;
    int DecimalNumber;
    //Input
    cout << "Nhap vao so nhi phan : ";
    getline(cin, BinaryNumber);
    fflush(stdin);
    while (UnvalidBinary(BinaryNumber))
    {
        system("cls");
        cout << BinaryNumber << "\t" << BinaryNumber.length();

        cout << "\nSo nhi phan khong hop le"
            << "\nNhap vao so nhi phan : ";
        getline(cin, BinaryNumber);
        fflush(stdin);
    }
    //Output
    cout << "\nGia tri cua so tren o he thap phan : " << convertBintoDec(BinaryNumber);
}

int main()
{
    b2();

    return 1;
}