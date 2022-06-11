#include <iostream>
#include <vector>
#include "include/matakuliah.hpp"

matakuliah::matakuliah(int id, std::string kode, std::string namaMatkul, int semester, int sks)
            :id(id), kode(kode), namaMatkul(namaMatkul), semester(semester), sks(sks)

{}

void matakuliah::setKode(std::string kode)
{
    this->kode = kode;
}

std::string matakuliah::getKode()
{
    return this->kode;
}

void matakuliah::setNamaMatkul(std::string namaMatkul)
{
    this->namaMatkul = namaMatkul;
}

std::string matakuliah::getNamaMatkul()
{
    return this->namaMatkul;
}

void matakuliah::setSMS(int semester)
{
    this->semester = semester;
}

int matakuliah::getSMS()
{
    return this->semester;
}

void matakuliah::setSks(int sks)
{
    this->sks = sks;
}

int matakuliah::getSks()
{
    return this->sks;
}

void matakuliah::setID(int id)
{
    this->id = id;
}

int matakuliah::getID()
{
    return this->id;
}