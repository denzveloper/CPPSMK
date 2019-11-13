#include <iostream>
#include <string>
using namespace std;

int main()
{
    cout<<"v 0.0.1######################################\n";
    cout<<"#DECRYPT IT ON! BY G-TECH BD @ DENZVELOPER  #\n";
    cout<<"#  ~For My Friend Network Screet messages~  #\n";
    cout<<"#############################################\n";
    cout<<"Masukkan Kalimat yang sudah di enkripsi:\n";
    string in;

    getline(cin, in);

    string ctm [ in.length() ];

    for(int i = 0; i < in.length(); i += 1)
    {
        //cHAR
        if(in.at(i)=='Q' || in.at(i)=='q')
            ctm[i]="A";

        else if (in.at(i)=='W' || in.at(i)=='w')
            ctm[i]="B";

        else if (in.at(i)=='E' || in.at(i)=='e')
            ctm[i]="C";

        else if (in.at(i)=='R' || in.at(i)=='r')
            ctm[i]="D";

        else if (in.at(i)=='T' || in.at(i)=='t')
            ctm[i]="E";

        else if (in.at(i)=='Y' || in.at(i)=='y')
            ctm[i]="F";

        else if (in.at(i)=='U' || in.at(i)=='u')
            ctm[i]="G";

        else if (in.at(i)=='I' || in.at(i)=='i')
            ctm[i]="H";

        else if (in.at(i)=='O' || in.at(i)=='o')
            ctm[i]="I";

        else if (in.at(i)=='P' || in.at(i)=='p')
            ctm[i]="J";

        else if (in.at(i)=='A' || in.at(i)=='a')
            ctm[i]="K";

        else if (in.at(i)=='S' || in.at(i)=='s')
            ctm[i]="L";

        else if (in.at(i)=='D' || in.at(i)=='d')
            ctm[i]="M";

        else if (in.at(i)=='F' || in.at(i)=='f')
            ctm[i]="N";

        else if (in.at(i)=='G' || in.at(i)=='g')
            ctm[i]="O";

        else if (in.at(i)=='H' || in.at(i)=='h')
            ctm[i]="P";

        else if (in.at(i)=='J' || in.at(i)=='j')
            ctm[i]="Q";

        else if (in.at(i)=='K' || in.at(i)=='k')
            ctm[i]="R";

        else if (in.at(i)=='L' || in.at(i)=='l')
            ctm[i]="S";

        else if (in.at(i)=='Z' || in.at(i)=='z')
            ctm[i]="T";

        else if (in.at(i)=='X' || in.at(i)=='x')
            ctm[i]="U";

        else if (in.at(i)=='C' || in.at(i)=='c')
            ctm[i]="V";

        else if (in.at(i)=='V' || in.at(i)=='v')
            ctm[i]="W";

        else if (in.at(i)=='B' || in.at(i)=='b')
            ctm[i]="X";

        else if (in.at(i)=='N' || in.at(i)=='n')
            ctm[i]="Y";

        else if (in.at(i)=='M' || in.at(i)=='m')
            ctm[i]="Z";
        //aNGKA
        else if (in.at(i)=='6')
            ctm[i]="1";

        else if (in.at(i)=='5')
            ctm[i]="2";

        else if (in.at(i)=='8')
            ctm[i]="3";

        else if (in.at(i)=='1')
            ctm[i]="4";

        else if (in.at(i)=='2')
            ctm[i]="5";

        else if (in.at(i)=='4')
            ctm[i]="6";

        else if (in.at(i)=='9')
            ctm[i]="7";

        else if (in.at(i)=='0')
            ctm[i]="8";

        else if (in.at(i)=='7')
            ctm[i]="9";

        else if (in.at(i)=='3')
            ctm[i]="0";

        //sYMBOL UMUM
        else if (in.at(i)=='.')
            ctm[i]=" ";

        else if (in.at(i)=='?')
            ctm[i]=",";

        else if (in.at(i)=='!')
            ctm[i]="?";

        else if (in.at(i)=='-')
            ctm[i]="!";

        else if (in.at(i)==' ')
            ctm[i]="-";

        else if (in.at(i)=='@')
            ctm[i]="(";

        else if (in.at(i)=='#')
            ctm[i]=")";

        else if (in.at(i)=='&')
            ctm[i]="@";

        else if (in.at(i)==':')
            ctm[i]='"';

        else if (in.at(i)==';')
            ctm[i]=":";

        else if (in.at(i)=='^')
            ctm[i]="_";

        else if (in.at(i)=='*')
            ctm[i]="+";

        else if (in.at(i)=='$')
            ctm[i]="=";

        else if (in.at(i)=='+')
            ctm[i]="*";

        else if (in.at(i)=='%')
            ctm[i]=".";

            //Terakhir
        else ctm[i]="$Err@Code~"; //Else, only put a space
    }
        cout<<endl <<"=[x]Result:============================\n";
    for (int x = 0; x < in.length(); x += 1)
        cout << ctm[x];

    cout<<endl<<endl;
    cout<"====================================END===============================\n";
    return main();
}
