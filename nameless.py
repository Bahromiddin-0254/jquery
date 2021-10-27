def mknumber(n):
    return lambda x:x+n

f = mknumber(12)

print(f(901))
