for i in range(int(input())):
    n=int(input())
    nums=[]
    weap=0
    for j in range(n):
        a=input()
        nums.append(a)
    for j in range(10):
        count=0
        for k in range(n):
            if nums[k][j]=="1":
                count+=1
        if count%2!=0:
            weap+=1
    print(weap)
