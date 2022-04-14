#include<iostream>
#include <fstream>
using namespace std;
class output{
private :
ifstream ambil_data;
string data_file[30];
int index=0;

public :
void cetak(){
		cout<<"Bulan ke 1"<<endl;
		cout<<"Saldo Awal : "<<data_file[0]<<endl;
		cout<<"Pengeluaran bulan ini : "<<data_file[1]<<endl;
		cout<<"Tabungan bulan ini : "<<data_file[2]<<endl;
		cout<<"Saldo total : "<<data_file[3]<<endl;
		cout<<endl;
		cout<<"Bulan ke 2"<<endl;
		cout<<"Saldo Awal : "<<data_file[4]<<endl;
		cout<<"Pengeluaran bulan ini : "<<data_file[5]<<endl;
		cout<<"Tabungan bulan ini : "<<data_file[6]<<endl;
		cout<<"Saldo total : "<<data_file[7]<<endl;
}

void ambil(){
	
ambil_data.open("api.txt");
while(!ambil_data.eof()){
	ambil_data>>data_file[index];
	index +=1;
}
ambil_data.close();
}


};