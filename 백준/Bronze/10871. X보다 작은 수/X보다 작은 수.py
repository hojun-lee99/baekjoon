import sys

N, X = map(int, sys.stdin.readline().split())
data = list(map(int,sys.stdin.readline().split()))
for i in range(N):
    if data[i] < X:
        print(data[i], end=" ")