# cook your dish here
d={}
d[1]=1 
mod=1_000_000_007
for i in range(2,1_000_001):
    d[i]=(d[i-1]*i)%mod
T=int(input())
for t in range(T):
    n=int(input())
    arr=list(map(int,input().split(' ')))
    ans=0
    for z in arr:
        ans+=d[z]
    print(ans%mod)    
