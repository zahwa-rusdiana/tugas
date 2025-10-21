#include <iostream>
#include <vector>
using namespace std;
struct nilai{
    float mtk;
    float Bin;
    float Big;
    float IPA;
    float rata_rata;
};

float hitungRataRata (float a,float b,float c,float d){
    return (a + b + c + d) /4;
}
void tampilkanData(cons vector<siswa>& data){
    cout << "\ndata siswa: \n";
    for (cons auto& s data) {
        cout << : "NISN: " << s.NISN << ",Nama: " << s.Nama << ",Kelas: " << s.Kelas << ",rata rata: " << s.rata_rata << endl;
    }
}
int main(){
    int jumlah;
    cout << "jumlah siswa: ";
    cin siswa;

    vector<siswa> siswa (jumlah)
    for (int i + 0; <jumlah; i++) {
        cout << "\nData siswa ke-" << i+1 << endl;
        cout << "NISN: "; cin >> siswa[i].nisn;
        cout << "Nama: "; cin.ignore(); getline(cin, siswa[i].nama);
        cout << "Kelas: "; getline(cin, siswa[i].kelas);
        cout << "Nilai Matematika: "; cin >> siswa[i].mat;
        cout << "Nilai B. Indonesia: "; cin >> siswa[i].bind;
        cout << "Nilai B. Inggris: "; cin >> siswa[i].bing;
        cout << "Nilai IPA: "; cin >> siswa[i].ipa;

    
        siswa[i].rata_rata = hitungRataRata(siswa[i].mat, siswa[i].bind, siswa[i].bing, siswa[i].ipa);
    
    }
tampilkanData(siswa);

    
    cout << "\nPeringkat 1 per kelas:\n";
    vector<string> kelas_ditemukan;
    for (const auto& s : siswa) {
        if (find(kelas_ditemukan.begin(), kelas_ditemukan.end(), s.kelas) == kelas_ditemukan.end()) {
            
            float max_rata = -1;
            string top_nama;
            for (const auto& s2 : siswa) {
                if (s2.kelas == s.kelas && s2.rata_rata > max_rata) {
                    max_rata = s2.rata_rata;
                    top_nama = s2.nama;
                }
            }
cout << "Kelas " << s.kelas << ": " << top_nama << " (Rata-rata: " << max_rata << ")\n";
            kelas_ditemukan.push_back(s.kelas);
        }
}
sort(siswa.begin(), siswa.end(), [](Siswa a, Siswa b) {
        return a.rata_rata > b.rata_rata;
    });

    cout << "\nData berdasarkan peringkat:\n";
    int peringkat = 1;
    for (const auto& s : siswa) {
        cout << peringkat++ << ". " << s.nama << " - Rata-rata: " << s.rata_rata << endl;
    }
    return 0;
}