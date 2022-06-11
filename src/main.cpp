#include <iostream>
#include <vector>

#include "include/person.hpp"
#include "include/mahasiswa.hpp"
#include "include/dosen.hpp"
#include "include/tendik.hpp"
#include "include/matakuliah.hpp"

using namespace std;

// Fardian Ahmad Zidane
// 5024211040
// Teknik Komputer '21'

int main(int argc, char** argv)
{
	vector<mahasiswa> recMhs;
	vector<dosen> recDosen;
	vector<tendik> recTendik;
	vector<matakuliah> recMataK;

	string namaMhs, namaDsn, namaTdk, namaMatK;
	string nrp, npp, departemen, pendidikan, unit, kodeMatK;
	int dd, mm, yy, tahunmasuk, smsMatK, sksMatK;
	int idMhs=0, idDsn=0, idTdk=0, idMatK=0, idSementara;
	unsigned semesterke;

	int menu_terpilih, menu_2;


	while(1) {

		menuutama:
		system("cls") && system("clear");

		cout << "=======================================================" << endl;
		cout << "Selamat datang di Universitas Keputih Warrior" << endl;
		cout << "=======================================================" << endl;
		cout << "Data statistik:" << endl;
		cout << "  1. Jumlah Mahasiswa             : " << recMhs.size() << " mahasiswa" << endl;
		cout << "  2. Jumlah Dosen                 : " << recDosen.size() << " dosen" << endl;
		cout << "  3. Jumlah Tenaga Kependidikan   : " << recTendik.size() << " tendik" << endl;
		cout << "  4. Mata Kuliah yang Tersedia    : " << recMataK.size() << " mata kuliah" << endl;
		cout << "=======================================================" << endl << endl;
		cout << "Menu: " << endl << endl;
		cout << "  1. Tambah Mahasiswa" << endl;
		cout << "  2. Tambah Dosen" << endl;
		cout << "  3. Tambah Tenaga Kependidikan" << endl;
		cout << "  4. Tambah Mata Kuliah" << endl;
		cout << "  5. Tampilkan semua Mahasiswa" << endl;
		cout << "  6. Tampilkan semua Dosen" << endl;
		cout << "  7. Tampilkan semua Tenaga Kependidikan" << endl;
		cout << "  8. Tampilkan semua Mata Kuliah" << endl;
		cout << "  9. Keluar dari program" << endl << endl;
		cout << "-> Silahkan memilih salah satu: ";
		cin >> menu_terpilih;

		switch (menu_terpilih) {
			case 1:
				{

				system("cls") && system("clear");
				idMhs++;

				cout << endl << "Silahkan masukkan nama mahasiswa" << endl;
				cin.ignore();
				getline(cin, namaMhs);
				cout << "Silahkan masukkan Tanggal Lahir dengan format dd mm yy" << endl;
				cin >> dd >> mm >> yy;
				cout << "Silahkan masukkan NRP mahasiswa" << endl;
				cin >> nrp;
				cout << "Silahkan masukkan Departemen mahasiswa" << endl;
				cin.ignore();
				getline(cin, departemen);
				cout << "Silahkan masukkan Tahun Masuk mahasiswa" << endl;
				cin >> tahunmasuk;
				cout << "Silahkan masukkan semester yang ditempuh saat ini" << endl;
				cin >> semesterke;

				mahasiswa Mhs(idMhs, namaMhs, dd, mm, yy, nrp, departemen, tahunmasuk, semesterke);
				recMhs.push_back(Mhs);
				}
				break;
			case 2:{
				system("cls") && system("clear");
				idDsn++;

				cout << endl << "Silahkan masukkan nama dosen" << endl;
				cin.ignore();
				getline(cin, namaDsn);
				cout << "Silahkan masukkan Tanggal Lahir dengan format dd mm yy" << endl;
				cin >> dd >> mm >> yy;
				cout << "Silahkan masukkan NPP Dosen" << endl;
				cin >> npp;
				cout << "Silahkan masukkan Departemen Dosen" << endl;
				cin.ignore();
				getline(cin, departemen);
				cout << "Silahkan masukkan Pendidikan Terakhir Dosen" << endl;
				cin >> pendidikan;

				dosen Dsn(idDsn, namaDsn, dd, mm, yy, npp, departemen, pendidikan);
				recDosen.push_back(Dsn);
			}
				break;
			case 3:{
				system("cls") && system("clear");
				idTdk++;

				cout << endl << "Silahkan masukkan nama Tendik" << endl;
				cin.ignore();
				getline(cin, namaTdk);
				cout << "Silahkan masukkan Tanggal Lahir dengan format dd mm yy" << endl;
				cin >> dd >> mm >> yy;
				cout << "Silahkan masukkan NPP Tendik" << endl;
				cin >> npp;
				cout << "Silahkan masukkan Unit" << endl;
				cin.ignore();
				getline(cin, unit);

				tendik Tdk(idTdk, namaTdk, dd, mm, yy, npp, unit);
				recTendik.push_back(Tdk);
			}
				break;
			case 4:{
				system("cls") && system("clear");
				idMatK++;

				cout << endl << "Silahkan masukkan nama Mata Kuliah" << endl;
				cin.ignore();
				getline(cin, namaMatK);
				cout << "Silahkan masukkan Kode Mata Kuliah tanpa spasi" << endl;
				cin >> kodeMatK;
				cout << "Silahkan masukkan bobot SKS Mata Kuliah" << endl;
				cin >> sksMatK;
				cout << "Silahkan masukkan semester Mata Kuliah" << endl;
				cin >> smsMatK;

				matakuliah MK(idMatK, kodeMatK, namaMatK, smsMatK, sksMatK);
				recMataK.push_back(MK);

			}
			break;
			case 5:{
				listMhs:
				system("cls") && system("clear");
				if (recMhs.size() == 0){
					cout << "Tidak ada mahasiswa yang tersedia, tekan tombol apa saja untuk kembali ke menu utama" << endl;
					cin.ignore(); cin.ignore();
					break;
				}
				cout << endl << "List Mahasiswa Yang Tersedia" << endl << endl;
				cout << "======================================" << endl;
				cout << "ID		Nama		NRP" << endl;
				cout << "======================================" << endl;
				for (unsigned i=0; i<recMhs.size(); i++){
					cout << recMhs[i].getId() << ". " << recMhs[i].getNama() << "\t" << recMhs[i].getNRP() << endl;
				}
				cout << "======================================" << endl << "Silahkan pilih salah satu" << endl;
				cout << "1. Informasi lebih lanjut untuk salah satu mahasiswa" << endl;
				cout << "2. Kembali ke menu utama" << endl;
				cin >> menu_terpilih;
				switch (menu_terpilih)
				{
				case 1:
				{
					cout << "Masukkan ID Mahasiswa untuk informasi lebih lanjut" << endl;
					cin >> idSementara; idSementara -= 1;
					cout << "Nama			:" << recMhs[idSementara].getNama() << endl;
					cout << "Tanggal Lahir		:" << recMhs[idSementara].getTglLahir() << " - " << recMhs[idSementara].getBulanLahir() << " - "<< recMhs[idSementara].getTahunLahir() << endl;
					cout << "NRP			:" << recMhs[idSementara].getNRP() << endl;
					cout << "Departemen		:" << recMhs[idSementara].getDepartemen() << endl;
					cout << "Tahun Masuk		:" << recMhs[idSementara].getTahunMasuk() << endl;
					cout << "Semester saat ini	:" << recMhs[idSementara].getSemester() << endl << endl;
					cout << "Silahkan memilih salah satu" << endl;
					cout << "1. Edit data" << endl;
					cout << "2. Kembali ke List Mahasiswa" << endl;
					cout << "3. Kembali ke Menu Utama" << endl << endl;
					cin >> menu_terpilih;
					switch (menu_terpilih)
					{
					case 1:
					cout << endl << "Silahkan pilih data yang akan diubah" << endl;
					cout << "1. Nama" << endl;
					cout << "2. Tanggal Lahir" << endl;
					cout << "3. NRP" << endl;
					cout << "4. Departemen" << endl;
					cout << "5. Tahun Masuk" << endl;
					cout << "6. Semester saat ini" << endl << endl;
					cin >> menu_terpilih;
						switch(menu_terpilih){
							case 1:
							{
								cout << "Silahkan masukkan Nama Mahasiswa" << endl;
								cin.ignore();
								getline(cin, namaMhs);
								recMhs[idSementara].setNama(namaMhs);
							}
							break;
							case 2:
							{
								cout << "Silahkan masukkan Tanggal Lahir Mahasiswa dengan format DD MM YY" << endl;
								cin >> dd >> mm >> yy;
								recMhs[idSementara].setTglLahir(dd, mm, yy);
							}
							break;
							case 3:
							{
								cout << "Silahkan masukkan NRP Mahasiswa" << endl;
								cin >> nrp;
								recMhs[idSementara].setNRP(nrp);
							}
							break;
							case 4:
							{
								cout << "Silahkan masukkan Departemen Mahasiswa" << endl;
								cin.ignore();
								getline(cin, departemen);
								recMhs[idSementara].setDepartemen(departemen);
							}
							break;
							case 5:
							{
								cout << "Silahkan masukkan Tahun Masuk Mahasiswa" << endl;
								cin >> tahunmasuk;
								recMhs[idSementara].setTahunMasuk(tahunmasuk);
							}
							break;
							case 6:
							{
								cout << "Silahkan masukkan Semester Mahasiswa saat ini" << endl;
								cin >> semesterke;
								recMhs[idSementara].setSemester(semesterke);
							}
							break;
							default:
							break;
						}
						break;
					case 2: {goto listMhs;} break;
					case 3: {goto menuutama;} break;
					default:
						{
							cout << "Menu yang dipilih salah, tekan tombol Enter untuk kembali ke menu sebelumnya" << endl;
							cin.ignore(); cin.ignore();
							goto listMhs;
						}
						break;
					}
				}
					break;
				
				case 2:
				{goto menuutama;} break;

				default:
				cout << "Menu yang dipilih tidak tersedia atau salah, kembali ke menu utama. Tekan Enter untuk lanjut" << endl;
				cin.ignore(); cin.ignore();

				}

			}
				break;
			case 6:{
				listDsn:
				system("cls") && system("clear");
				if (recDosen.size() == 0){
					cout << "Tidak ada data Dosen yang tersedia, tekan tombol apa saja untuk kembali ke menu utama" << endl;
					cin.ignore(); cin.ignore();
					break;
				}
				cout << endl << "List Dosen Yang Tersedia" << endl << endl;
				cout << "======================================" << endl;
				cout << "ID		Nama		NPP" << endl;
				cout << "======================================" << endl;
				for (unsigned i=0; i<recDosen.size(); i++){
					cout << recDosen[i].getId() << ". " << recDosen[i].getNama() << "\t" << recDosen[i].getNPP() << endl;
				}
				cout << "======================================" << endl << "Silahkan pilih salah satu" << endl;
				cout << "1. Informasi lebih lanjut untuk salah satu dosen" << endl;
				cout << "2. Kembali ke menu utama" << endl;
				cin >> menu_terpilih;
				switch (menu_terpilih)
				{
				case 1:
				{
					cout << "Masukkan ID Dosen untuk informasi lebih lanjut" << endl;
					cin >> idSementara; idSementara -= 1;
					cout << "Nama			:" << recDosen[idSementara].getNama() << endl;
					cout << "Tanggal Lahir		:" << recDosen[idSementara].getTglLahir() << " - " << recDosen[idSementara].getBulanLahir() << " - "<< recDosen[idSementara].getTahunLahir() << endl;
					cout << "NPP			:" << recDosen[idSementara].getNPP() << endl;
					cout << "Departemen		:" << recDosen[idSementara].getDepartemen() << endl;
					cout << "Pendidikan Terakhir	:" << recDosen[idSementara].getPendidikan() << endl << endl;
					cout << "Silahkan memilih salah satu" << endl;
					cout << "1. Edit data" << endl;
					cout << "2. Kembali ke List Dosen" << endl;
					cout << "3. Kembali ke Menu Utama" << endl << endl;
					cin >> menu_terpilih;
					switch (menu_terpilih)
					{
					case 1:
					cout << endl << "Silahkan pilih data yang akan diubah" << endl;
					cout << "1. Nama" << endl;
					cout << "2. Tanggal Lahir" << endl;
					cout << "3. NPP" << endl;
					cout << "4. Departemen" << endl;
					cout << "5. Pendidikan Terakhir" << endl << endl;
					cin >> menu_terpilih;
						switch(menu_terpilih){
							case 1:
							{
								cout << "Silahkan masukkan Nama Dosen" << endl;
								cin.ignore();
								getline(cin, namaDsn);
								recDosen[idSementara].setNama(namaDsn);
							}
							break;
							case 2:
							{
								cout << "Silahkan masukkan Tanggal Lahir Mahasiswa dengan format DD MM YY" << endl;
								cin >> dd >> mm >> yy;
								recDosen[idSementara].setTglLahir(dd, mm, yy);
							}
							break;
							case 3:
							{
								cout << "Silahkan masukkan NPP Dosen" << endl;
								cin >> npp;
								recDosen[idSementara].setNPP(npp);
							}
							break;
							case 4:
							{
								cout << "Silahkan masukkan Departemen Dosen" << endl;
								cin.ignore();
								getline(cin, departemen);
								recDosen[idSementara].setDepartemen(departemen);
							}
							break;
							case 5:
							{
								cout << "Silahkan masukkan Pendidikan Terakhir Dosen" << endl;
								cin.ignore();
								getline(cin, pendidikan);
								recDosen[idSementara].setPendidikan(pendidikan);
							}
							break;
							default:
							break;
						}
						break;
					case 2: {goto listDsn;} break;
					case 3: {goto menuutama;} break;
					default:
						{
							cout << "Menu yang dipilih salah, tekan tombol Enter untuk kembali ke menu sebelumnya" << endl;
							cin.ignore(); cin.ignore();
							goto listDsn;
						}
						break;
					}
				}
					break;
				
				case 2:
				{goto menuutama;} break;

				default:
				cout << "Menu yang dipilih tidak tersedia atau salah, kembali ke menu utama. Tekan Enter untuk lanjut" << endl;
				cin.ignore(); cin.ignore();

				}

			}
				break;
			case 7:{
				listTdk:
				system("cls") && system("clear");
				if (recTendik.size() == 0){
					cout << "Tidak ada data Tendik yang tersedia, tekan tombol apa saja untuk kembali ke menu utama" << endl;
					cin.ignore(); cin.ignore();
					break;
				}
				cout << endl << "List Tendik Yang Tersedia" << endl << endl;
				cout << "======================================" << endl;
				cout << "ID		Nama		NPP" << endl;
				cout << "======================================" << endl;
				for (unsigned i=0; i<recTendik.size(); i++){
					cout << recTendik[i].getId() << ". " << recTendik[i].getNama() << "\t" << recTendik[i].getNPP() << endl;
				}
				cout << "======================================" << endl << "Silahkan pilih salah satu" << endl;
				cout << "1. Informasi lebih lanjut untuk salah satu tendik" << endl;
				cout << "2. Kembali ke menu utama" << endl;
				cin >> menu_terpilih;
				switch (menu_terpilih)
				{
				case 1:
				{
					cout << "Masukkan ID Tendik untuk informasi lebih lanjut" << endl;
					cin >> idSementara; idSementara -= 1;
					cout << "Nama			:" << recTendik[idSementara].getNama() << endl;
					cout << "Tanggal Lahir		:" << recTendik[idSementara].getTglLahir() << " - " << recTendik[idSementara].getBulanLahir() << " - "<< recTendik[idSementara].getTahunLahir() << endl;
					cout << "NPP			:" << recTendik[idSementara].getNPP() << endl;
					cout << "Unit			:" << recTendik[idSementara].getUnit() << endl << endl;
					cout << "Silahkan memilih salah satu" << endl;
					cout << "1. Edit data" << endl;
					cout << "2. Kembali ke List Tendik" << endl;
					cout << "3. Kembali ke Menu Utama" << endl << endl;
					cin >> menu_terpilih;
					switch (menu_terpilih)
					{
					case 1:
					cout << endl << "Silahkan pilih data yang akan diubah" << endl;
					cout << "1. Nama" << endl;
					cout << "2. Tanggal Lahir" << endl;
					cout << "3. NPP" << endl;
					cout << "4. Unit" << endl << endl;
					cin >> menu_terpilih;
						switch(menu_terpilih){
							case 1:
							{
								cout << "Silahkan masukkan Nama Tendik" << endl;
								cin.ignore();
								getline(cin, namaTdk);
								recTendik[idSementara].setNama(namaTdk);
							}
							break;
							case 2:
							{
								cout << "Silahkan masukkan Tanggal Lahir Mahasiswa dengan format DD MM YY" << endl;
								cin >> dd >> mm >> yy;
								recTendik[idSementara].setTglLahir(dd, mm, yy);
							}
							break;
							case 3:
							{
								cout << "Silahkan masukkan NPP Tendik" << endl;
								cin >> npp;
								recTendik[idSementara].setNPP(npp);
							}
							break;
							case 4:
							{
								cout << "Silahkan masukkan Unit" << endl;
								cin.ignore();
								getline(cin, unit);
								recTendik[idSementara].setUnit(unit);
							}
							break;
							default:
							break;
						}
						break;
					case 2: {goto listTdk;} break;
					case 3: {goto menuutama;} break;
					default:
						{
							cout << "Menu yang dipilih salah, tekan tombol Enter untuk kembali ke menu sebelumnya" << endl;
							cin.ignore(); cin.ignore();
							goto listDsn;
						}
						break;
					}
				}
					break;
				
				case 2:
				{goto menuutama;} break;

				default:
				cout << "Menu yang dipilih tidak tersedia atau salah, kembali ke menu utama. Tekan Enter untuk lanjut" << endl;
				cin.ignore(); cin.ignore();

				}
			}
				break;
			case 8:
			{
				listMK:
				system("cls") && system("clear");
				if (recMataK.empty()){
					cout << "Tidak ada data Mata Kuliah yang tersedia, tekan tombol apa saja untuk kembali ke menu utama" << endl;
					cin.ignore(); cin.ignore();
					break;
				}
				cout << endl << "List Mata Kuliah Yang Tersedia" << endl << endl;
				cout << "========================================================================" << endl;
				cout << "ID		Nama MK		Kode MK   SKS   Tersedia pada semester" << endl;
				cout << "========================================================================" << endl;
				for (unsigned i=0; i<recMataK.size(); i++){
					cout << recMataK[i].getID() << ". \t" << recMataK[i].getNamaMatkul() << "\t" << recMataK[i].getKode() << "\t   " << recMataK[i].getSks() << "\t\t" << recMataK[i].getSMS() << endl;
				}
				cout << "========================================================================" << endl << "Silahkan pilih salah satu" << endl;
				cout << "1. Ubah data" << endl;
				cout << "2. Kembali ke menu utama" << endl;
				cin >> menu_terpilih;
				switch(menu_terpilih)
				{
					case 1:
					{
						cout << "Silahkan pilih Mata Kuliah yang ingin diubah" << endl;
						for (int i=0; i < recMataK.size(); i++){
							cout << recMataK[i].getID() << "\t" << recMataK[i].getNamaMatkul() << endl;
						}
						cin >> menu_terpilih;

						cout << " Silahkan pilih data yang ingin diubah" << endl;
						cout << "1. Nama Mata Kuliah" << endl;
						cout << "2. Kode Mata Kuliah" << endl;
						cout << "3. SKS" << endl;
						cout << "4. Tersedia untuk semester ke-" << endl << endl;

						cin >> menu_2;
						switch (menu_2)
						{
						case 1:
						{
							cout << "Masukkan Nama Mata Kuliah" << endl;
							getline(cin, namaMatK);
							recMataK[menu_terpilih].setNamaMatkul(namaMatK);
						}
						break;
						case 2:
						{
							cout << "Masukkan Kode Mata Kuliah" << endl;
							cin >> kodeMatK;
							recMataK[menu_terpilih].setKode(kodeMatK);
						}
						case 3:
						{
							cout << "Masukkan SKS" << endl;
							cin >> sksMatK;
							recMataK[menu_terpilih].setSks(sksMatK);
						}
						case 4:
						{
							cout << "Masukkan Semester Mata Kuliah" << endl;
							cin >> smsMatK;
							recMataK[menu_terpilih].setSMS(smsMatK);
						}
						default:
							{
								cout << "Input salah, kembali ke menu utama" << endl;
								cin.ignore();
								goto menuutama;
							}
							break;
						}
					}
					break;
					case 2: {goto menuutama;} break;
				}
			}
			break;
			case 9:
			{
				cout << "Terima kasih telah menggunakan SIAKAD Universitas KW. Sampai Jumpa" << endl;
				cin.ignore(); cin.ignore();
				exit(1);
			}
			default:
			cout << "Menu yang dipilih tidak tersedia atau salah, kembali ke menu utama. Tekan Enter untuk lanjut" << endl;
			cin.ignore();
		}
	}
	cout << endl << endl;
	return 0;
}
