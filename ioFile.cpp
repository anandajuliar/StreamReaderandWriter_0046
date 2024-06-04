#include<fstream>
#include<iostream>
#include<string>
using namespace std;

int main() {
    string baris;

    ofstream outfile; //membuka file dlm mode menulis
    outfile.open("contohfile.txt");//menunjuk kesebuah nama file

    cout<< ">=menulis file, \'q\' untuk keluar" << endl;

    //unlimited loop untuk menulis
	while (true) {
		cout << "- ";
		//mendapatkan setiap karakter dalam satu baris
		getline(cin, baris);
		//loop akan berhenti jika anda memasukkan karakter q
		if (baris == "q") break;
		//menulis dan memasukkan niai dari 'baris' ke dalam file
		outfile << baris << endl;
	}
      // selesai dalam menulis sekarang tutup file nya
	outfile.close();

}