def place_queens(Q, r):
    if r == len(Q):    # reached the end
        print(Q)
    else:
        for j in range(n):
            legal = True
            for i in range(r-1):
                if Q[i] == j or Q[i] == j + r - i or Q[i] == j - r + i: # checking intersections
                    legal = False
            if legal:
                Q[r] = j
                if r < n:
                place_queens(Q, r+1)        # solve the problem for the NEXT square given that this square is solved

n = 4
Q = [0]*n
place_queens(Q, 0)