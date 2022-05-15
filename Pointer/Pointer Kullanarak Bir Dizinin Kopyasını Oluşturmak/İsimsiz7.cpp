#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main(){
	char dizi[13] = {'s','e','n','i','s','e','v','i','y','o','r','u','m'};
	char *p1,*p2;
	char kopya[13];
	p2 = kopya;
	int i;
	for(p1=dizi;p1<dizi+13;p1++){
		*p2 = *p1;
		p2++;
	}
	printf("Orijinal dizi: ");
	for(i=0;i<13;i++){
		printf("%c  ",*(dizi+i));
	}
	printf("\nKopya dizi: ");
	for(i=0;i<13;i++){
		printf("%c  ",*(kopya+i));
	}
	return 0;
}

