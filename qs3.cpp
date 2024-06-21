#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>

class Mahasiswa
{

    // type data for name and nim
    std::string name, nim, prodi, matkulValue;

    int jmlMatkul, sksValue;


    // type data matkul and sks in vector dynamic
    std::vector<std::string> matkul;
    std::vector<int> sks;

public:
    void inputNameId()
    {

        std::cout << "Masukkan Nama: ";
        std::cin >> name;
        std::cout << "Masukkan Nim: ";
        std::cin >> nim;
        std::cout << "Masukkan Program Studi: ";
        std::cin >> prodi;
    }

    void inputMatkul()
    {
        std::cout << "\nInput Jumlah matkul: ";
        std::cin >> jmlMatkul;

        for (int i = 1; i <= jmlMatkul; i++)
        {
            std::cout << "Matkul " << i << ": ";
            std::cin >> matkulValue;
            std::cout << "sks " << i << ": ";
            std::cin >> sksValue;
            matkul.push_back(matkulValue);
            sks.push_back(sksValue);
        }
    }

    void totalResult()
    {
        int totalSks;
        totalSks = std::accumulate(sks.begin(), sks.end(), 0);
        int totalTarifSks;
        totalTarifSks = 200000 * totalSks;
        std::cout << "\nTotal Sks: " << totalSks << std::endl;
        std::cout << "Total Tarif Sks: " << totalTarifSks;
    }
};

int main()
{
    Mahasiswa input;

    input.inputNameId();
    input.inputMatkul();
    input.totalResult();
}