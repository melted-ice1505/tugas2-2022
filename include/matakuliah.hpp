#ifndef __MATAKULIAH_HPP__
#define __MATAKULIAH_HPP__

#include <iostream>

class matakuliah {
    private:
    std::string kode, namaMatkul;
    int sks, semester, id;

    public:
    matakuliah(int id, std::string kode, std::string namaMatkul, int semester, int sks);

    void setKode(std::string kode);
    std::string getKode();
    void setNamaMatkul(std::string namaMatkul);
    std::string getNamaMatkul();
    void setSks(int sks);
    int getSks();
    void setSMS(int semester);
    int getSMS();
    void setID(int id);
    int getID();

};

#endif