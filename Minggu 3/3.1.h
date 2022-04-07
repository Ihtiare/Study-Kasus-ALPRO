#include<iostream>
#include<fstream>
using namespace std;
class ba{

	public :
		float input();
		float proses();
	private :
		ofstream file;
		float total[10], sub,banyak, totall;
		int a[10], b[10], c[10], x,i, harga;

};
float ba::input(){
	
	cout << "Menu Rumah makan : "<<endl;
	cout<<"1. Ayam Geprek = 21000 "<<endl;
	cout<<"2. Ayam Goreng = 17000 "<<endl;
	cout<<"3. Udang Goreng = 19000 "<<endl;
	cout<<"4. Cumi Goreng = 20000 "<<endl;
	cout<<"5. Ayam Bakar = 25000 "<<endl;
	cout << "Mau pesan berapa item : ";
	cin>>x;
	
	for(i=0; i<x; i++){
		cout<<endl;
		cout<<"Item ke "<<i+1<<endl;
		cout<<"Masukkan Pilihan Anda : ";
		cin >> a[i];
		cout<<"Berapa banyak : "; 
		cin >> b[i];
		cout<<"Jarak Rumah Anda Satuan KM: ";
		cin >> c[i];
		cout<<endl;
	}

}
float ba::proses(){
	for(i=0; i<x; i++){
	
		if(a[i]==1){
		harga=21000;
		banyak=harga*b[i];
		if(c[i]<3){

			if(banyak<=25000){
				total[i]=banyak+15000;
			} else if((banyak>25000)&&(banyak<=50000)){
				total[i]=banyak+12000;
			} else if((banyak>50000)&&(banyak<=150000)){
				sub=banyak*15/100;
				total[i]=(banyak-sub)+10000;
			} else if(banyak>150000){
				sub=banyak*35/100;
				total[i]=(banyak-sub)+7000;
			}
	
		} 
		else if(c[i]>=3){
			if(banyak<=25000){
				total[i]=banyak+25000;
			} else if((banyak>25000)&&(banyak<=50000)){
				total[i]=banyak+22000;
			} else if((banyak>50000)&&(banyak<=150000)){
				sub=banyak*15/100;
				total[i]=(banyak-sub)+20000;
			} else if(banyak>150000){
				sub=banyak*35/100;
				total[i]=(banyak-sub)+14000;
			}	
			
		}
		
	} else if(a[i]==2){
		harga=17000;
		banyak=harga*b[i];
		if(c[i]<3){

			if(banyak<=25000){
				total[i]=banyak+15000;
			} else if((banyak>25000)&&(banyak<=50000)){
				total[i]=banyak+12000;
			} else if((banyak>50000)&&(banyak<=150000)){
				sub=banyak*15/100;
				total[i]=(banyak-sub)+10000;
			} else if(banyak>150000){
				sub=banyak*35/100;
				total[i]=(banyak-sub)+7000;
			}
	
		} 
		else if(c[i]>=3){
			if(banyak<=25000){
				total[i]=banyak+25000;
			} else if((banyak>25000)&&(banyak<=50000)){
				total[i]=banyak+22000;
			} else if((banyak>50000)&&(banyak<=150000)){
				sub=banyak*15/100;
				total[i]=(banyak-sub)+20000;
			} else if(banyak>150000){
				sub=banyak*35/100;
				total[i]=(banyak-sub)+14000;
			}	
			
		}
		
	} else if(a[i]==3){
		harga=19000;
		banyak=harga*b[i];
		if(c[i]<3){

			if(banyak<=25000){
				total[i]=banyak+15000;
			} else if((banyak>25000)&&(banyak<=50000)){
				total[i]=banyak+12000;
			} else if((banyak>50000)&&(banyak<=150000)){
				sub=banyak*15/100;
				total[i]=(banyak-sub)+10000;
			} else if(banyak>150000){
				sub=banyak*35/100;
				total[i]=(banyak-sub)+7000;
			}
	
		} 
		else if(c[i]>=3){
			if(banyak<=25000){
				total[i]=banyak+25000;
			} else if((banyak>25000)&&(banyak<=50000)){
				total[i]=banyak+22000;
			} else if((banyak>50000)&&(banyak<=150000)){
				sub=banyak*15/100;
				total[i]=(banyak-sub)+20000;
			} else if(banyak>150000){
				sub=banyak*35/100;
				total[i]=(banyak-sub)+14000;
			}	
			
		}
		
	}else if(a[i]==4){
		harga=20000;
		banyak=harga*b[i];
		if(c[i]<3){

			if(banyak<=25000){
				total[i]=banyak+15000;
			} else if((banyak>25000)&&(banyak<=50000)){
				total[i]=banyak+12000;
			} else if((banyak>50000)&&(banyak<=150000)){
				sub=banyak*15/100;
				total[i]=(banyak-sub)+10000;
			} else if(banyak>150000){
				sub=banyak*35/100;
				total[i]=(banyak-sub)+7000;
			}
	
		} 
		else if(c[i]>=3){
			if(banyak<=25000){
				total[i]=banyak+25000;
			} else if((banyak>25000)&&(banyak<=50000)){
				total[i]=banyak+22000;
			} else if((banyak>50000)&&(banyak<=150000)){
				sub=banyak*15/100;
				total[i]=(banyak-sub)+20000;
			} else if(banyak>150000){
				sub=banyak*35/100;
				total[i]=(banyak-sub)+14000;
			}	
			
		}
		
	} else if(a[i]==5){
		harga=25000;
		banyak=harga*b[i];
		if(c[i]<3){

			if(banyak<=25000){
				total[i]=banyak+15000;
			} else if((banyak>25000)&&(banyak<=50000)){
				total[i]=banyak+12000;
			} else if((banyak>50000)&&(banyak<=150000)){
				sub=banyak*15/100;
				total[i]=(banyak-sub)+10000;
			} else if(banyak>150000){
				sub=banyak*35/100;
				total[i]=(banyak-sub)+7000;
			}
	
		} 
		else if(c[i]>=3){
			if(banyak<=25000){
				total[i]=banyak+25000;
			} else if((banyak>25000)&&(banyak<=50000)){
				total[i]=banyak+22000;
			} else if((banyak>50000)&&(banyak<=150000)){
				sub=banyak*15/100;
				total[i]=(banyak-sub)+20000;
			} else if(banyak>150000){
				sub=banyak*35/100;
				total[i]=(banyak-sub)+14000;
			}	
			
		}
		
	}
}
	for(i=0; i<x; i++){
		
		cout<<"Pilihan menu  = "<<a[i]<<endl;
		cout<<"banyak barang = "<<b[i]<<endl;
		cout<<"Jarak = "<<c[i]<<endl;
		cout<<"Total : "<<total[i]<<endl;
		cout<<endl;
	}
	
	file.open("struk.txt");
	for(i=0; i<x; i++){
		cout<<"Item ke "<<i+1<<endl;
		file<<"Pilihan menu 		: "<<a[i]<<endl;
		file<<"Banyak Barang		: "<<b[i]<<endl;
		file<<"Jarak			: "<<c[i]<<" KM"<<endl;
		file<<"Total			: "<<total[i]<<endl;
		file<<endl;
	}
	system("START/MIN NOTEPAD struk.txt");
}
