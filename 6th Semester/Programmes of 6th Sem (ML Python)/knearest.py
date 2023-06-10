import pandas as pd
from sklearn.impute import SimpleImputer
from sklearn.preprocessing import LabelEncoder
from sklearn.model_selection import train_test_split
from sklearn.metrics import accuracy_score
from sklearn.neighbors import KNeighborsClassifier

df=pd.read_csv("breastcancer.data", header=None, na_values="?")
print(df.isna().sum())
df_i=pd.DataFrame(SimpleImputer(strategy="most_frequent").fit_transform(df))
print(df_i.isna().sum())

for i in range (0, 10):
    df_i[i]=LabelEncoder().fit_transform(df_i[i])
print(df_i)

xtrain, xtest, ytrain, ytest=train_test_split(df_i.drop(columns=[0]), df_i[0], test_size=0.3)
print(xtrain.shape, xtest.shape, ytrain.shape, ytest.shape)

for i in range(2, 10):
    model=KNeighborsClassifier(n_neighbors=i)
    model.fit(xtrain, ytrain)
    train_predict=model.predict(xtrain)
    test_predict=model.predict(xtest)
    print("Accuracy for training: ",accuracy_score(train_predict, ytrain))
    print("Accuracy for testing: ",accuracy_score(test_predict, ytest))
