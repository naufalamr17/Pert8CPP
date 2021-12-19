#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int i, j, m = 2, n = 2, matriks1[2][2], matriks2[2][2], hasil[2][2];

    cout << "Masukkan elemen matrix pertama:" << endl;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            cout << "Masukkan matriks baris ke-" << i + 1 << " kolom ke-" << j + 1 << " : ";
            cin >> matriks1[i][j];
        }
    }
    cout << "Masukkan elemen matrix kedua:" << endl;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            cout << "Masukkan matriks baris ke-" << i + 1 << " kolom ke-" << j + 1 << " : ";
            cin >> matriks2[i][j];
        }
    }
    cout << endl
         << "hasil penjumlahan matrix:" << endl;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            hasil[i][j] = matriks1[i][j] + matriks2[i][j];
            cout << hasil[i][j] << "\t";
        }
        cout << endl;
    }
    getch();
}

