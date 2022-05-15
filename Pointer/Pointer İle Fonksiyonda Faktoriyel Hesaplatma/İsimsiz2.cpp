#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int faktoriyel(int *a){
	int i,sonuc=1;
	for(i=*a;i>1;i--){
		sonuc *= i;
	}
	return sonuc;
}

int main(){
	int a;
	printf("Lutfen bir sayi giriniz: ");
	scanf("%d",&a);
	printf("Sayinin faktoriyeli: %d",faktoriyel(&a));
	return 0;
}

