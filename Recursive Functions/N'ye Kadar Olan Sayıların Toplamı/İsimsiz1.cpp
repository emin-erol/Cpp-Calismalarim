#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int n_ye_kadar_topla(int N){
	int toplam = 0;
	if(N == 1){
		return 1;
	}
	else {
		return N + n_ye_kadar_topla(N-1);
	}
}

int main(){
	int n;
	cout << "Lutfen bir sayi giriniz: ";
	cin >> n;
	cout << "Toplam: " << n_ye_kadar_topla(n);
	return 0;
}

