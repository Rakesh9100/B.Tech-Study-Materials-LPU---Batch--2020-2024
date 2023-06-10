import numpy as np
import pandas as pd
from sklearn.impute import SimpleImputer
from sklearn.preprocessing import LabelEncoder
from sklearn.model_selection import train_test_split
from sklearn.tree import DecisionTreeClassifier
from sklearn.metrics import accuracy_score

df=pd.read_csv("breastcancer.data", header=None, na_values="?")
print(df.head())
df_i=pd.DataFrame(SimpleImputer(strategy="most_frequent").fit_transform(df))
print(df_i.head())

for i in range (0, 10):
    df_i[i]=LabelEncoder().fit_transform(df_i[i])
print(df_i.head())

xtrain, xtest, ytrain, ytest=train_test_split(df_i.drop(columns=[0]), df_i[0], test_size=0.3)
print(xtrain.shape, xtest.shape, ytrain.shape, ytest.shape)

model_dt = DecisionTreeClassifier(criterion="entropy", max_depth=5)
model_dt.fit(xtrain, ytrain)

train_pred=model_dt.predict(xtrain)
test_pred=model_dt.predict(xtest)
print("Accuracy for training: ",accuracy_score(train_pred, ytrain))
print("Accuracy for testing: ",accuracy_score(test_pred, ytest))
