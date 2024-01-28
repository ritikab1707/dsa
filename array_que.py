# n = int(input())
# arr1 = list(map(int, input().split()))
# arr2 = list(map(int, input().split()))
# sum1 = 0
# for i in range(n):
#     sum1 += arr1[i] * arr2[n - i - 1]
# print(sum1)

# x = int(input())
# y = int(input())
# res = x ** y
# print(res % 10)

#armstrong number
num = int(input())
n = len(str(num))
sum = 0
for i in str(num):
    sum += int(i) ** n 
if sum == num:
    print("yes")
else:
    print("no")