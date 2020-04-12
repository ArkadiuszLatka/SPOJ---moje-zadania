
#include <iostream>

using namespace std;

void tablica(int ileLiczbWTablicy,int tablicaLiczb[])
{


    for(int i =0; i<ileLiczbWTablicy; i++)
    {
        cin>>tablicaLiczb[i];
    }

}
void odwrocKolejnosc(int ileLiczbWTablicy,int tablicaLiczb[])
{
       for (int j=ileLiczbWTablicy-1; j>=0; j--)
            {
                cout<<tablicaLiczb[j]<<" ";
            }
        cout<<endl;
}

int main()
{
    int ileTestow;
    cin>>ileTestow;
    for(int i = 0; i<ileTestow; i++)
    {
        int ileLiczbWTablicy ;
        cin>>ileLiczbWTablicy;
        int tablicaLiczb[ileLiczbWTablicy];

        tablica(ileLiczbWTablicy,tablicaLiczb);
        odwrocKolejnosc(ileLiczbWTablicy,tablicaLiczb);
    }
    return 0;
}
