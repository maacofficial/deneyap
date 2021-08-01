#include <iostream>
#include <string.h>
#include <locale.h>
#include <fstream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "");
    int islem;
    cout << "1 - Günlük Oku" << endl;
    cout << "2 - Günlük Yaz" << endl;
    cin >> islem;
    
    if(islem==1){
        ifstream dosya("deneyap.txt");
        
        if(!dosya.is_open()){
            cout << "Dosya açılamadı!";
            return 0;
        }
        string gunluk;
        while(getline(dosya, gunluk))
            cout << gunluk << endl;
        dosya.close();
        
    }else{
        string input;
        string line;

        while (getline(cin, line))
        {
            if (line == "!finish")
                break;

            input += line + "\n";
        }
        ofstream dosya;
        dosya.open("deneyap.txt");
        dosya << input;
        dosya.close();
    }
    
    
    return 0;
}
