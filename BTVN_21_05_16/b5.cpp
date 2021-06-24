//Bai 5. Tim hai so nguyen tu ban phim, tinh tong, trung
//  binh cong cua chung va in ket qua ra man hinh
#include <iostream>
using namespace std;
void b5()
{
    long FirstNumber, SecondNumber;
    //Input
    cout << "Nhap vao so thu nhat\t: ";
    cin >> FirstNumber;
    cout << "Nhap vao so thu hai\t: ";
    cin >> SecondNumber;

    //Output
    cout << "\nTong cua hai so\t\t\t: " << FirstNumber + SecondNumber                       // Tong
        << "\nTrung binh cong cua hai so\t: " << (float) (FirstNumber + SecondNumber) / 2;  // Trung binh cong
        
}
int main()
{
    system("cls");
    fflush(stdin);
    
    b5();

    return 1;
}