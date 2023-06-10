import pandas as pd, numpy as np
df = pd.read_csv("tips.csv")
print(df)
X = df['total_bill']
Y = df['tip']

from sklearn.model_selection import train_test_split
xtrain, xtest, ytrain, ytest = train_test_split(X, Y, test_size=0.3)

from sklearn.linear_model import LinearRegression, RANSACRegressor
model = RANSACRegressor(LinearRegression())

import matplotlib.pyplot as plt
from sklearn.metrics import r2_score
model.fit(xtrain.values.reshape(-1, 1), ytrain)
inliers = model.inlier_mask_
outliers = np.logical_not(inliers)
plt.scatter(xtrain.values.reshape(-1, 1)[inliers], ytrain[inliers], color='green')
plt.scatter(xtrain.values.reshape(-1, 1)[outliers], ytrain[outliers], color='red')
plt.plot(xtrain, model.predict(xtrain.values.reshape(-1, 1)))
print(r2_score(ytrain, model.predict(xtrain.values.reshape(-1, 1))))
# plt.scatter(xtrain, ytrain)
plt.show()
