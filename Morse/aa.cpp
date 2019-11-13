#include <iostream>
#include <string>
using namespace std;

int main()
{
    cout<<"v 0.0.1######################################\n";
    cout<<"#ENCRYPT IT ON! BY G-TECH BD @ DENZVELOPER  #\n";
    cout<<"#  ~For My Friend Network Screet messages~  #\n";
    cout<<"#############################################\n";
    cout<<"Masukkan Kalimat yang ingin di enkripsi:\n";
    string in;

    getline(cin, in);

    string ctm [ in.length() ];

    for(int i = 0; i < in.length(); i += 1)
    {
        //cHAR
        if(in.at(i)=='A' || in.at(i)=='a')
            ctm[i]=".-";

        else if (in.at(i)=='B' || in.at(i)=='b')
            ctm[i]="-...";

        else if (in.at(i)=='C' || in.at(i)=='c')
            ctm[i]="-.-.";

        else if (in.at(i)=='D' || in.at(i)=='d')
            ctm[i]="-..";

        else if (in.at(i)=='E' || in.at(i)=='e')
            ctm[i]=".";

        else if (in.at(i)=='F' || in.at(i)=='f')
            ctm[i]="..-.";

        else if (in.at(i)=='G' || in.at(i)=='g')
            ctm[i]="--.";

        else if (in.at(i)=='H' || in.at(i)=='h')
            ctm[i]="....";

        else if (in.at(i)=='I' || in.at(i)=='i')
            ctm[i]="..";

        else if (in.at(i)=='J' || in.at(i)=='j')
            ctm[i]=".---";

        else if (in.at(i)=='K' || in.at(i)=='k')
            ctm[i]="-.-";

        else if (in.at(i)=='L' || in.at(i)=='l')
            ctm[i]=".-..";

        else if (in.at(i)=='M' || in.at(i)=='m')
            ctm[i]="--";

        else if (in.at(i)=='N' || in.at(i)=='n')
            ctm[i]="-.";

        else if (in.at(i)=='O' || in.at(i)=='o')
            ctm[i]="---";

        else if (in.at(i)=='P' || in.at(i)=='p')
            ctm[i]=".--.";

        else if (in.at(i)=='Q' || in.at(i)=='q')
            ctm[i]="--.-";

        else if (in.at(i)=='R' || in.at(i)=='r')
            ctm[i]=".-.";

        else if (in.at(i)=='S' || in.at(i)=='s')
            ctm[i]="...";

        else if (in.at(i)=='T' || in.at(i)=='t')
            ctm[i]="-";

        else if (in.at(i)=='U' || in.at(i)=='u')
            ctm[i]="..-";

        else if (in.at(i)=='V' || in.at(i)=='v')
            ctm[i]="...-";

        else if (in.at(i)=='W' || in.at(i)=='w')
            ctm[i]=".--";

        else if (in.at(i)=='X' || in.at(i)=='x')
            ctm[i]="-..-";

        else if (in.at(i)=='Y' || in.at(i)=='y')
            ctm[i]="-.--";

        else if (in.at(i)=='Z' || in.at(i)=='z')
            ctm[i]="--..";
        //aNGKA
        else if (in.at(i)=='1')
            ctm[i]=".----";

        else if (in.at(i)=='2')
            ctm[i]="..---";

        else if (in.at(i)=='3')
            ctm[i]="...--";

        else if (in.at(i)=='4')
            ctm[i]="....-";

        else if (in.at(i)=='5')
            ctm[i]=".....";

        else if (in.at(i)=='6')
            ctm[i]="-....";

        else if (in.at(i)=='7')
            ctm[i]="--...";

        else if (in.at(i)=='8')
            ctm[i]="---..";

        else if (in.at(i)=='9')
            ctm[i]="----.";

        else if (in.at(i)=='0')
            ctm[i]="-----";

        //sYMBOL UMUM
        else if (in.at(i)==' ')
            ctm[i]=" ";

        else if (in.at(i)==',')
            ctm[i]="--..-";

        else if (in.at(i)=='?')
            ctm[i]="..--..";

        else if (in.at(i)=='!')
            ctm[i]="-.-.-";

        else if (in.at(i)=='-')
            ctm[i]="-....-";

        else if (in.at(i)=='(')
            ctm[i]="-.--.";

        else if (in.at(i)==')')
            ctm[i]="-.---";

        else if (in.at(i)=='@')
            ctm[i]=".--.-.";

        else if (in.at(i)=='"')
            ctm[i]=".-..-.";

        else if (in.at(i)==':')
            ctm[i]="-.-.-.";

        //else if (in.at(i)=='_') //Not Active
            //ctm[i]="?";

        else if (in.at(i)=='+') //Unavaible
            ctm[i]="*";

        else if (in.at(i)=='=')
            ctm[i]="-...-";

        //else if (in.at(i)=='*') //Unavaible
            //ctm[i]="+";

        else if (in.at(i)=='.')
            ctm[i]=".-.-.-";

            //Terakhir
        else ctm[i]="`~`"; //Else, only put a space
    }
    cout<<endl <<"=[x]Result:============================\n";
    for (int x = 0; x < in.length(); x += 1)
        cout << ctm[x] <<"/";

    cout<<endl<<endl;
    cout<"====================================END===============================\n";
    return main();
}
