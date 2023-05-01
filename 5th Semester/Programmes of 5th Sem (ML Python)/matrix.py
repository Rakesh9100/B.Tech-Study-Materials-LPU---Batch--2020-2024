Python 3.10.1 (tags/v3.10.1:2cd268a, Dec  6 2021, 19:10:37) [MSC v.1929 64 bit (AMD64)] on win32
Type "help", "copyright", "credits" or "license()" for more information.
import numpy as np
M1 = np.array([[1,2],[3,4]])
M2 = np.array([[5,6],[7,8]])
M3 = M1 + M2
Print (M3)
Traceback (most recent call last):
  File "<pyshell#4>", line 1, in <module>
    Print (M3)
NameError: name 'Print' is not defined. Did you mean: 'print'?
print (M3)
[[ 6  8]
 [10 12]]
import numpy as np
M1 = np.array([1,2])
M2 = np.array([5,6])
M3 = M1 * M2
print (M3)
[ 5 12]
M1 = np.array([1,2,3],[[2],[4],[3]])
Traceback (most recent call last):
  File "<pyshell#11>", line 1, in <module>
    M1 = np.array([1,2,3],[[2],[4],[3]])
TypeError: Field elements must be 2- or 3-tuples, got '[2]'
