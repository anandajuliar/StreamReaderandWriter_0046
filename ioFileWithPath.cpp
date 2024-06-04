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

