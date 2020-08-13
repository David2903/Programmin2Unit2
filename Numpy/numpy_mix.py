import numpy as np 

if __name__ =="__main__":
   
    v1 = np.array([1,2,3]) ##it is a vector and it has 1,2
    v2 = np.array([2,1,2])
    print("v1 = ",v1,"v2 = ",v2)
    print(v1.size) ##give the size of the v1

    m1 = np.array([ [1, 2, 3],[4, 5, 3]])
    print("m1 = \n", m1)

    print(m1.shape)

    m2 = np.ones(  (3,3) ) ## after np. is the function
    print("m2 = \n" ,m2)

    m1 = m1 * 2
    

    vr = np.add(v1,v2)
    vr = v1 + v2
    print("vr: \n",vr)

    r = np.dot(v1,v2)
    print(f"Dot product: {v1}.{v2}={r} ")
    vr = np.dot(m1,m2)
    print(f"Dot product matrix: \n\n {m1}.{m2}= {vr} \n\n")

print("m1 =\n",m1)