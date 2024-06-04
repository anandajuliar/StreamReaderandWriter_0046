#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main ()
{
    string baris;
    string NamaFile;

    cout << "Masukkan nama file : ";
    cin >> NamaFile;

    ofstream outfile;// membuka file dalam mode menulis.
    outfile.open(NamaFile + ".txt", ios::out); // menunjuk ke sebuah nama file

    cout << ">= Menulis File, \'q\' untuk keluar" << endl;

    // unlimited loap untuk menulis
    while (true)
    {
        cout << "- ";
        // mendapatkan setiap karakter dalam satu baris
        getline(cin, baris);
        // loap akan berhenti jika anda memasukkan karakter q
        if(baris == "q") break;
        // menulis dan memasukkan nilai dari 'baris' ke dalam file
        outfile << baris << endl;

        outfile.close();// selesai dalam menulis sekarang tutup filenya
        ifstream infile; // membuka file dalam mode membaca
        // menunjuk ke sebuah file
        infile.open(NamaFile + ".txt", ios::out);

        cout << endl << ">= Membuka dan membaca file " << endl;

        // jika file ada maka
        if (infile.is_open())
        {
        // melakukan perulangan setiap baris
        while(getline(infile, baris))
        {
            // dan tampilkan di sini
            cout << baris << '\n';
        }
        // tutup file tersebut setelah selesai
        infile.close();
    }
    // jika tidak ditemukan file maka akan menampilkan ini
    else cout << "Unable to open file";
    return 0;
}

    }
