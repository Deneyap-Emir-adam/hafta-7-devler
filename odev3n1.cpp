#include <iostream>
using namespace std;

int main()
{
    int notlar[12] {90,56,87,96,39,69,100,69,100,88,89,45};
    float ortalama = 0;
    int i;
    for (i=0;i<12;i++)
    {
        ortalama+=notlar[i];
    }
    cout << ortalama/12;
    return 0;
}
