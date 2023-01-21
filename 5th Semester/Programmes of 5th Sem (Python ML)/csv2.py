import numpy as np
import pandas as pd
import scipy as sp
import matplotlib as plt
import seaborn as sn
flights = pd.read_csv("flights.csv")
print(flights)
## Select the rows having atleast one missing value
print(flights[flights.isnull().any(axis=1)].head())
print(flights[flights.isnull().any(axis=1)].count())
print(flights[flights.isnull().any(axis=1)].sum())
print(flights[['dep_delay','arr_delay']].agg(['min','mean','max']))
