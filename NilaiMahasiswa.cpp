#include <conio.h>
#include <iostream>
#include <iomanip>

using namespace std;

int i = 1;
int jum;
char npm[50][100];
char nama[50][100];
float tugas[10];
float uts[10];
float uas[10];
float akhir[10];
float absen[10];

void laporan();

int main()
{
    cout << " Masukkan Jumlah mahasiswa = ";
    cin >> jum;
    cout << endl;
    for (i; i <= jum; i++)
    {
        cout << " Mahasiswa ke-" << i << endl;
        cout << " Nama Mahasiswa\t= ";
        cin >> nama[i];
        cout << " NPM\t\t= ";
        cin >> npm[i];
        cout << " Nilai UTS\t= ";
        cin >> uts[i];
        cout << " Nilai UAS\t= ";
        cin >> uas[i];
        cout << " Nilai Absen\t= ";
        cin >> absen[i];
        cout << " Nilai Tugas\t= ";
        cin >> tugas[i];
        akhir[i] = ((0.3 * uts[i]) + (0.4 * uas[i]) + (0.1 * absen[i]) + (0.2 * tugas[i]));
        cout << endl;
    }
    laporan();
    getch(); 
}

void laporan()
{
    cout << " LAPORAN NILAI PEMROGRAMAN C++" << endl;
    cout << " UNIVERSITAS ABC JAKARTA" << endl;
    cout << " --------------------------------------------------------------------------------- " << endl;
    cout << " No.   NPM               NAMA              UTS   UAS   TUGAS   ABSEN   NILAI AKHIR" << endl;
    cout << " --------------------------------------------------------------------------------- " << endl;
    for (i = 1; i <= jum; i++)
    {
        cout << setiosflags(ios::left) << " " << setw(5) << i;
        cout << setiosflags(ios::left) << " " << setw(17) << npm[i];
        cout << setiosflags(ios::left) << " " << setw(17) << nama[i];
        cout << setiosflags(ios::left) << " " << setw(5) << uts[i];
        cout << setiosflags(ios::left) << " " << setw(5) << uas[i];
        cout << setiosflags(ios::left) << " " << setw(7) << tugas[i];
        cout << setiosflags(ios::left) << " " << setw(7) << absen[i];
        cout << setiosflags(ios::left) << " " << setw(7) << akhir[i];
        cout << endl;
    }
    cout << " --------------------------------------------------------------------------------- " << endl;
    cout << " Dibuat Oleh : Naufal Ammar H";
    cout << endl;
    getch();
}

