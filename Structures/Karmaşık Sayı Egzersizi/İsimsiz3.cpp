#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

struct KarmasikSayi{
	int a,b;
};

int main(){
	char opr;
	int i;
	KarmasikSayi islem1[3];
	for(i=0;i<2;i++){
		printf("%d. karmasik sayinin gercek ve sanal kismini giriniz: ",i+1);
		scanf("%d %d",&islem1[i].a,&islem1[i].b);
	}
	printf("Lutfen yapilacak islemi giriniz(+ , -): ");
	scanf("%s",&opr);
	if(opr == '+'){
		islem1[2].a = islem1[0].a + islem1[1].a;
		islem1[2].b = islem1[0].b + islem1[1].b;
		printf("%d + %di",islem1[2].a,islem1[2].b);
	}
	if(opr == '-'){
		islem1[2].a = islem1[0].a - islem1[1].a;
		islem1[2].b = islem1[0].b - islem1[1].b;
		printf("%d - %di",islem1[2].a,islem1[2].b);
	}
	return 0;
}

