import numpy as np
import pandas as pd

df = pd.DataFrame([[10, 20, np.NaN, 30],[40, np.NaN, np.NaN, 50],[10, 40, 40, 50]], columns="a b c d".split())

# Prints the array
print("The 2D array is: ")
print(df)

# Returns the number of NaN values in every rows (By default is row wise)
print(df.isna().sum())

# Returns the number of NaN values in every columns
print(df.isna().sum(axis=1))


print(df.dropna())
print(df.dropna(axis=1))
print(df.dropna(thresh=0))
print(df.dropna(thresh=3))
print(df.dropna(thresh=3, axis=1))
print(df.dropna(subset=['b']))
print(df.dropna(how='all'))
print(df.dropna(how='any'))

from sklearn.impute import SimpleImputer

si = SimpleImputer(strategy='mean')
df_mean=si.fit_transform(df)
print(df_mean)

si = SimpleImputer(strategy='median')
df_median=si.fit_transform(df)
print(df_median)

si = SimpleImputer(strategy='most_frequent')
df_most=si.fit_transform(df)
print(df_most)
df1=pd.read_csv('https://archive.ics.uci.edu/ml/machine-learning-databases/adult//adult.data',
na_values=' ?',header=None)
print(df1)
print(df1.isna().sum())
s=SimpleImputer(strategy="most_frequent")
df=s.fit_transform(df1)
df=pd.DataFrame(df)
print(df.head())

c=[1,3,5,6,7,8,9,13,14]
from sklearn.preprocessing import LabelEncoder
le=LabelEncoder()
for i in c:
    df[i]=le.fit_transform(df[i])
print(df)
