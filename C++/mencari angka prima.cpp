#include <iostream>
using namespace std;

int main(){
	int nomor;
	int hitungan=0;
	char perulangan;
	do {
	cout <<"masukkan nomor yang ingin dicek :";
	cin >>nomor;
	
	for(int a=1;a <= nomor;a++) {
		if(nomor % a ==0) {
			hitungan++;
		}
	}
	if(hitungan==2){
		cout<<"ini angka prima"<<endl;
	} else {
		cout<<"ini angka bukan prima"<<endl;
	}
	cout <<"ulangi?(y/n)";
	cin >>perulangan;
} while (perulangan == 'y');
	return 0;
}
