num = 7

factorial = 1

if num < 0:
   print("factorial does not exist for negative numbers")
elif num == 0:
   print("The fact is ")
else:
   for i in range(1,num + 1):
       factorial = factorial*i
   print("The factorial of",num,"is",factorial)
