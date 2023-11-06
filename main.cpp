#include <iostream>
using namespace std;

int main()
{
    double hasil, nominal;
    int pilihan;

    cout << "================================================================" << endl;
    cout << "                      KONVERSI MATA UANG                        " << endl;
    cout << " MENGHITUNG NILAI MATA UANG DOLLAR TO RUPIAH / RUPIAH TO DOLLAR " << endl;
    cout << "================================================================" << endl <<endl;
    cout << "1. Dolar ke rupiah" << endl;
    cout << "2. Rupiah ke dolar" << endl;
    cout << ">> ";
    cin >> pilihan;

    cout << " Masukkan nominal yang ingin dikonversi: ";
    cin >> nominal;

    switch (pilihan)
    {
    case 1:
        hasil = nominal * 15401.00;
        cout << nominal << " Dolar = " << hasil << " Rupiah" << endl;
        break;
    case 2:
        hasil = nominal * 0.000065;
        cout << nominal << " Rupiah = " << hasil << " Dolar" << endl;
        break;
    }
}
