//Bai 3. Viet chuong trinh in mot so nguyen, mot so thuc,
//  mot ky tu da duoc dinh nghia truoc
#include <iostream>
using namespace std;
void b3()
{
    //Input
    int SoNguyen = 69;
    float SoThuc = 99.69;
    char Character = '@';
    
    //Output
    cout << "\nBien so nguyen\t: " << SoNguyen
        << "\nBien so thuc\t: " << SoThuc
        << "\nKy tu\t\t: " << Character;
}
int main()
{
    system("cls");
    fflush(stdin);
    
    b3();

    return 1;
}
