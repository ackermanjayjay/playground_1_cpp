#include <iostream>
#include <string>

class Mahasiswa
{
    std::string name,
        nim,
        matkul[100];
    int sks[100],
        mk;
    int hitung,
        jmlsks = 0;

public:
    void getName()
    {
        std::cout << "Masukkan nama anda: ";
        std::cin >> name;
    }
    void getNim()
    {
        std::cout << "Masukkan nim anda: ";
        std::cin >> nim;
    }
    void getSyarat()
    {
        std::cout << "Masukkan jumlah mata kuliah  anda: ";
        std::cin >> mk;
        for (int i = 0; i < mk; i++)
        {
            std::cout << "Masukkan Mata kuliah  :";
            std::cin >> matkul[i];
        }
        for (int v = 0; v < mk; v++)
        {
            std::cout << "Masukkan SKS  : ";
            std::cout << matkul[v] << " : ";
            std::cin >> sks[v];
        }
        std::cout << std::endl;
        for (int z = 0; z < mk; z++)
        {
            std::cout << "Berkikut Matkul dan sks Anda  : ";

            std::cout << matkul[z] << "   :  " << sks[z] << " " << std::endl;
            jmlsks += sks[z];
        }
    }
    void bayar()
    {
        hitung = 200000 * jmlsks;
    }

    void cetak()
    {
        std::cout << std::endl;
        std::cout << "Nama anda : " << name << std::endl;
        std::cout << "Nim anda  : " << nim << std::endl;
        std::cout << "Jumlah matkul yang anda ikuti : " << mk << " " << std::endl;
        std::cout << "Jumlah biaya Sks yang anda bayar adalah:";
        std::cout << "Rp: " << hitung << " ";
    }
};

int main()
{
    Mahasiswa input;

    input.getName();
    input.getNim();
    input.getSyarat();
    input.bayar();
    input.cetak();
    return 0;
}