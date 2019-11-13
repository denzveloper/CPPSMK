#include <iostream>
#include <string>
using namespace std;

int main()
{
    cout<<"A:v 0.3.1###C:rev3###########################\n";
    cout<<"#DECRYPT IT ON! BY G-TECH BD @ DENZVELOPER  #\n";
    cout<<"#  ~For My Friend Network Screet messages~  #\n";
    cout<<"#############################################\n";
    cout<<"Masukkan Kalimat yang sudah di enkripsi (Case Sensitif!):\n";
    string in;

    getline(cin, in);

    string ctm [ in.length() ];

    for(int i = 0; i < in.length(); i += 1)
    {
        //cHAR-KATa
        if(in.at(i)=='>')
            ctm[i]="A";

        else if (in.at(i)=='W')
            ctm[i]="B";

        else if (in.at(i)=='R')
            ctm[i]="C";

        else if (in.at(i)=='2')
            ctm[i]="D";

        else if (in.at(i)=='}')
            ctm[i]="E";

        else if (in.at(i)=='y')
            ctm[i]="F";

        else if (in.at(i)=='\$')
            ctm[i]="G";

        else if (in.at(i)=='7')
            ctm[i]="H";

        else if (in.at(i)=='O')
            ctm[i]="I";

        else if (in.at(i)=='p')
            ctm[i]="J";

        else if (in.at(i)=='\\')
            ctm[i]="K";

        else if (in.at(i)=='5')
            ctm[i]="L";

        else if (in.at(i)=='0')
            ctm[i]="M";

        else if (in.at(i)=='V')
            ctm[i]="N";

        else if (in.at(i)=='<')
            ctm[i]="O";

        else if (in.at(i)==']')
            ctm[i]="P";

        else if (in.at(i)==';')
            ctm[i]="Q";

        else if (in.at(i)=='_')
            ctm[i]="R";

        else if (in.at(i)=='L')
            ctm[i]="S";

        else if (in.at(i)=='^')
            ctm[i]="T";

        else if (in.at(i)=='"')
            ctm[i]="U";

        else if (in.at(i)=='B')
            ctm[i]="V";

        else if (in.at(i)=='F')
            ctm[i]="W";

        else if (in.at(i)=='|')
            ctm[i]="X";

        else if (in.at(i)=='+')
            ctm[i]="Y";

        else if (in.at(i)==')')
            ctm[i]="Z";

        //aNGKA-ANGKa
        else if (in.at(i)=='M')
            ctm[i]="1";

        else if (in.at(i)=='n')
            ctm[i]="2";

        else if (in.at(i)=='b')
            ctm[i]="3";

        else if (in.at(i)=='v')
            ctm[i]="4";

        else if (in.at(i)=='*')
            ctm[i]="5";

        else if (in.at(i)=='X')
            ctm[i]="6";

        else if (in.at(i)=='z')
            ctm[i]="7";

        else if (in.at(i)=='l')
            ctm[i]="8";

        else if (in.at(i)=='x')
            ctm[i]="9";

        else if (in.at(i)=='J')
            ctm[i]="0";

        //sYMBOL UMUM
        else if (in.at(i)=='c')
            ctm[i]=" ";

        else if (in.at(i)=='6')
            ctm[i]=",";

        else if (in.at(i)=='w')
            ctm[i]="?";

        else if (in.at(i)=='1')
            ctm[i]="!";

        else if (in.at(i)=='r')
            ctm[i]="-";

        else if (in.at(i)=='t')
            ctm[i]="(";

        else if (in.at(i)=='Y')
            ctm[i]=")";

        else if (in.at(i)=='U')
            ctm[i]="@";

        else if (in.at(i)=='i')
            ctm[i]='"';

        else if (in.at(i)=='o')
            ctm[i]=":";

        else if (in.at(i)=='P')
            ctm[i]="_";

        else if (in.at(i)=='a')
            ctm[i]="+";

        else if (in.at(i)=='s')
            ctm[i]="=";

        else if (in.at(i)=='-')
            ctm[i]="*";

        else if (in.at(i)=='\'')
            ctm[i]=".";

        else if (in.at(i)=='f')
            ctm[i]="`";

        else if (in.at(i)=='g')
            ctm[i]="~";

        else if (in.at(i)=='H')
            ctm[i]="$";

        else if (in.at(i)=='?')
            ctm[i]="%";

        else if (in.at(i)=='4')
            ctm[i]=";";

        else if (in.at(i)=='e')
            ctm[i]="'";

        else if (in.at(i)=='@')
            ctm[i]="{";

        else if (in.at(i)=='#')
            ctm[i]="}";

        else if (in.at(i)=='!')
            ctm[i]="<";

        else if (in.at(i)=='Q')
            ctm[i]=">";

        else if (in.at(i)=='T')
            ctm[i]="/";

        else if (in.at(i)=='{')
            ctm[i]="^";

        else if (in.at(i)=='=')
            ctm[i]="\\";

        else if (in.at(i)=='9')
            ctm[i]="|";

        else if (in.at(i)=='=')
            ctm[i]="#";

        else if (in.at(i)=='/')
            ctm[i]="&";

        else if (in.at(i)=='%')
            ctm[i]="[";

        else if (in.at(i)=='N')
            ctm[i]="]";

        //Pesan Error untuk di Decrypt yang udah di ketahui pas encrypt====
        else if (in.at(i)=='.')
            ctm[i]=" $Err@Code~ ";
        //=================================================================

            //Terakhir
        else ctm[i]="$Not@Found_cod~"; //Kode decrypt tak diketahui di enkripsi
    }
        cout<<endl <<"=[x]Result:============================\n";
    for (int x = 0; x < in.length(); x += 1)
        cout << ctm[x];

    cout<<endl<<endl;
    cout<"====================================END===============================\n";
    return main();
}
