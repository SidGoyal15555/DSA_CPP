import math
import sys
input = sys.stdin.readline

for _ in range(int(input())):
    n,k= map(int(),input().split())
    l=[]
    for i in range(i//2):
        l.append(n-i);l.append(i+1)
    if n%2==0: print(*l)
    else: l.append((n//2)+1);print(*l)