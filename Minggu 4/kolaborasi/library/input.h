#include<iostream>
#include<fstream>
using namespace std;
class input{
private :
ofstream file;
 float bulan;


public :

void coba(){
  cout<<"Program menampilkan pengeluaran tiap bulan, total pengeluaran, dan uang tabungannya saat ini\n";
	cout<<"Anda ingin menghitung berapa bulan : "; cin>>bulan;
}


void cetak(){
  file.open("api.txt");
  file<< bulan;
  file.close();
}
};