import pandas as pd
a = pd.Series([10,'hello',683.3,'*'])
print(a)

b = pd.Series([1,2,3,4,5])
print(b)

c = pd.Series([1,2,3,4,5],index=['a','b','c','d','e'])
print(c)

d = {'A':10,'B':20,'C':30}
d = pd.Series(d)
print(d)
print(d['A'])

e = {'A':10,'B':20,'C':30}
e = pd.Series(e,index=['C','A','B'])
print(e)
print(e['B'])

f = {'A':10,'B':20,'C':30}
f = pd.Series(f,index=['X','Y','Z'])
print(f)
print(f['X'])
