#include <stdio.h>
#include <string.h>
#include <math.h>

char text[100][255];
char t1[100][255];
char t2[100][255];
char caracter = ' ';
int line = 0;

void GetFullText( FILE* ReadFile)
{
    caracter = ' ';
    while(caracter!=EOF)
	{
        caracter = getc(ReadFile);
        strcat(t1[line], &caracter);
        if(caracter =='\n')
		{
            line++;
        }; 
        
    }
}
int main(int argc, char** argv)
{

    FILE* archivo = fopen(argv[1], "t");
    GetFullText(archivo);

    for(int i =1+line-10; i<=line; i++)
	{
        printf("%s",1[i]);
    }
    return 0;
}
