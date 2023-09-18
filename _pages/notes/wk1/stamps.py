def give_me_stamps(n):
    if n == 13:
        a = 2
        b = 1
        return a, b
    elif n == 14: 
        a = 1
        b = 2
        return a, b
    elif n == 15:
        a = 0
        b = 3
        return a, b
    elif n == 16:
        a = 4
        b = 0
        return a, b
    else:
        return give_me_stamps(n-3) # but also increment a 

n = int(input("Enter number: "))
a, b = give_me_stamps(n)
print("a =", a, "b =", b)