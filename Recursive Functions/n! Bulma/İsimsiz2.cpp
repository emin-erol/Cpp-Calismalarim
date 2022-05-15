#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int R_Faktoriyel(int N){
	if(N == 1){
		return 1;
	}
	else {
		return N * R_Faktoriyel(N-1);
	}
}

int main(){
	int n;
	cout << "Lutfen bir sayi giriniz: ";
	cin >> n;
	cout << n << "! = " << R_Faktoriyel(n);
	return 0;
}

