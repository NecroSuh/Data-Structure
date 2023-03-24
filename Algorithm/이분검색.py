def binary_search(S, n, x):
    left = 1
    right = n
    
    while left <= right:
        mid = (left + right) // 2
        if S[mid] == x:
            return mid
        elif S[mid] < x:
            left = mid + 1
        else:
            right = mid - 1
            
    return 0

S = [1, 3, 5, 7, 9]
n = 5
x = 5

location = binary_search(S, n, x)
print(location)




