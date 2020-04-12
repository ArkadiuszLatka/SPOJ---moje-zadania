#include <iostream>

using namespace std;

void tablica(int ileLiczbWTablicy,int tablicaLiczb[])
{


    for(int i =0; i<ileLiczbWTablicy; i++)
    {
        cin>>tablicaLiczb[i];
    }

}
void pozycjeParzysteNaNieparzystychIOdwrotnie(int ileLiczbWTablicy,int tablicaLiczb[])
{
    for (int i=1; i <ileLiczbWTablicy; i=i+2)


    {
        cout<<tablicaLiczb[i]<<" ";
    }

    for (int j=0; j <ileLiczbWTablicy; j=j+2)


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
        pozycjeParzysteNaNieparzystychIOdwrotnie(ileLiczbWTablicy,tablicaLiczb);
    }
    return 0;
}
