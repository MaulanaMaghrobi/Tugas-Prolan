#include <iostream>
#include <vector>

#include "include/person.hpp"
#include "include/mahasiswa.hpp"
#include "include/dosen.hpp"
#include "include/tendik.hpp"

using namespace std;

int main(int argc, char** argv)
{
	vector<mahasiswa> recMhs;
	vector<dosen> recDosen;
	vector<tendik> recTendik;

	int menu_terpilih;

	while(1) {
		cout << "Selamat datang di Universitas X" << endl << endl;
		cout << "Data statistik:" << endl;
		cout << "  1. Jumlah Mahasiswa             : " << recMhs.size() << " mahasiswa" << endl;
		cout << "  2. Jumlah Dosen                 : " << recDosen.size() << " mahasiswa" << endl;
		cout << "  3. Jumlah Tenaga Kependidikan   : " << recTendik.size() << " mahasiswa" << endl;
		cout << endl;
		cout << "Menu: " << endl;
		cout << "  1. Tambah Mahasiswa" << endl;
		cout << "  2. Tambah Dosen" << endl;
		cout << "  3. Tambah Tenaga Kependidikan" << endl;
		cout << "  4. Tampilkan semua Mahasiswa" << endl;
		cout << "  5. Tampilkan semua Dosen" << endl;
		cout << "  6. Tampilkan semua Tenaga Kependidikan" << endl;
		cout << "-> Silahkan memilih salah satu: ";
		cin >> menu_terpilih;

		switch (menu_terpilih) {
			case 1:{
				string id, nama, nrp, departemen;
				int dd, mm, yy, tahunmasuk;
					cout << "Masukkan ID Anda: ";
					cin >> id;
					cout << "Nama: ";
					cin >> nama;
					cout << "Tanggal lahir: ";
					cin >> dd;
					cout << "Bulan: ";
					cin >> mm;
					cout << "Tahun: ";
					cin >> yy;
					cout << "Masukkan NRP Anda: ";
					cin >> nrp;
					cout << "Departemen: ";
					cin >> departemen;
					cout << "Tahun masuk: ";
					cin >> tahunmasuk;

					mahasiswa mhs(id, nama, dd, mm, yy, nrp, departemen, tahunmasuk);
					recMhs.push_back(mhs);
			}
				break;
			case 2:{
				string id, nama, npp, departemen;
				int dd, mm, yy, pendidikan;
					cout << "Masukkan ID Anda: ";
					cin >> id;
					cout << "Nama: ";
					cin >> nama;
					cout << "Tanggal lahir: ";
					cin >> dd;
					cout << "Bulan: ";
					cin >> mm;
					cout << "Tahun: ";
					cin >> yy;
					cout << "Masukkan NPP Anda: ";
					cin >> npp;
					cout << "Departemen: ";
					cin >> departemen;
					cout << "Pendidikan: ";
					cin >> pendidikan;

					dosen dsn(id, nama, dd, mm, yy, npp, departemen, pendidikan);
					recDosen.push_back(dsn);
			}
				break;
			case 3:{
				string id, nama, npp, unit;
					int dd, mm, yy;
					cout << "Masukkan ID Anda: ";
					cin >> id;
					cout << "Nama: ";
					cin >> nama;
					cout << "Tanggal Lahir: ";
					cin >> dd;
					cout << "Bulan: ";
					cin >> mm;
					cout << "Tahun: ";
					cin >> yy;
					cout << "Masukkan NPP Anda: ";
					cin >> npp;
					cout << "Unit: ";
					cin >> unit;

					tendik tdk(id, nama, dd, mm, yy, npp, unit);
					recTendik.push_back(tdk);
			}
				break;:
			case 4:{
				for (int i = 0; i < recMhs.size(); i++)
					{
						cout <<"Nama: "<<recMhs[i].getNama()<<endl;
						cout <<"Tgl lahir: "<<recMhs[i].getTglLahir()<<"/";
						cout <<recMhs[i].getBulanLahir()<<"/";
						cout <<recMhs[i].getTahunLahir()<<endl;
						cout <<"NRP: "<<recMhs[i].getNRP()<<endl;
						cout <<"Departemen: "<<recMhs[i].getDepartemen()<<endl;
					}
			}
				break;:
			case 5:{
				for (int i = 0; i < recDosen.size(); i++)
					{
						cout <<"Nama: "<<recDosen[i].getNama()<<endl;
						cout <<"Tgl lahir: "<<recDosen[i].getTglLahir()<<"/";
						cout <<recDosen[i].getBulanLahir()<<"/";
						cout <<recDosen[i].getTahunLahir()<<endl;
						cout <<"NRP: "<<recDosen[i].getNPP()<<endl;
						cout <<"Pendidikan: S"<<recDosen[i].getPendidikan()<<endl;
						cout <<"Departemen: "<<recDosen[i].getDepartemen()<<endl<<endl;
					}
			}
				break;:
			case 6:{
				for (int i = 0; i < recTendik.size(); i++)
					{
						cout << "Nama: " << recTendik[i].getNama() << endl;
						cout << "Tgl lahir: " << recTendik[i].getTglLahir() << "/" ;
						cout << recTendik[i].getBulanLahir() << "/" ;
						cout << recTendik[i].getTahunLahir() << endl;
						cout << "NRP: " << recTendik[i].getNPP() << endl;
						cout << "Unit: " << recTendik[i].getUnit() << endl;
					}
			}
				break;:
		}
	}

	return 0;
}
