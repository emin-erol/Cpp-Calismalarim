#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main(){   // calloc kullanimiyla arasindaki fark katsayinin yanina virgul koyulmasidir.
	int *p;
	int n=4;
	p = (int *)malloc(n*sizeof(int)); // bellekte int boyutunda n tane degisken icin yer aciyoruz
	for(int i=0;i<n;i++){
		p[i] = i+11;          // bellekte yeri acilan degiskenlere degerler veriyoruz
		cout << p[i] << endl;
	}
	free(p);  // Bellekten ayrilan alan serbest birakilir.
	return 0;
}

