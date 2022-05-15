#include <iostream>
using namespace std;

class MaxBul{
    public:
        void Yazdir(int dizi[],int adet){
            int i;
            cout << "Dizinin orijinal hali: ";
            for(i=0;i<adet;i++){
                cout << dizi[i] << "  ";
            }
            cout << endl;
        }
        void Sirala(int dizi[],int adet){
            int i,j,gecici;
            for(i=0;i<adet;i++){
                for(j=i;j<adet;j++){
                    if(dizi[i] > dizi[j]){
                        gecici = dizi[i];
                        dizi[i] = dizi[j];
                        dizi[j] = gecici;
                    }
                }
            }
            cout << "Dizinin Siralanmis Hali: ";
            for(i=0;i<adet;i++){
                cout << dizi[i] << "  ";
            }
            cout << endl;
        }
};