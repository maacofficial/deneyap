#include <iostream>
#include <clocale>
#include <stdio.h>
#include <time.h>
#include <ctime>
#include <cstdlib>
#include <cstring>
#include <string>
#include <fstream>
#include"headers.h"
using namespace std;

int main()
{
    ofstream dosya1,dosya2;
    int b;
    int a;
    dosya1.open("deneyap.doc",ios::app);
    dosya2.open("deneyap.txt",ios::app);
    cout<<"Ogrenci sayisiniz giriniz:\n";
    cin>>a;
    for(int i=0;i<a;i++)
    {
        cout<<i+1<<". degeri giriniz:";
        cin>>b;
        dosya1<<b<<endl;
        dosya2<<b<<endl;
    }

    dosya1.close();
    dosya2.close();
    bitis();
}
