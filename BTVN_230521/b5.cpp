//Bai 5. Viet chuong trinh in ra bang cuu chuong tu 1 den 9
#include <iostream>
#include <stdlib.h>
using namespace std;

void execute(int FirstNumber, int LastNumber)
{
    cout << endl;
    for (int i = 1; i <= 9; i++)
    {
        cout << endl;
        for (int j = FirstNumber; j <= LastNumber; j++)
        cout << "\t" 
            << j 
            << " * "
            << i
            << " = "
            << i * j;
    }
}
void b5()
{
    system("cls");
    //Output    
    cout << "Bang cuu chuong tu 1 den 9";
    for (int i = 1; i < 9; i += 3) execute(i, i + 2);
}
int main()
{
    b5();

    return 1;
}