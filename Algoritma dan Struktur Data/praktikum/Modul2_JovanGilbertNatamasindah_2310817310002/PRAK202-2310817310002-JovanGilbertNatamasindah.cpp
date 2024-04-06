#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

#define max 10 

struct Stack {
    int atas;
    int data[max];
};

Stack Tumpuk;

int kosong() {
    if (Tumpuk.atas == -1)
        return 1;
    else
        return 0;
}

int penuh() {
    if (Tumpuk.atas == max - 1)
        return 1;
    else
        return 0;
}

void input(int data) {
    if (kosong() == 1 || penuh() == 0) {
        Tumpuk.atas++;
        Tumpuk.data[Tumpuk.atas] = data;
        cout << "Data " << Tumpuk.data[Tumpuk.atas] << " Masuk Ke Stack" << endl;
    } else {
        cout << "Tumpukan Penuh" << endl;
    }
}

void hapus() {
    if (kosong() == 0) {
        cout << "Data Teratas Sudah Terambil" << endl;
        Tumpuk.atas--;
    } else {
        cout << "Data Kosong" << endl;
    }
}

void tampil() {
    if (kosong() == 0) {
        cout << "Isi Stack: ";
        for (int i = Tumpuk.atas; i >= 0; i--) {
            cout << Tumpuk.data[i] << " ";
        }
        cout << endl;
    } else {
        cout << "Tumpukan Kosong" << endl;
    }
}

void bersih() {
    Tumpuk.atas = -1;
    cout << "Tumpukan Dikosongkan" << endl;
}

int main() {
    
    int pilihan, data;
    Tumpuk.atas = -1; 

    do {
        cout << "STACK" << endl;
        cout << "==========" << endl;
        cout << "1. Input Data" << endl;
        cout << "2. Hapus Data" << endl;
        cout << "3. Tampil Stack" << endl;
        cout << "4. Kosongkan Stack" << endl;
        cout << "5. Keluar" << endl;
        cout << "Pilihan: ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                cout << "Masukkan data: ";
                cin >> data;
                input(data); 
                break;
            case 2:
                hapus();
                break;
            case 3:
                tampil();
                break;
            case 4:
                bersih();
                break;
            default:
                cout << "Terima Kasih" << endl;
                break;
        }

        cout << "Press any key to continue" << endl;
        getch();
        system("cls");
        
    } 

    while (pilihan != 5);

}
