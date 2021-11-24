import numpy as np
def arrayAdd(arr,num):
    if arr.size!=0 and arr[-1]!=0:
        np.append(arr,num)
    elif arr.size==0:
        np.append(arr,num)
    return arr
ar=np.array([])
ar=arrayAdd(ar,1)
ar=arrayAdd(ar,2)
ar=arrayAdd(ar,3)
ar=arrayAdd(ar,4)
ar=arrayAdd(ar,0)
ar=arrayAdd(ar,5)
print(ar)

