#include<iostream>
using namespace std;

int faktoriyel_hesapla(int x){
    int sayi=1;
    for (int i=1; i<=x; i++) {
        sayi*=i;
    }
    return sayi;
}


 int main()
{
     int faktoriyel;
     cout<<"Sayi giriniz:";
     cin>>faktoriyel;
     cout<<"Sayinin faktoryeli:"<<faktoriyel_hesapla(faktoriyel)<<endl;
}
