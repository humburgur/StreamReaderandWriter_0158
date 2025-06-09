#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
    string baris;
    string nameFile;

    cout << "Masukan Name File : ";
    cin >> nameFile;
    cin.ignore();

    // membuat objek output file stream
    ofstream outfile;

  // membuka file untuk ditulisi
    outfile.open("nameFile.txt");

    cout << ">= Menulis file, \'q\' untuk keluar" << endl;

    //unlimited loop untuk menulis
    while (true) {
        cout << "- ";

        //mendapatkan setiap karakter dalam satu baris
        getline(cin, baris);

        //loop akan berhenti anda memasuki karakter q
        if (baris == "q") break;

        // menulis dan memasukan nilai dari 'baris' ke dalam file
        outfile << baris << endl;
    }
    // selesai dalam penulis sekarang tutup filenya
    outfile.close();

    //Membuat objek intput file stream
    ifstream infile;

    // membuka file yang dituliskan
    infile.open(nameFile + ".txt");

    cout << endl << ">= Membuka dan membaca file " << endl;

    //jika file ada maka
    if (infile.is_open())
    {
        // melakukan perulangan setiap baris
        while (getline(infile, baris))
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