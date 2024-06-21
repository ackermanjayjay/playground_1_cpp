// Buatlah algoritma untuk membaca input
// 2 nilai ujian mahasiswa dan
// menampilkan pesan “DITERIMA” bila
// kedua nilai ujian ≥60 dan “TIDAK
// DITERIMA” bila salah satu nilai ujian
// <60

#include <vector>
#include <iostream>
#include <algorithm>

int main()
{
    std::string nama, decision;
    int nilaiValue;
    std::vector<std::string> nilaiHasil;
    std::cout << "Masukkan nama: ";
    std::cin >> nama;
    for (int i = 1; i <= 2; i++)
    {
        std::cin >> nilaiValue;
        decision = (nilaiValue >= 60) ? "Diterima" : "Tidak diterima";
        nilaiHasil.push_back(decision);
    }
    for (auto a : nilaiHasil)
        std::cout << a << " ";
    return 0;
}
