def reverse(arr,start,end):
    while(start<end):
        arr[start],arr[end]=arr[end],arr[start]
        start=start+1
        end=end-1
    return arr

arr=list(map(int,input().split()))
print(reverse(arr,0,len(arr)-1))