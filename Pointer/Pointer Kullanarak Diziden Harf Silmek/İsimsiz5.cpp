#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

int main(){
	char cumle[20];
	char *p,harf;
	printf("Lutfen bir cumle giriniz: ");
	gets(cumle);
	printf("Cumleden kaldirmak istediginiz harfi giriniz: ");
	scanf("%c",&harf);
	for(p=cumle;*p;p++){
		if(harf == *p){
			strcpy(p,p+1);
		}
	}
	printf("Cumlenin yeni hali: %s",cumle);
	return 0;
}

