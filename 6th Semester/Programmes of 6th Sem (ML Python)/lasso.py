import numpy as np, pandas as pd
from sklearn.datasets import load_boston

data = load_boston()
X = pd.DataFrame(data.data, columns=data.feature_names)
Y = data.target
X['target'] = Y
print(X.head())

from sklearn.impute import SimpleImputer
from sklearn.preprocessing import StandardScaler, MinMaxScaler
corr = sns.pairplot(X[['DSJN', 'GANGA', 'SN', 'target']])

import seaborn as sns
import matplotlib.pyplot as plt
plt.subplots(figsize=(10, 10))
corr = sns.heatmap(X.corr(), annot=True)
plt.show()
print(corr)

corr = sns.pairplot(X[['CRIM', 'INDUS', 'RM', 'target']])
print(corr)
plt.show()

from sklearn.linear_model import Lasso, Ridge, ElasticNet, LassoCV
from sklearn.model_selection import train_test_split
from sklearn.metrics import r2_score, mean_absolute_error, mean_squared_error, mean_squared_log_error, mean_absolute_percentage_error
from math import sqrt

xtrain, xtest, ytrain, ytest = train_test_split(X.drop(columns=['target']), Y, test_size=0.3)

model_l = Lasso(alpha=0.01)
model_l.fit(xtrain, ytrain)
print("Lasso Metrics:")
print(r2_score(ytest, model_l.predict(xtest)))
print(mean_absolute_error(ytest, model_l.predict(xtest)))
print(mean_squared_error(ytest, model_l.predict(xtest)))
print(sqrt(mean_squared_error(ytest, model_l.predict(xtest))))
print(mean_absolute_percentage_error(ytest, model_l.predict(xtest)))

model_r = Ridge(alpha=0.01)
model_r.fit(xtrain, ytrain)
print("\nRidge Metrics:")
print(r2_score(ytest, model_r.predict(xtest)))
print(mean_absolute_error(ytest, model_r.predict(xtest)))
print(mean_squared_error(ytest, model_r.predict(xtest)))
print(sqrt(mean_squared_error(ytest, model_r.predict(xtest))))
print(mean_absolute_percentage_error(ytest, model_r.predict(xtest)))

model_e = ElasticNet(alpha=0.01)
model_e.fit(xtrain, ytrain)
print("\nElasticNet Metrics:")
print(r2_score(ytest, model_e.predict(xtest)))
print(mean_absolute_error(ytest, model_r.predict(xtest)))
print(mean_squared_error(ytest, model_r.predict(xtest)))
print(sqrt(mean_squared_error(ytest, model_r.predict(xtest))))
print(mean_absolute_percentage_error(ytest, model_r.predict(xtest)))

alphas = [0.001, 0.01, 0.1, 1, 10, 100]
model_cv = LassoCV(alphas=alphas)
model_cv.fit(xtrain, ytrain)
print("\nLassoCV Metrics:")
print(r2_score(ytest, model_cv.predict(xtest)))
print(mean_absolute_error(ytest, model_cv.predict(xtest)))
print(mean_squared_error(ytest, model_cv.predict(xtest)))
print(sqrt(mean_squared_error(ytest, model_cv.predict(xtest))))
print(mean_absolute_percentage_error(ytest, model_cv.predict(xtest)))
