n=int(input())
a=map(int,input().strip().split(" "))
a=list(a)
mx1=mn=a[0]
for i in a:
    if (i>mx1):
        mx1=i
    elif (i<mn):
        mn=i
mx2=mn
for i in a:
    if (i<mx1 and i>mx2):
        mx2=i
print(mx2)