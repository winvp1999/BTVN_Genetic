//Bai 10. Viet chuong trinh in ra hinh vuong bang ky tu '*'
#include <iostream>
using namespace std;
void b10()
{
    system("cls");
    int Edge;
    //Input
    cout << "Nhap do dai canh hinh vuong : ";
    cin >> Edge;
    //Output
    for (int i = 0; i < Edge; i++)
    {
        for (int j = 0; j < Edge; j++)
        cout << '*';
        cout << endl;
    }
}
int main()
{
    b10();

    return 1;
}