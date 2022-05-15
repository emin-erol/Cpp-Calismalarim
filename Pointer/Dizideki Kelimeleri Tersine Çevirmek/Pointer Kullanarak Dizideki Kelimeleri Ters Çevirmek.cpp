#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

int main(){
	int i,j,k,m,n;
	char kelime[5][20],gecici;
	for(i=0;i<5;i++){
		printf("Lutfen %d. kelimeyi giriniz: ",i+1);
		gets(kelime[i]);
	}
	for(i=0;i<5;i++){
		if(strlen(kelime[i])%2 == 1){
			for(j=0,k=strlen(kelime[i])-1;j<strlen(kelime[i])/2+1,k>=(strlen(kelime[i])-1)/2+1;j++,k--){
				gecici = kelime[i][j];
				kelime[i][j] = kelime[i][k];
				kelime[i][k] = gecici;
			}
		}
		else {
			for(m=0,n=strlen(kelime[i])-1;m<=strlen(kelime[i])/2,n>=strlen(kelime[i])/2;m++,n--){
				gecici = kelime[i][m];
				kelime[i][m] = kelime[i][n];
				kelime[i][n] = gecici;
			}
		}
	}
	printf("Kelimelerin yeni hali: \n");
	for(i=0;i<5;i++){
		printf("%d. kelime: %s\n",i+1,kelime[i]);
	}
	return 0;
}

