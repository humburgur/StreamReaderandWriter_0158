#include <iostream>
#include <exception>

// Untuk objek exception yang akan digunakan
#include <array>

// Untuk Objek array yang akan kita gunakan
using namespace std;

int main()
{
    cout << "Awal Program" << endl; // penanda 1:...
    try {
        array<int, 3> data = {10, 20, 30 };

        //pesan array integer 3 elemen
        cout << data.at(5) << endl;
        
        //memanggil aray elemen ke 5
    }
    catch (exception& e) {
        // penangkapan menggunakan objek exception
        cout << e.what() << endl;

        /*akan dieksekusi karena array data hanya memiliki 3 elemen*/
    }
    cout << "Baris Program yang Terakhir" << endl;
    /*penanda 2: bahwa program berjalan tanpa berhenti meskipun terjadi kesalahan*/

    return 0;
}