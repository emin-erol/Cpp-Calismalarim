#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

void Sirala(int baslangic,int N){
	if(baslangic > N){
		exit(0);
	}
	else {
		cout << baslangic << endl;
		Sirala(baslangic+2,N);
	}
}

int main(){
	int n;
	cout << "Bir sayi giriniz: ";
	cin >> n;
	if(n%2 == 1){
		Sirala(1,n);
	}
	else {
		Sirala(1,n-1);
	}
	return 0;
}

