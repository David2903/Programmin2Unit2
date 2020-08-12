import sys

if __name__=="__main__":
    numero = int(input("Enter a number: \n\t"))
    denominador = 1
    n_div = 0
    while(denominador <= numero):
       
        if(numero%denominador == 0): ##if it is it increase +1
            n_div = n_div + 1
        else:
            pass

        denominador = denominador + 1
       
    if(n_div == 2):
        print("it is a prime numer! ")
    else:
        print("this is not a prime number!")
