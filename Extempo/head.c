#include <stdio.h>
#include <string.h>
#include <math.h>

char texto[100][255]; 
char t1[100][255];
char t2[100][255];
char caracter = ' ';
int lines = 0;

void GetFullText( FILE* ReadFile)
{
    caracter = ' ';
    while(caracter!=EOF)
	{
        caracter = getc(ReadFile);
        strcat([lines], &caracter);

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
    for(int i =0; i<10; i++)
	{
        printf("%s",t1[i]);
    }


    return 0;
}
