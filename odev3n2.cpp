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
        cout << "Birinci ogrenci numaralarý ile ikinci ogrenci numaralarý ayný olmalý";
    }
    return 0;
}
