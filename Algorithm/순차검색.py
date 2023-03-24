def linear_search(S, n, x):
    location = 0
    for i in range(1, n+1):
        if S[i] == x:
            location = i
            break
    return location

S = [0, 2, 4, 5, 7, 8, 10, 13, 15, 18]
n = len(S) - 1 
x = 13

location = linear_search(S, n, x)
print(location)