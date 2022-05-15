#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main(){
	char dizi[20];
	char *p;
	printf("Lutfen bir cumle giriniz: ");
	gets(dizi);
	for(p=dizi;*p;p++);
	printf("Cumle %d karakterlidir.",p-dizi);
	return 0;
}

