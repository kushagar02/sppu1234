A = []
a = int(input("Enter number of Students that Play Cricket : "))
print("Enter Names of Students that Play Cricket")

for i in range(0, a):
	ele = (input())
	A.append(ele)

B = []
b = int(input("Enter number of Students that Play Badminton : "))
print("Enter Names of Students that Play Badminton")
for i in range(0, b):
	ele = (input())
	B.append(ele)

C = []
c = int(input("Enter number of Students that Play Football : "))
print("Enter Names of Students that Play Football")
for i in range(0, c):
	ele = (input())
	C.append(ele)
	
def bothAB():
    bothAB = []
    for i in A:
        if i in B:
            bothAB.append(i)
    print("The students who play both cricket and badminton are :",bothAB)

def eitherAB():
    eitherAB = []
    for i in A:
        if i not in B:
            eitherAB.append(i)
    for i in B:
        if i not in A:
            eitherAB.append(i)
    print("The students who play either cricket or badminton but not both are :",eitherAB)

def neitherAB():
    neitherAB = []
    for i in C:
        if i not in A and i not in B:
            neitherAB.append(i)
    print("The number of students who play neither cricket nor badminton are :",len(neitherAB))

def ABC():
    ABC = []
    for i in A:
        if i in C and i not in B:
            ABC.append(i)
    print("The number of students who play cricket and football but not badminton are :",len(ABC))

bothAB()
eitherAB()
neitherAB()
ABC()
