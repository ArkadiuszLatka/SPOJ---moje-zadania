#include <iostream>
#include <map>
using namespace std;

/*int RomanToDec(map<char,int>rome,string romanNumber)
{
    //int size = romanNumber.size();

    int sum =0;
     for( int i =0;i<romanNumber.size();i ++)

    {
        for( map < char, int >::iterator itr = rome.begin(); itr != rome.end(); itr++ )
        {
            if(romanNumber[i] == itr->first )
            {
                 sum += itr->second;

            }
            else if (i<romanNumber.size() -1 && romanNumber[i] ==itr->first&&romanNumber[i+2]==itr->second)
        {
                sum =itr->second;
                //i+=2;
        }
            else
                itr->second;
        }
    }

    return sum;
}*/
int RomanToDec(map<char,int>rome,string romanNumber)
{
    int r =0;//p=0;
    for (int i =0;i< romanNumber.length() - 1; i ++) {
            int cur = rome[romanNumber[i]];
            int next = rome[romanNumber[i + 1]];
            if (cur >= next) {
                r += cur;
            } else {
                r -= cur;
            }
            //p=cur;
        }
        return r + rome[romanNumber[romanNumber.length() - 1]];


}


string DecToRoman(map<char,int>rome,int suma)
{

    map < char, int >::reverse_iterator iter;
    string result = "";
   for( iter = rome.rbegin(); iter != rome.rend(); ++iter )
    {
    for( int i =0;i<suma; i++ ) {
        if( suma >= iter->second )
        {
            suma -= iter->second;
            result += iter->first;
        }
        else if ( iter != rome.rend() )
             ++iter;
         }
    }
    return result;
}


int main()
{
    string firstRomanLetter , secondRomanLetter ;
    map < char, int > rome;
    map < int, string >::iterator itr;

    rome[ 'M' ] = 1000;
    rome[ 'D'] = 500;
    rome[ 'C' ] = 100;
    rome[ 'L' ] =  50;
    rome[ 'X' ] = 10;
    rome[ 'V'] = 5;
    rome[ 'I' ] = 1;

     cin>> firstRomanLetter;
     RomanToDec(rome,firstRomanLetter);
     cin >> secondRomanLetter;
     RomanToDec(rome,secondRomanLetter);

      int suma;
      suma= RomanToDec(rome,firstRomanLetter) +RomanToDec(rome,secondRomanLetter);
      cout<<suma;
      DecToRoman(rome,suma);
      cout<<DecToRoman(rome,suma);
    return 0;
}
