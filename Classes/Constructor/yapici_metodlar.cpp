#include <iostream>
#include <string.h>
using namespace std;

class Ogrenci{ // Constructor, bir obje oluşturulduğunda ona ilk değer atamamızı sağlar.
    private:
        string isim;
        int no;
    public:
        Ogrenci(string YazilacakIsim,int YazilacakNo){ // Yapıcı metod ile ilk değerler direkt olarak atanıyor
            isim = YazilacakIsim;
            no = YazilacakNo;
        }
        void SetIsim(string YazilacakIsim){
            if(YazilacakIsim.size() >= 3) isim = YazilacakIsim;
            else cout << "Lutfen gecerli bir isim giriniz! " << endl;
        }
        void SetNo(int YazilacakNo){
            if(YazilacakNo > 0) no = YazilacakNo;
            else cout << "Lutfen gecerli bir sayi giriniz! " << endl;
        }
        void BilgileriGoster(){
            cout << "Isim: " << isim << endl << "No: " << no << endl;
        }
        string GetIsim(){
            return isim;
        }
        int GetNo(){
            return no;
        }
};

int main(){
    Ogrenci ogr1("Emin Erol",2037); // Constructor metodu ile bu şekilde yazmamız yeterli oluyor.
    ogr1.BilgileriGoster();
    return 0;
}