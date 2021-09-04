# Enter your code here. Read input from STDIN. Print output to STDOUT
def bin(x,l,r):
    if(l<=r):
        mid=(l+r)//2
        #print(mid,'\t',a[mid])
        if(a[mid]==x):
            return(True)
        elif(a[mid]>x):
            return(bin(x,l,mid-1))
        else:
            return(bin(x,mid+1,r))
    else:
        return(False)
n=int(input())
a=list(map(int,input().split()))
m=int(input())
c=list(map(int,input().split()))
a.sort()
for i in c:
    if(bin(i,0,len(a)-1)):
        print('Happy Halloween!')
    else:
        print('Tricky!')
