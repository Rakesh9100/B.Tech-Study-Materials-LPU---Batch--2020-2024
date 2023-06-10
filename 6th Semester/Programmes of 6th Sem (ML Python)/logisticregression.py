import pandas as pd
import numpy as np
from sklearn import datasets
from sklearn.model_selection import train_test_split
from sklearn.linear_model import LogisticRegression
from sklearn.metrics import accuracy_score

data=datasets.load_iris()
print(data.DESCR)
x=data.data
y=data.target

x_train, x_test, y_train, y_test=train_test_split(x, y, test_size=0.3)
print(x_train.shape, x_test.shape, y_train.shape, y_test.shape)

model = LogisticRegression()
model.fit(x_train, y_train)

pred_train=model.predict(x_train)
pred_test=model.predict(x_test)
print("Accuracy for training: ",accuracy_score(pred_train, y_train))
print("Accuracy for testing: ",accuracy_score(pred_test, y_test))
