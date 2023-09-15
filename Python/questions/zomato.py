
# Question : - Array Compromise============================================

from functools import reduce
import operator
arr = [2,4,7]
lis = []

for i in range(len(arr)+1):
    for j in range(i):
        check = arr[j:i]
        lis.append(check)
ans = 0
for i in lis:
    flag = 0
    for x in i:
        flag = flag | x
    if flag in i:
        ans+=1
print(ans)


# Second method=------------------------------
my_list = [2,4,7]

# Perform a bitwise OR operation on all elements in the list
result = reduce(operator.or_, my_list)

# Print the result
print(result)




#Question--- Valid Keys----------------------------======================================================
def count_divisors(n):
    count = 0
    for i in range(1, n + 1):
        if n % i == 0:
            count += 1
    return count
    
arr = [5,11]
ans = []
x = 0
check = 0
for i in range(1,arr[-1]+1):
    if count_divisors(i)==3:
        check+=1
    if i>=arr[x]:
        x+=1
        ans.append(check)
print(ans)





 