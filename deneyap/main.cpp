#include <iostream>
using namespace std;

class Hesaplama{
    float kenar;
public:
    void deger_al(){
        cout<<"Kenar uzunlugu:";
        cin>>kenar;
    }
    float cevre_hesapla(){
        return kenar*4;
    }
    float alan_hesapla(){
        return kenar*kenar;
    }
};

int main(void) {
    Hesaplama bahce1,bahce2,bahce3;
    bahce1.deger_al();
    bahce2.deger_al();
    bahce3.deger_al();
    cout<<bahce1.cevre_hesapla()<<endl;
    cout<<bahce2.alan_hesapla()<<endl;
    cout<<bahce3.cevre_hesapla()<<" ve "<<bahce3.alan_hesapla()<<endl;
    
   return 0;
}
