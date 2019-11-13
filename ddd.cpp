#include<stdio.h>

using namespace std;
int main()
{
     int nim;
     char nama[30];
     FILE *pF;
     if((pF=fopen("file.txt","r"))==NULL)
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
