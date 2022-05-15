#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
using namespace std;

struct Koordinat{
	float x,y;
};

int main(){
	Koordinat k1;
	int i;
	float t;
	for(i=1,t=0.0;t<=10;t+=0.1,i++){
		k1.x = 20 - 6*cos(t);
		k1.y = 15 + 2*sin(t);
		if(t == 10){
			cout << "Son Konum -> (" << k1.x << " , " << k1.y << " )" << endl;
		}
		else {
			cout << i << " -> (" << k1.x << " , " << k1.y << " )" << endl;
		}
	}
	return 0;
}

