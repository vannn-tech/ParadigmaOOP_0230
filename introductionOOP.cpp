#include <iostream>
using namespace std;

class Mahasiswa {
public:
    int nim;
    string nama;
    float nilai;

    void printData() {
        cout << "NIM: " << nim << endl;
        cout << "Nama: " << nama << endl;
        cout << "Nilai: " << nilai << endl;
        
    }
}; //batas class

int main() {
    Mahasiswa mhs1;
    mhs1.nim = 12345;

    return 0;
}

