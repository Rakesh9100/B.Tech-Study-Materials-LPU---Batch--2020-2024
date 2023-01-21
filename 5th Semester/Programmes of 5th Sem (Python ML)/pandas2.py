import pandas as pd
series = pd.Series([1,'Hello',2,'how',3,'are'])
print(series)
print(series[3])

## Use our own index values of even numbers

series = pd.Series([1,'Hello',2,'how',3,'are'],['0','2','4','6','8','10'])
print(series)
print(series[2])

mydict = {'A':10,'B':20,'C':30}
series = pd.Series(mydict)
print(series)

mydict = {'A':[10,11,12],'B':[20,21,22], 'C':[30,31,32]}
series = pd.Series(mydict)
print(series)

mydict1 = {'A':10,'B':20,'C':30}
series1 = pd.Series(mydict1,index=['C','A','B'])
print(series1)
print(series1['B'])

mydict = {'A':[10,11,12],'B':[20,21,22], 'C':[30,31,32]}
series = pd.Series(mydict,['X','Y','Z'])
print(series)

data =


