import numpy as np
import pandas as pd
df=pd.read_csv("breastcancer.data", header=None, na_values="?")
print(df)
for i in range(0 ,10):
    print(df[i].unique())
print(df.isna().sum())

from sklearn.impute import SimpleImputer
df_i=pd.DataFrame(SimpleImputer(strategy="most_frequent").fit_transform(df))
print("AA")
print(df_i.isna().sum())

from sklearn.preprocessing import LabelEncoder
for i in range(0, 10):
    df_i[i]=LabelEncoder().fit_transform(df_i[i])
print(df_i.head())
target=df_i[0]
data=df_i.drop(columns=[0])
print(target.shape, data.shape)
print(df_i)

## Now split the data into train and test, the ration is 70:30

from sklearn.model_selection import train_test_split
x_train, x_test, y_train, y_test=train_test_split(data, target, test_size=0.3)
print(x_train.shape, x_test.shape, y_train.shape, y_test.shape)

## Importing the Perceptron model

from sklearn.linear_model import Perceptron
model = Perceptron()
model.fit(x_train, y_train)
print(model)

from sklearn.metrics import accuracy_score
pred_train=model.predict(x_train)
pred_test=model.predict(x_test)
print("Accuracy for training ",accuracy_score(pred_train, y_train))
print("Accuracy for testing ",accuracy_score(pred_test, y_test))
