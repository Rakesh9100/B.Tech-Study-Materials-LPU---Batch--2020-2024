import pandas as pd
df=pd.read_csv("crx.data", header=None, na_values="?")
print(df.isna().sum())
print(df.isna().sum().sum())
print(df.head())

from sklearn.impute import SimpleImputer
df_im=pd.DataFrame(SimpleImputer(strategy="most_frequent").fit_transform(df))
print(df_im.isna().sum())

from sklearn.preprocessing import LabelEncoder
for i in [0, 3, 4, 5, 6, 8, 9, 11, 12, 15]:
    df_im[i]=LabelEncoder().fit_transform(df_im[i])
print(df_im.head())

from sklearn.preprocessing import StandardScaler
from sklearn.decomposition import PCA
from sklearn.svm import SVC
from sklearn.pipeline import Pipeline

pipe=Pipeline([('sc',StandardScaler()), ('pca',PCA()), ('svmr',SVC(kernel="rbf"))])
from sklearn.model_selection import train_test_split
xtrain, xtest, ytrain, ytest=train_test_split(df_im.drop(columns=[15]), df_im[15], test_size=0.3)
pipe.fit(xtrain, ytrain)
print(pipe)

print(pipe.score(xtrain, ytrain))
print(pipe.score(xtest, ytest))

from sklearn.model_selection import cross_validate
import numpy as np
for i in range(2, 10):
    results=cross_validate(pipe, df_im.drop(columns=[15]), df_im[15], cv=i)
    print("K value is ",i)
    print(results)
    print("Average Accuracy is: ",np.mean(results['test_score']))

data=df_im.drop(columns=[15])
target=df_im[15]
from sklearn.model_selection import StratifiedKFold
skf=StratifiedKFold(n_splits=10)
for trainindex, testindex in skf.split(data, target):
    xtrain, xtest=data.iloc[trainindex], data.iloc[testindex]
    ytrain, ytest=target[trainindex], target[testindex]
    pipe.fit(xtrain, ytrain)
    print(pipe.score(xtest, ytest))
