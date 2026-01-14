num1 = int(input("Enter first number : "))
num2 = int(input("Enter second number : "))
print("1.Add \n2.Subtract\n3.Multiply\n4.Division")
op = int(input("Enter Number of Operation : "))
if op==1 :
    print("result = ",num1 + num2)
elif op==2 :
    print("result = ",num1 - num2)
elif op==3 :
    print("result = ",num1 * num2)
elif op==4 :
    if num2==0 :
        print("Error! Division By Zero")
    else :
        print("result = ",num1 / num2)
