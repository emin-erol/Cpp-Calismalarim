#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int R_Carpma(int x,int y){
	int sonuc;
	if(y == 1){
		sonuc = x;
	}
	else {
		sonuc = x + R_Carpma(x,y-1);
	}
	return sonuc;
}

int main(){
	int a,b;
	cout << "Carpilacak 2 sayiyi giriniz: ";
	cin >> a >> b;
	cout << a << " x " << b << " = " << R_Carpma(a,b);
	return 0;
}

