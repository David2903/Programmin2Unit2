import sys 
import time as tm 

##codigo "hanged.py"

def vector_dot(vector1,vector2):
    # print("Funcion(vector_dot)!...")
    suma = 0
    
    for index in range(0,len(vector2)):
        suma = suma + vector1[index]*vector2[index]  ##+= la suma de 
        # print(sumatoria)
    return sumatoria

def vector_sum(v1,v2):
    vr_temp = []
    # print("Funcion(vector_sum)!...")

    for index in range (0,len(v1)):
        suma = v1[index] + v2[index]
        vr_temp.append(suma)
        # print(vr_temp) ##print statement
    return vr_temp
        
if __name__ == "__main__":
    vector1 = [1,2,3]
    vector2 = [2,1,3]
    ##vector 
    vr = [] ##creando la lista 
    start_time = tm.time() ##timepo incial
    resultado = vector_dot(vector1,vector2)
    end_time = tm.time() ##tiempo_final
    final_time = end_time - start_time
    
  
    ##Producto punto 
    resultado = vector_dot(vector1,vector2) ##(parametros)
    print("El resultado es igual: ",resultado, "y tomo: ",final_time,"seg")

    ##Suma
    vr = vector_sum (vector1,vector2)
    start_time = tm.time() ##timepo incial
    resultado = vector_dot(vector1,vector2)
    end_time = tm.time() 
    final_time = end_time - start_time 
    print("El resultado es: ",vr, "y tomo: ",final_time,"seg")
    
    