#include<iostream>
#include<fstream>
using namespace std;
class proses{

private:
ifstream ambil_data;
ofstream file;
float sawal[20], keluar[20], lagi, sub[20], total[20], tabung[20];
	int i,j, bulan;
  
 

public:
void ambil(){
  ambil_data.open("api.txt");
    ambil_data >> bulan;
  ambil_data.close();
  cout<<"Menghitung bulan : "<<bulan<<endl;
  }
void rumus(){
  j=0;
for(i=0; i<bulan; i++){
		cout<<endl;
		cout<<"Bulan ke "<<i+1<<endl;
		cout<<"Masukkan soldo anda bulan ini: Rp."; cin>>sawal[i];
		cout<<"Berapa Item pada bulan ini : "; cin>>lagi;
		for(j=0; j<lagi; j++){
			cout<<"Item ke "<<j+1<<" : Rp.";
			cin>>keluar[j];
			sub[i]+=keluar[j];
		}	
		cout<<"Pengeluaran bulan ini : "<<sub[i]<<endl;
		cout<<"Tabung bulan ini : "; cin>>tabung[i];
		cout<<"Tabung : "<<tabung[i]<<endl;
		total[i]=sawal[i]-sub[i]+tabung[i];
		cout<<"Total Bulan ini : "<<total[i]<<endl;
	}
  cout<<endl;
}

void cetak(){
  	file.open("api.txt");
	for(i=0; i<bulan; i++){
		file<<sawal[i]<<endl;
		file<<sub[i]<<endl;
		file<<tabung[i]<<endl;
		file<<total[i]<<endl;
	}
	file.close();
}


};