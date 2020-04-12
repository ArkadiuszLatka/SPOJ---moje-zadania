#include <iostream>

using namespace std;

int main()
{
   int ileTestow;
    cin>>ileTestow;
    for(int i = 0; i<ileTestow; i++)
    {
        int ileLiczbWTablicy   ;
        cin>>ileLiczbWTablicy;
        int *tablicaLiczb  ;
        tablicaLiczb = new int[ileLiczbWTablicy];

        for(int i =0; i<ileLiczbWTablicy; i++)
        {
            cin>>tablicaLiczb[i];

        }
        for(int j=1; j<ileLiczbWTablicy; j++)
        {

            cout<<tablicaLiczb[j]<<" ";
        }
        cout<<tablicaLiczb[0]<<endl;
    }

    return 0;
}
