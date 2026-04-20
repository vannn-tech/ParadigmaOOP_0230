#include <iostream>
using namespace std;

class Barang {
public:
    string nama;
    int jumlah;
    string kategori;
    string tanggalProduksi;

    void tampilkanSpesifikasi() {
        cout << "Nama            : " << nama            << endl;
        cout << "Jumlah          : " << jumlah          << endl;
        cout << "Kategori        : " << kategori        << endl;
        cout << "Tanggal Produksi: " << tanggalProduksi << endl;

    }
}; //batas class

int main() {
    Barang elektronik;
    elektronik.nama            = "Laptop Asus";
    elektronik.jumlah          = 10;
    elektronik.kategori        = "Elektronik";
    elektronik.tanggalProduksi = "2024-01-15";

    Barang nonElektronik;
    nonElektronik.nama            = "Meja Belajar";
    nonElektronik.jumlah          = 5;
    nonElektronik.kategori        = "Furnitur";
    nonElektronik.tanggalProduksi = "2023-08-20";

    cout << "===== Data Barang Elektronik =====" << endl;
    elektronik.tampilkanSpesifikasi();

    cout << "===== Data Barang Non-Elektronik =====" << endl;
    nonElektronik.tampilkanSpesifikasi();

    return 0; //end of main
}
