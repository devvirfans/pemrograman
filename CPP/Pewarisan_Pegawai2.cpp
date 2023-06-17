#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Pegawai
{
protected:
    string id;
    int usia, tipe;
    int income;

public:
    void set(string pid, int u, int t)
    {
        id = pid;
        usia = u;
        tipe = t;
    }
    string getID() { return id; }
    void print()
    {
        cout << id << " " << tipe << " " << income << endl;
    }
};

class Tetap : public Pegawai
{
public:
    Tetap(){
        id="";
        usia=0;
        tipe=0;
        income=0;
        gajiPokok=0;
        uangLembur=0;
    }
    int gajiPokok;
    int uangLembur;
    void setGaji(int gp)
    {
        gajiPokok = gp;
    }
    void setGajiLembur(int gl)
    {
        uangLembur = gl;
    }
    void hitungGaji() { income = gajiPokok + uangLembur; }
};

class Harian : public Pegawai
{
public:
    Harian(){
        id="";
        usia=0;
        tipe=0;
        income=0;
        upahPerHari=0;
        totalUpah=0;
    }
    int upahPerHari;
    int totalUpah;
    void setUpah(int uh) { upahPerHari = uh; }
    void hitungGaji() { income = totalUpah; }
    void tambahUpah(int uh) { totalUpah += uh; }
};

int main()
{
    int N;
    cin >> N;

    vector<Tetap> pegawaiTetap;
    vector<Harian> pegawaiHarian;

    for (int i = 0; i < N; i++)
    {
        string id;
        int usia, tipe;
        cin >> id >> usia >> tipe;

        if (tipe == 1)
        {
            int gp;
            cin >> gp;
            Tetap p;
            p.set(id, usia, tipe);
            p.setGaji(gp);
            pegawaiTetap.push_back(p);
        }
        else if (tipe == 2)
        {
            Harian p;
            p.set(id, usia, tipe);
            pegawaiHarian.push_back(p);
        }
    }

    string id;
    int upah;
    while (cin >> id)
    {
        if (id == "END")
            break;

        cin >> upah;
        for (vector<Harian>::size_type i = 0; i < pegawaiHarian.size(); i++)
        {
            if (pegawaiHarian[i].getID() == id)
            {
                pegawaiHarian[i].tambahUpah(upah);
                break;
            }
        }

        for (vector<Tetap>::size_type i = 0; i < pegawaiTetap.size(); i++)
        {
            if (pegawaiTetap[i].getID() == id)
            {
                pegawaiTetap[i].setGajiLembur(upah);
                break;
            }
        }
    }

    for (auto &i : pegawaiTetap)
    {
        i.hitungGaji();
        i.print();
    }

    for (auto &i : pegawaiHarian)
    {
        i.hitungGaji();
        i.print();
    }

    return 0;
}