#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main(){
	int i,j,a[5],b[5],birlesik[10];
	for(i=0,j=0;i<5,j<5;i++,j++){
		a[i] = rand()%50;
		b[j] = rand()%50;
	}
	printf("A Dizisi: ");
	for(i=0;i<5;i++){
		printf("%d  ",*(a+i));
	}
	printf("\nB Dizisi: ");
	for(i=0;i<5;i++){
		printf("%d  ",*(b+i));
	}
	for(i=0;i<10;i++){
		if(i<=4){
			birlesik[i] = *(a+i);
		}
		else {
			birlesik[i] = *(b+i-5);
		}
	}
	printf("\nBirlesik Dizi: ");
	for(i=0;i<10;i++){
		printf("%d  ",birlesik[i]);
	}
	return 0;
}





