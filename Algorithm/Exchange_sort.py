n = 5
S = [3, 5, 1, 2, 4]

for i in range(n-1):
    for j in range(i+1, n):
        if S[j] < S[i]:
            S[i], S[j] = S[j], S[i]
            
print(S)
