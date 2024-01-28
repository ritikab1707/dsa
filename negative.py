n = int(input())
upper = int(n/2)+1
lower = n - upper
start_i_lower = 0

for i in range(0, upper):
  if i != 0:
    i = i + i
  start = n*i + 1
  end = start + n

  for j in range(start, end):
    print(j, end =" ")
  start_i_lower = i
  print()

start_i_lower -= 1

for i in range(0, lower):
  if(n%2 == 0):
    start_i_lower -= 1

  start = n*(start_i_lower-1) + 1
  end = start + n

  for j in range(1, n+1):
        print(j+n, end =" ")

  print()