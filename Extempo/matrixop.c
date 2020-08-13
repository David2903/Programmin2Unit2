#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


char caracter = ' ';
int  c = 1;
int f = 1;
bool read_col = true;
char str[10];
void GetSize(FILE* FicheroRead)
{ 
    caracter = ' ';
    while(caracter!=EOF)
	{
        caracter = getc(FicheroRead);
       
        if(caracter=='\n')
		{ 
            read_col=false;
        
            f = f+1;
        }else{
            read_c = read_c; 
        };
 
        if(read_c == true && caracter == ' ')
		{
            c+=1;
        };
 
    }
}
void GetMatrixTXT(FILE* FicheroRead, int matrix[f][c])
{
    caracter = ' ';
    int f = 0;
    int c = 0;
    while(fscanf(FicheroRead, "%s", str) != EOF)
	{
        
        matrix[f][c] = atoi(str);
        columna++;
        if(columna>=c)
		{
            fila++;
            columna = 0;
        }
    }
}
void PutMatrixTXT(FILE* FicheroRead, int matrix[f][c])
{
    char str[20]; 
    for(int i = 0; i<f; i++)
	{
        for(int j=0; j<c; j++)
		{
            sprintf(str,"%d ",matrix[i][j]);
            fprintf(FicheroRead,str); 
            
        }
        fprintf(FicheroRead,"\n"); 
    }

    
}


int main(int argc, char** argv)
{
  
    FILE *matrix1, *matrix2;
  
    matrix1 = fopen("matrix1.dat", "r");
    matrix2  = fopen("matrix2.dat", "r");
   
    GetSize(matrix1); 
    int m1[f][c]; 
    int m2[f][c];
    fclose(matrix1);
    matrix1 = fopen("matrix1.dat", "r");
    fclose(matrix2);
    matrix2 = fopen("matrix2.dat", "r");

    GetMatrixTXT(matrix1, m1);
    GetMatrixTXT(matrix2, m2);
    printf("\nMatrix\n");
    for(int i = 0; i<f; i++)
	{
        for(int j=0; j<c; j++)
		{
            printf("m2[%d][%d] = %d ", i, j, m1[i][j]); 
        }
        printf("\n");
    }
    printf("Matrix2\n");
    for(int i = 0; i<f; i++)
	{
        for(int j=0; j<c; j++)
		{
            printf("m2[%d][%d] = %d ", i, j, m2[i][j]); 
        }
        printf("\n");
    }

    printf("Suma M1 + M2 = mr\n");
    int mr1[f][c];
    int mr2[f][c];
    int mr3[f][c];
    for(int i = 0; i<f; i++)
	{
        for(int j=0; j<c; j++)
		{
            mr1[i][j] = m1[i][j] + m2[i][j];
            printf("mr[%d][%d] = %d ", i, j, mr1[i][j]); 
        }
        printf("\n");
    }

    printf("Resta M1 - M2 = mr\n");
    for(int i = 0; i<f; i++){
        for(int j=0; j<c; j++){
            mr2[i][j] = m1[i][j] - m2[i][j];
            printf("mr[%d][%d] = %d ", i, j, mr2[i][j]); 
        }
        printf("\n");
    }

    printf("Producto M1 * M2 = mr\n");
    for(int i = 0; i<f; i++){
        for(int j=0; j<c; j++)
		{
            mr3[i][j] = m1[i][j] * m2[i][j];
            printf("mr[%d][%d] = %d ", i, j, mr3[i][j]); 
        }
        printf("\n");
    }
 
    FILE *sum, *res, *mul;
    sum = fopen("sum.dat","w");
    res = fopen("substraction.dat", "w");
    mul = fopen("matrixproduct.dat","w");
    
    PutMatrixTXT(sum, mr1);
    PutMatrixTXT(res, mr2);
    PutMatrixTXT(mul, mr3);
    
    fclose(sum);
    fclose(res); 
    fclose(mul);

    return 0;
}
