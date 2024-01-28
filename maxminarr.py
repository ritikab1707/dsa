def maxarr(arr):
    maxi=arr[0]
    for i in range(len(arr)):
        if arr[i]>maxi:
            maxi=arr[i]
    return maxi
        
def minarr(arr):
    mini=arr[0]
    for i in range(len(arr)):
        if arr[i]<mini:
            mini=arr[i]
    return mini

arr=list(map(int,input().split()))
print(maxarr(arr),minarr(arr))