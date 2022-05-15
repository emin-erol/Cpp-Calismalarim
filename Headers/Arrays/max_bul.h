#include <iostream>
class BuyukBul{
    public:
        int Bul(int dizi[],int adet){
            int i,maks=dizi[0];
            for(i=0;i<adet;i++){
                if(dizi[i] > maks) maks = dizi[i];
            }
            return maks;
        }
};