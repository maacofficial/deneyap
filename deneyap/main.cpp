#include <iostream>
#include <string.h>
#include <locale.h>
#include <fstream>

using namespace std;

int main()
{
    setlocale(LC_ALL,"Turkish");
    int ogr;
    cout<<"Öğrenci sayısını giriniz";
    cin >> ogr;
    int puan;
    ofstream dosya;
    dosya.open("deneyap.txt",ios::app);
    for(int x=0;x<ogr;x++){
        cin>>puan;
        dosya << puan << endl;
        
    }
    dosya.close();

    return 0;
}
