#include <iostream>
using namespace std;

int main()
{
    int bilangan;
    srand(time(0));

    bilangan = rand() % 10;

    cout << "Bilangan Awal = " << bilangan << endl;
    if (bilangan >= 5 ) {
    bilangan = 2 * bilangan;
        }

    cout << "Bilangan Akhir = " << bilangan << endl;
    return 0;
}

