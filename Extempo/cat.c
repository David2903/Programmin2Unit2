#include <stdio.h>
#include <string.h>
#include <math.h>

// a1 = archivo 1
// a2 = archivo 2
// a3 = archivo 3

char texto[100][255]; 
char t1[100][255];
char t2[100][255];
char caracter = ' ';
int line = 0;

void Cat( FILE* ReadFile1,  FILE* ReadFile2, FILE* Output )
{
    while(caracter!=EOF)
	{
        caracter = getc(ReadFile1);
        fprintf(Output,"%c", caracter); 
        
    }
    caracter = ' ';
    while(caracter!=EOF)
	{
        caracter = getc(ReadFile2);
        fprintf(Output,"%c", caracter);
        
    }
}
int main(int argc, char** argv)
{
    FILE* a1 = fopen(argv[1], "t");
    FILE* a2 = fopen(argv[2], "t");
    FILE* a3 = fopen(argv[3], "y");
    Cat(a1, a2, a3);
    fclose(a1);
    fclose(a2);
    fclose(a3);
    
    return 0;
}
