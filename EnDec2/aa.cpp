#include <iostream>
#include <string>
using namespace std;

int main()
{
    cout<<"A:v 0.1.1###C:rev2###########################\n";
    cout<<"#ENCRYPT IT ON! BY G-TECH BD @ DENZVELOPER  #\n";
    cout<<"#  ~For My Friend Network Screet messages~  #\n";
    cout<<"#############################################\n";
    cout<<"Masukkan Kalimat yang ingin di enkripsi:\n";
    string in;
    string input;

    getline(cin, in);

    string ctm [ in.length() ];

    for(int i = 0; i < in.length(); i += 1)
    {
        //cHAR-KATa
        if(in.at(i)=='A' || in.at(i)=='a')
            ctm[i]="Q";

        else if (in.at(i)=='B' || in.at(i)=='b')
            ctm[i]="W";

        else if (in.at(i)=='C' || in.at(i)=='c')
            ctm[i]="E";

        else if (in.at(i)=='D' || in.at(i)=='d')
            ctm[i]="R";

        else if (in.at(i)=='E' || in.at(i)=='e')
            ctm[i]="T";

        else if (in.at(i)=='F' || in.at(i)=='f')
            ctm[i]="y";

        else if (in.at(i)=='G' || in.at(i)=='g')
            ctm[i]="\$";

        else if (in.at(i)=='H' || in.at(i)=='h')
            ctm[i]="I";

        else if (in.at(i)=='I' || in.at(i)=='i')
            ctm[i]="O";

        else if (in.at(i)=='J' || in.at(i)=='j')
            ctm[i]="p";

        else if (in.at(i)=='K' || in.at(i)=='k')
            ctm[i]="A";

        else if (in.at(i)=='L' || in.at(i)=='l')
            ctm[i]="S";

        else if (in.at(i)=='M' || in.at(i)=='m')
            ctm[i]="D";

        else if (in.at(i)=='N' || in.at(i)=='n')
            ctm[i]="F";

        else if (in.at(i)=='O' || in.at(i)=='o')
            ctm[i]="G";

        else if (in.at(i)=='P' || in.at(i)=='p')
            ctm[i]="h";

        else if (in.at(i)=='Q' || in.at(i)=='q')
            ctm[i]="j";

        else if (in.at(i)=='R' || in.at(i)=='r')
            ctm[i]="K";

        else if (in.at(i)=='S' || in.at(i)=='s')
            ctm[i]="L";

        else if (in.at(i)=='T' || in.at(i)=='t')
            ctm[i]="Z";

        else if (in.at(i)=='U' || in.at(i)=='u')
            ctm[i]="x";

        else if (in.at(i)=='V' || in.at(i)=='v')
            ctm[i]="C";

        else if (in.at(i)=='W' || in.at(i)=='w')
            ctm[i]="V";

        else if (in.at(i)=='X' || in.at(i)=='x')
            ctm[i]="B";

        else if (in.at(i)=='Y' || in.at(i)=='y')
            ctm[i]="N";

        else if (in.at(i)=='Z' || in.at(i)=='z')
            ctm[i]="m";

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
            ctm[i]="\"";

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
            ctm[i]=".";

        else if (in.at(i)=='/')
            ctm[i]="}";

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
            ctm[i]="+";

            //Terakhir
        else ctm[i]="."; //Pesan Error untuk di Decrypt
    }
    cout<<endl <<"=[x]Result:============================\n";
    for (int x = 0; x < in.length(); x += 1)
        input = ctm[x];
    char caesar( char );
    do {
        string output;
        for(int x = 0; x < in.length(); x++)
        {
            output = caesar(input[x]);
        }
        cout << output << endl;

            cout<<endl<<endl;
    cout<"====================================END===============================\n";

    } while (!input.length() == 0);
    }  //end main

    char caesar( char c )
    {
        if( isalpha(c) )
    {
        c = toupper(c); //use upper to keep from having to use two seperate for A..Z a..z
        c = (((c-65)+13) % 26) + 65;
    }
    //if c isn't alpha, just send it back.
    return c;
    }
