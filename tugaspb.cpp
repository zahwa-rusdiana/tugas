#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main(){
    string nama = "Putri Zahwa";
    cout << "asli: " << nama << endl;
    cout << "Panjang: " << nama.length() << "(== " << nama.size() << ")\n";

    string sekolah = nama + " SMK";
    cout << "Gabung dengan +: " << sekolah << endl;
    nama.append(" Siswa");
    cout << "setelah append: " << nama << endl;

    string awal = nama.substr(0,5);
    cout << "substr(0,5): " << awal << endl;

    size_t pos = nama.find("Putri");
    if (pos != string::npos) {
        cout << "\"Zahwa\" ditemukan pada posisi: " << pos << endl;
    }else {
        cout << "\"Zahwa\" tidak ditemukan";
    }

    size_t pSiswa = nama.find( "Siswa");
    if (pSiswa != string::npos){
        nama.erase(pSiswa, 6);
        cout << "setelah erase: " << nama << endl;
    }
    
    size_t pPutri = nama.find ("Putri");
    if (pPutri != string::npos){
        nama.replace(pPutri, 5, "Zahwa ");
        cout << "setelah replace: " << nama << endl;
    }

    string besar = nama;
    for (size_t i = 0; i< besar.size(); ++i){
    besar[i] = toupper(static_cast<unsigned char>(besar[i]));
    }

    string kecil = besar;
    for (size_t i = 0; i < kecil .size(); ++i){
        kecil[i] = tolower(static_cast<unsigned char>(kecil[i]));
    }

    cout << "Lowercase: " << kecil << endl;

    return 0;
}

