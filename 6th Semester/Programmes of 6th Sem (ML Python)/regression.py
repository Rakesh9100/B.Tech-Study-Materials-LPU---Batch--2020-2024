import pandas as pd
import numpy as np
from sklearn import datasets
from sklearn.linear_model import LinearRegression
data=datasets.load_diabetes()
X=data.data
Y=data.target
# print(data.target)

from sklearn.model_selection import train_test_split
xtrain, xtest, ytrain, ytest=train_test_split(X, Y, test_size=0.3)
print(xtrain.shape, xtest.shape)

model=LinearRegression()
model.fit(xtrain, ytrain)
pred=model.predict(xtest)

print(np.sum((pred-ytest)**2)/xtest.shape[0])
