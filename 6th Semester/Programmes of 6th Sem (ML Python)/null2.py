import numpy as np
import pandas as pd
df=pd.read_csv("adult.data", header=None, na_values=" ?")
#df.head()
#df[1].unique()
print(df.isna().sum())

from sklearn.impute import SimpleImputer
df=pd.DataFrame(SimpleImputer(strategy="most_frequent").fit_transform(df))
print(df)

cd=[1, 3, 5, 6, 7, 8, 9, 13, 14]
from sklearn.preprocessing import LabelEncoder
le=LabelEncoder()
for i in cd:
    df[i]=le.fit_transform(df[i])
#print(df.head())

# Dummy DataSet
df=pd.DataFrame([[1,'x','male','good'],[2,'y','female','good'],[3,'z','male','average']], columns=['id','name','gender','feedback'])
gen={'male':1, 'female':2}
df['gender']=df['gender'].map(gen)
df=pd.get_dummies(df,columns=['feedback','gender']) ## get_dummies used for One Hot Encoder
print(df)

## Normalisation and Standardisation

df = pd.DataFrame([0.0, 1.0, 2.0, 3.0, 4.0, 5.0])
print(df)

from sklearn.preprocessing import MinMaxScaler ##MinMaxScaler is for Normalisation
df=pd.DataFrame(MinMaxScaler().fit_transform(df))
print(df)

from sklearn.preprocessing import StandardScaler ##StandardScaler is for Standardisation
df=pd.DataFrame(StandardScaler().fit_transform(df))
print(df)
