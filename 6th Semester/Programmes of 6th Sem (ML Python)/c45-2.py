import numpy as np
import pandas as pd
from sklearn import datasets
from sklearn.model_selection import train_test_split
from sklearn.tree import DecisionTreeClassifier
from sklearn.metrics import accuracy_score

data=datasets.load_iris()
print(data.DESCR)
x=data.data
y=data.target

x_train, x_test, y_train, y_test=train_test_split(x, y, test_size=0.3)
print(x_train.shape, x_test.shape, y_train.shape, y_test.shape)

model_dt = DecisionTreeClassifier(criterion="entropy", max_depth=5)
model_dt.fit(x_train, y_train)

train_pred=model_dt.predict(x_train)
test_pred=model_dt.predict(x_test)
print("Accuracy for training: ",accuracy_score(train_pred, y_train))
print("Accuracy for testing: ",accuracy_score(test_pred, y_test))
