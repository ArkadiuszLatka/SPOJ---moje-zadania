#include <iostream>

using namespace std;

bool czyToLiczbaPierwsza(int liczba)
{
    if (liczba<2)
        return false;
    for (int i = 2; i*i<=liczba; i++ )

        if (liczba%i ==0)
            return false;

    return true;
}

int main()
{
    int podajLiczbe ;
    int test,wynik;
    cin>>test;
    for(int i =0; i<test; i++)
    {
        cin>>podajLiczbe;
        wynik = czyToLiczbaPierwsza(podajLiczbe);

        if (wynik== true)

            cout <<"TAK"<<endl;

        else

            cout<<"NIE"<<endl;
    }
    return 0;
}
