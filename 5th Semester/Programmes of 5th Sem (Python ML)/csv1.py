import numpy as np
import pandas as pd
import scipy as sp
import matplotlib as plt
import seaborn as sn
df = pd.read_csv("Salaries.csv")
print(df)
print(df.head())
print(df['rank'].dtype)
df_rank = df.groupby(['rank'])
print(df_rank.count())
print(df_rank.sum())
print(df_rank.max())
print(df_rank.min())
print(df_rank.mean())
print(df_rank.median())
print(df_rank.std())
print(df_rank.var())
print(df.head(20))
print(df.tail(20))
print(df.describe())
print(df.count())
## print(df_rank.mode()) -- AttributeError: 'DataFrameGroupBy' object has no attribute 'mode'print
print(df.size)
print(df.columns.dtype)
print(df.sample(20))
## Give the summary for the numeric columns in the dataset
print(df.describe())
print(df.describe)
## Calculate standard deviation for all numeric columns
print(df.std())
print(df.mean)

