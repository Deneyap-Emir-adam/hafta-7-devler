#include <iostream>
using namespace std;

int main()
{
    int anotlar[12];
    int bnotlar[12];
    cout << "Ilk yazili numaralarini girin:";
    int i;
    for (i=0;i<12;i++)
    {
        cin >> anotlar[i];
    }
    cout << "Ikinci yazili numaralarini girin:";
    for (i=0;i<12;i++)
    {
        cin >> bnotlar[i];
        if (bnotlar[i]!=anotlar[i])
        cout << "Birinci ogrenci numaralar� ile ikinci ogrenci numaralar� ayn� olmal�";
    }
    return 0;
}
