import sys
from time import time
import numpy  

if __name__ == "__main__":
    vector1 = numpy.array([1,2,3])
    vector2 = numpy.array([2,1,3])

    start_time = time()
    resultado = numpy.dot(vector1,vector2)
    end_time = time() 
    final_time = end_time - start_time 
    print("El resultado es: ",resultado, "y tomo: ",final_time,"seg")
    
    resultado = numpy.add(vector1,vector2) 
    start_time = time() 
    end_time = time() 
    final_time = end_time - start_time
    print("El resultado es: ",resultado, "y tomo: ",final_time,"seg")


