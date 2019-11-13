#include <iostream>
#include <string>
using namespace std;

int main()
{
    cout<<"A:v 0.3.1###C:rev3###########################\n";
    cout<<"#ENCRYPT IT ON! BY G-TECH BD @ DENZVELOPER  #\n";
    cout<<"#  ~For My Friend Network Screet messages~  #\n";
    cout<<"#############################################\n";
    cout<<"Masukkan Kalimat yang ingin di enkripsi:\n";
    string in;

    getline(cin, in);

    string ctm [ in.length() ];

    for(int i = 0; i < in.length(); i += 1)
    {
        //cHAR-KATa
        if(in.at(i)=='A' || in.at(i)=='a')
            ctm[i]=">";

        else if (in.at(i)=='B' || in.at(i)=='b')
            ctm[i]="W";

        else if (in.at(i)=='C' || in.at(i)=='c')
            ctm[i]="R";

        else if (in.at(i)=='D' || in.at(i)=='d')
            ctm[i]="2";

        else if (in.at(i)=='E' || in.at(i)=='e')
            ctm[i]="}";

        else if (in.at(i)=='F' || in.at(i)=='f')
            ctm[i]="y";

        else if (in.at(i)=='G' || in.at(i)=='g')
            ctm[i]="\$";

        else if (in.at(i)=='H' || in.at(i)=='h')
            ctm[i]="7";

        else if (in.at(i)=='I' || in.at(i)=='i')
            ctm[i]="O";

        else if (in.at(i)=='J' || in.at(i)=='j')
            ctm[i]="p";

        else if (in.at(i)=='K' || in.at(i)=='k')
            ctm[i]="\\";

        else if (in.at(i)=='L' || in.at(i)=='l')
            ctm[i]="5";

        else if (in.at(i)=='M' || in.at(i)=='m')
            ctm[i]="0";

        else if (in.at(i)=='N' || in.at(i)=='n')
            ctm[i]="V";

        else if (in.at(i)=='O' || in.at(i)=='o')
            ctm[i]="<";

        else if (in.at(i)=='P' || in.at(i)=='p')
            ctm[i]="]";

        else if (in.at(i)=='Q' || in.at(i)=='q')
            ctm[i]=";";

        else if (in.at(i)=='R' || in.at(i)=='r')
            ctm[i]="_";

        else if (in.at(i)=='S' || in.at(i)=='s')
            ctm[i]="L";

        else if (in.at(i)=='T' || in.at(i)=='t')
            ctm[i]="^";

        else if (in.at(i)=='U' || in.at(i)=='u')
            ctm[i]="\"";

        else if (in.at(i)=='V' || in.at(i)=='v')
            ctm[i]="B";

        else if (in.at(i)=='W' || in.at(i)=='w')
            ctm[i]="F";

        else if (in.at(i)=='X' || in.at(i)=='x')
            ctm[i]="|";

        else if (in.at(i)=='Y' || in.at(i)=='y')
            ctm[i]="+";

        else if (in.at(i)=='Z' || in.at(i)=='z')
            ctm[i]=")";

        //aNGKA-ANGKa
        else if (in.at(i)=='1')
            ctm[i]="M";

        else if (in.at(i)=='2')
            ctm[i]="n";

        else if (in.at(i)=='3')
            ctm[i]="b";

        else if (in.at(i)=='4')
            ctm[i]="v";

        else if (in.at(i)=='5')
            ctm[i]="*";

        else if (in.at(i)=='6')
            ctm[i]="X";

        else if (in.at(i)=='7')
            ctm[i]="z";

        else if (in.at(i)=='8')
            ctm[i]="l";

        else if (in.at(i)=='9')
            ctm[i]="x";

        else if (in.at(i)=='0')
            ctm[i]="J";

        //sYMBOL UMUM
        else if (in.at(i)==' ')
            ctm[i]="c";

        else if (in.at(i)==',')
            ctm[i]="6";

        else if (in.at(i)=='?')
            ctm[i]="w";

        else if (in.at(i)=='!')
            ctm[i]="1";

        else if (in.at(i)=='-')
            ctm[i]="r";

        else if (in.at(i)=='(')
            ctm[i]="t";

        else if (in.at(i)==')')
            ctm[i]="Y";

        else if (in.at(i)=='@')
            ctm[i]="U";

        else if (in.at(i)=='"')
            ctm[i]="i";

        else if (in.at(i)==':')
            ctm[i]="o";

        else if (in.at(i)=='_')
            ctm[i]="P";

        else if (in.at(i)=='+')
            ctm[i]="a";

        else if (in.at(i)=='=')
            ctm[i]="s";

        else if (in.at(i)=='*')
            ctm[i]="-";

        else if (in.at(i)=='.')
            ctm[i]="'";

        else if (in.at(i)=='`')
            ctm[i]="f";

        else if (in.at(i)=='~')
            ctm[i]="g";

        else if (in.at(i)=='$')
            ctm[i]="H";

        else if (in.at(i)=='%')
            ctm[i]="?";

        else if (in.at(i)==';')
            ctm[i]="4";

        else if (in.at(i)=='\'')
            ctm[i]="e";

        else if (in.at(i)=='{')
            ctm[i]="@";

        else if (in.at(i)=='}')
            ctm[i]="#";

        else if (in.at(i)=='<')
            ctm[i]="!";

        else if (in.at(i)=='>')
            ctm[i]="Q";

        else if (in.at(i)=='/')
            ctm[i]="T";

        else if (in.at(i)=='^')
            ctm[i]="{";

        else if (in.at(i)=='\\')
            ctm[i]="=";

        else if (in.at(i)=='|')
            ctm[i]="9";

        else if (in.at(i)=='#')
            ctm[i]="=";

        else if (in.at(i)=='&')
            ctm[i]="/";

        else if (in.at(i)=='[')
            ctm[i]="%";

        else if (in.at(i)==']')
            ctm[i]="N";

            //Terakhir
        else ctm[i]="."; //Pesan Error untuk di Decrypt
    }
    cout<<endl <<"=[x]Result:============================\n";
    for (int x = 0; x < in.length(); x += 1)
        cout << ctm[x];

    cout<<endl<<endl;
    cout<"====================================END===============================\n";
    return main();
}
