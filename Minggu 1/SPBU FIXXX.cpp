//ini versi milik saya sendiri hasil modifikasi dari file se-tim saya
//2100018065 - ihtiar nur furqon
#include<iostream>
#include<fstream>
using namespace std;

class bensin{
	public:
		bensin();
		void pilihan();
		void cetak();
		
	private:
		ofstream file;
		string nama, jenis;
		int pil;
		double harga, jumlah, lit, pertalite, pertamax;
};

bensin::bensin(){
	pertamax = 9000;
	pertalite = 7000;
}
void bensin::pilihan(){
	cout<<"Nama Pembeli		: "; getline(cin, nama); 
	cout<<endl;
	cout<<"Pilih jenis bensin : "<<endl;
	cout<<"1. Pertalite 7000/liter "<<endl;
	cout<<"2. Pertamax  9000/liter "<<endl;
	cout<<"Pilihan			: ";
	
	cin>>pil;
	if(pil==1){	
		harga = pertalite;
		jenis="Pertalite ";
	}else if(pil==2){
		harga=pertamax;
		jenis="Pertamax ";
	}else {
		cout<<"Pilihan anda salah ";
	}
	cout<<endl;
	cout<<"Berapa liter		: "; cin>>lit;
	jumlah = harga * lit;
	cout<<endl;
	cout<<"Jumlah yang anda bayar adalah : "<<jumlah<<endl;
	cetak();
}


void bensin::cetak(){
	file.open("struk.txt");
	file<<"Nama Pembeli		: "<<nama<<endl;
	file<<"Jenis bensin		: "<< jenis<<endl;
	file<<"Total liter		: "<<lit<<endl;
	file<<"Total Harga		: "<<jumlah<<endl;
	system("START/MIN NOTEPAD struk.txt");
}
int main(){
	bensin x;
	x.pilihan();
}
