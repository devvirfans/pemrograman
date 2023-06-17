#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Pegawai {
protected:
    string id;
    int usia, tipe;
    int income;

public:
    void set(string pid, int u, int t ) 
    {
        id = pid; 
        usia = u; 
        tipe = t;
    }

    string getID() 
    { 
        return id; 
    }

    void print() {
        cout << id << " " << tipe << " " << income << endl;
    }
};

class Tetap : public Pegawai {
private:
    int gajipokok;
    int uanglembur;

public:
    Tetap(){
            id="";
            usia=0;
            tipe=0;
            income=0;
            gajipokok=0;
            uanglembur=0;
        }
    void setGajiPokok(int gp) {
        gajipokok = gp;
    }

    void setUangLembur(int ul) {
        uanglembur = ul;
    }

    void hitungIncome() {
        income = gajipokok + uanglembur;
    }
};

class Harian : public Pegawai {
private:
    int upahperhari;
    int jumlahupah;

public:
    Harian(){
        id = "";
        usia = 0;
        tipe = 0;
        income = 0;
        upahperhari = 0;
        jumlahupah = 0;
    }
    void setUpahPerHari(int uh) {
        upahperhari = uh;
    }

    void setJumlahUpah(int uh) {
        jumlahupah += uh;
    }

    void hitungIncome() {
        income = jumlahupah;
    }
};

int main()
{
    vector<Tetap> pegawaiTetap;
    vector<Harian> pegawaiHarian;

    int N, upah;
    string id;
    cin >> N;

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
            p.setGajiPokok(gp);
            pegawaiTetap.push_back(p);
        }
        else
        {
            Harian p;
            p.set(id, usia, tipe);
            pegawaiHarian.push_back(p);
        }
    }

    while (cin >> id)
    {
        if (id == "END")
            break;

        cin >> upah;
        for (vector<Harian>::size_type i = 0; i < pegawaiHarian.size(); i++)
        {
            if (pegawaiHarian[i].getID() == id)
            {
                pegawaiHarian[i].setJumlahUpah(upah);
                break;
            }
        }

        for (vector<Tetap>::size_type i = 0; i < pegawaiTetap.size(); i++)
        {
            if (pegawaiTetap[i].getID() == id)
            {
                pegawaiTetap[i].setUangLembur(upah);
                break;
            }
        }
    }

    for (auto &i : pegawaiTetap)
    {
        i.hitungIncome();
        i.print();
    }

    for (auto &i : pegawaiHarian)
    {
        i.hitungIncome();
        i.print();
    }

    return 0;
}