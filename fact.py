num=7
fact=1
if num < 0:
print("does nt exist")
elif num == 0:
print("fact")
else:
for i in range(1,num+1):
fact=fact*i
print("num is",fact)
