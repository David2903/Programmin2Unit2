import sys

if __name__=="__main__":
    numeros = [10, 15, 9,100, 1, 58]
    
    
    for i in range (0,len (numeros)-1): 
        for index in range(0,len(numeros)-1): 
          
            current_step = index
            next_step = current_step + 1
            
            if numeros[current_step] > numeros[next_step]:
             
                numero_a_pegar = numeros[next_step]
                numeros[next_step] = numeros[current_step]
                numeros[current_step] = numero_a_pegar
            
    print(numeros)
            