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

	ifstream infile; //Membuka file dalam mode baca
	infile.open("contohfile.txt");//menujuk ke sebuah file

	cout << endl << ">= Membuka dan membaca file " << endl;

    //jika file ada maka
	if (infile.is_open())
	{
		// melakukan perulangan setiap baris
		while (getline(infile, baris))
		{
			//dan tampilkan disini
			cout << baris << '\n';
		}
		//tutp file tersebut setelah selesai
		infile.close();
	}
    //jika tidak ditemukan file maka akan menampilkan ini
	else cout << "unable to open file";
	return 0;
	
}
