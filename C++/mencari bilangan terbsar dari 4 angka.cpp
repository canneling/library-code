#include <iostream>
using namespace std;

int main(){
	int data[4];//deklarasi array beranggotakan 4
	int angka_terbesar;
	for(int a=0;a < 4;a++) {
		cout <<"masukkan angka ke "<<a + 1<<":";
		cin  >>data[a];
	}//loop mengambil 4 angka yg akan dibandingkan
	angka_terbesar =data[0];
	for(int a=0;a < 4;a++) {
		if(data[a] < data[a+1]) {
			angka_terbesar =data[a+1];//loop membandingkan data di dalam array dan menstore data terbesar di variabel angka_terbesar;
		}
	}
	cout <<"angka terbesar adalah "<<angka_terbesar;//
}
