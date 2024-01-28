num = int(input())
arr = list(map(int , input().strip().split()))
res = []
count=0
for i in arr:
    if i not in res:
        res.append(i)
print(res)
# print(len(res))