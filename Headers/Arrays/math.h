#include <iostream>
class Hesapla{
    public:
        int Toplam(int dizi[],int adet){
            int i,toplam=0;
            for(i=0;i<adet;i++){
                toplam += dizi[i];
            }
            return toplam;
        }
        int Mod(int dizi[],int adet){
            int i,j,sayac,mod=0,mod_sayisi;
            for(i=0;i<adet;i++){
                sayac = 0;
                for(j=i;j<adet;j++){
                    if(dizi[i] == dizi[j]) sayac++;
                }
                if(sayac > mod){
                    mod = sayac;
                    mod_sayisi = dizi[i];
                }
            }
            return mod_sayisi;
        }
};