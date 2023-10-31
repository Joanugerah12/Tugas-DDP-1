#include <iostream>

using namespace std;

int main(){
	int baris,kolom,atas;

	cout<<"masukan jumlah garis atas : ";
	cin>>atas;
	
	cout<<"masukkan jumlah baris :";
	cin>>baris;

	cout<<"masukkan jumlah kolom :";
	cin>>kolom;
	
	for(int Q= 1; Q<=baris; Q++){
		cout<<" __ ";
	}
	cout<<endl;
	
	for(int O= 1; O<=baris; O++){
		for(int P=1; P <=kolom; P++){
			cout<<"|__|";
		}
		cout<<endl;
	}
	return 0;

}
