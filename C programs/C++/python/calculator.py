def add(P,Q):
    return P + Q
def substract(P,Q):
    return P - Q
def multiply(P,Q):
    return P * Q
def divide(P,Q):
    return P/Q
print("please print the operation.")
print("a.Add")
print("b.substract")
print("c.Multiply")
print("d.divide")
choice =input("Please enter choice(a/b/c/d):")
num_1=int(input("Please enter first number"))
num_2=int(input("Please enter 2nd number"))
if choice=="a":
    print(num_1,"+", num_2, "=",add(num_1,num_2))
elif choice=="b":
        print(num_1, "-", num_2, "=", substract(num_1,num_2))
elif choice=="c":
            print(num_1, "*", num_2, "=", multiply(num_1, num-2))
elif choice=="d":
                print(num_1, "/", num_2, "=", divide(num_1,num_2))
else:
                    print("This is an invalid input")
