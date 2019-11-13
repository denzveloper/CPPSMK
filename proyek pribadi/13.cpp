#include<stdio.h>
#include<conio.h>
using namespace std;
int main()
{
     int nim;
     char nama[30];
     FILE *pF;
     if((pF=fopen("1.exe","r"))==NULL)
     {
     printf("File tidak dapat dibuka ");
     getch();
     }
     else
     {
     fscanf(pF,"%d %s \n",&nim,nama);
     fclose(pF);
     printf("%d %s \n",nim,nama);
     getch();
     }
}
