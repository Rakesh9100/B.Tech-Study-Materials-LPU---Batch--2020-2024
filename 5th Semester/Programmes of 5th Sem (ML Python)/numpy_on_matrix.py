import numpy as np

## Program to find the Outer Product
M1 = np.array([1,3,1,4])
M2 = np.array([[1],[2],[1],[3]])
print("Outer Product of M1 and M2 is")
print(np.outer(M1,M2))

## Program to find the Inner Product
M3 = np.array([1,3,1,4])
M4 = np.array([5,6,7,8])
print("Inner Product of M1 and M2 is")
print(np.inner(M3,M4))

## Program to find the Dot Product
M5 = np.array([1,3,1,4])
M6 = np.array([[1],[2],[1],[3]])
print("Dot Product of M1 and M2 is")
print(np.dot(M5,M6))

## Program to find the Cross Product
M7 = np.array([[1,3],[1,4]])
M8 = np.array([[5,6],[7,8]])
print("Cross Product of M1 and M2 is")
print(np.cross(M7,M8))

## Program to find the Inverse of a Matrix
M9 = np.array([[2,3],[4,5]])
print("Inverse of a matrix is")
print(np.linalg.inv(M9))

## Program to find the Eigen Value & Eigen Vector
M10 = np.array([[2,4],[5,3]])
print("Eigen Value of a matrix is")
print(np.linalg.eigvals(M10))
print("Eigen Vector of a matrix is")
print(np.linalg.eig(M10))

