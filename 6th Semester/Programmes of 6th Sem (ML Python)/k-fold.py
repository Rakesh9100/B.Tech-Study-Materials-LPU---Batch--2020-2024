from sklearn import datasets
data=datasets.load_breast_cancer()
X=data.data
Y=data.target
print(X.shape, Y.shape)
# print(data.DESCR) ## Describe the data

from sklearn.model_selection import train_test_split, KFold, StratifiedKFold
from sklearn.svm import SVC
xtrain, xtest, ytrain, ytest=train_test_split(X, Y, test_size=0.3)
print(xtrain.shape, xtest.shape)
kf=KFold(n_splits=10)
skf=StratifiedKFold(n_splits=10)

from sklearn.metrics import accuracy_score
import numpy as np
model=SVC()
i=1
results_kf, results_skf=[], []
for trainindex, testindex in kf.split(X,Y):
    xtrain, xtest=X[trainindex], X[testindex]
    ytrain, ytest=Y[trainindex], Y[testindex]
    model.fit(xtrain, ytrain)
    pred=model.predict(xtest)
    print("Testing accuracy in ",i," fold ",accuracy_score(ytest, pred))
    results_kf.append(accuracy_score(ytest, pred))
    i=i+1
print(np.average(results_kf))

for trainindex, testindex in skf.split(X,Y):
    xtrain, xtest=X[trainindex], X[testindex]
    ytrain, ytest=Y[trainindex], Y[testindex]
    model.fit(xtrain, ytrain)
    pred=model.predict(xtest)
    print("Testing accuracy in ",i," fold ",accuracy_score(ytest, pred))
    results_skf.append(accuracy_score(ytest, pred))
    i=i+1
print(np.average(results_skf))

from sklearn.model_selection import cross_validate
cv=cross_validate(SVC(), X, Y)
print(np.average(cv['test_score']))

from sklearn.model_selection import GridSearchCV
params={'C':[0.1,  1, 10, 100],
        'kernel':['linear', 'poly', 'rbf']}
gs=GridSearchCV(SVC(), params)
gs.fit(xtrain, ytrain)
print(gs.best_params_)

from sklearn.metrics import classification_report, confusion_matrix
print(confusion_matrix(ytest, gs.predict(xtest)),
      classification_report(ytest, gs.predict(xtest)))
