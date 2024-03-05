#include <iostream>
using namespace std;

int main() {
    int nilaiMatematika, nilaiFisika, nRerata;
    string status;

    cout << "Masukan nilai Matermatika : ";
    cin >> nilaiMatematika;

    cout << "Masukan Nilai Fisika : ";
    cin >> nilaiFisika;

    nRerata = (nilaiMatematika + nilaiFisika) / 2;

    if (nRerata > 60) {
        status = "Lulus";
    }
    else if (nilaiMatematika > 70) {
        status = "Lulus";
    }
    else {
        status = "Tidak Lulus";
    }

    cout << "Nilai Mtk : " << nilaiMatematika << endl;
    cout << "Nilai Fisika : " << nilaiFisika << endl;
    cout << "rta-rata nilai : " << nRerata << endl;
    cout << "Statusnya adalah " << status << endl;
}


