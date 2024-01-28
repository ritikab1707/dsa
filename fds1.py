def removeDuplicates(d):
    list1=[]
    for i in d:
        if i not in list1:
            list1.append(i)
    return list1 

def intersection(list1, list2):
    list3 = []
    for i in list1:
        if i in list2:
            list3.append(i)
    return list3 

def union(list1, list2):
    list3 = list1.copy()
    for i in list2:
        if i not in list3:
            list3.append(i)
    return list3 

def diff(list1, list2):
    list3 = []
    for i in list1:
        if i not in list2:
            list3.append(i)
    return list3 

def sym_diff(list1, list2):
    D1 = diff(list1, list2)
    D2 = diff(list2, list1)
    list3 = union(D1, D2)
    return list3 

def cricket_and_badminton(list1, list2):
    list3 = intersection(list1, list2)
    return list3

def either_cricket_badminton(list1, list2):
    list3 = sym_diff(list1, list2)
    return list3

def neither_cricket_badminton(list1, list2, list3):
    list4 = diff(list1, union(list2, list3))
    return list4

def cricket_football_noBadminton(list1, list2, list3):
    list4 = diff(intersection(list1, list2), list3)
    return len(list4)

SEComp = []
n = int(input("Enter number of students in SE Comp: "))
print("Enter the name of ", n , "students: ")
for i in range(n):
    name = input()
    SEComp.append(name)
print("Original list of students in SE Comp: " + str(SEComp))

Cricket = []
n = int(input("Enter number of students who play cricket: "))
print("Enter the name of ", n , "students: ")
for i in range(n):
    name = input()
    Cricket.append(name)
print("Original list of students who play cricket: " + str(Cricket))
Cricket = removeDuplicates(Cricket)
print("List of students playing Cricket after removing duplicates: " + str(Cricket))

Badminton = []
n = int(input("Enter number of students who play badminton: "))
print("Enter the name of ", n , "students: ")
for i in range(n):
    name = input()
    Badminton.append(name)
print("Original list of students who play badminton: " + str(Badminton))
Badminton = removeDuplicates(Badminton)
print("List of students playing Badminton after removing duplicates: " + str(Badminton))

Football = []
n = int(input("Enter number of students who play football: "))
print("Enter the name of ", n , "students: ")
for i in range(n):
    name = input()
    Football.append(name)
print("Original list of students who play football: " + str(Football))
Football = removeDuplicates(Football)
print("List of students playing Football after removing duplicates: " + str(Football))

flag = 1
while(flag == 1):
    print("1. List of students who play both cricket and badminton")
    print("2. List of students who play either cricket or badminton but not both")
    print("3. List of students who play neither cricket nor badminton")
    print("4. List of students who play cricket and football but not badminton")
    print("5. Exit")
    ch = int(input("Enter your choice from 1 to 5: "))
    if ch == 1:
        print("List of students who play both cricket and badminton: ", cricket_and_badminton(Cricket, Badminton))
        a = input("Do you want to continue (Y/ N): ")
        if a == "Y":
            flag = 1
        else:
            flag = 0
            print("Thanks for using this program")
    elif ch == 2:
        print("List of students who play either cricket or badminton but not both: ", either_cricket_badminton(Cricket, Badminton))
        a = input("Do you want to continue (Y/ N): ")
        if a == "Y":
            flag = 1
        else:
            flag = 0
            print("Thanks for using this program")
    elif ch == 3:
        print("List of students who play neither cricket nor badminton: ", neither_cricket_badminton(SEComp, Cricket, Badminton))
        a = input("Do you want to continue (Y/ N): ")
        if a == "Y":
            flag = 1
        else:
            flag = 0
            print("Thanks for using this program")
    elif ch == 4:
        print("List of students who play cricket and football but not badminton: ", cricket_football_noBadminton(Cricket, Football, Badminton))
        a = input("Do you want to continue (Y/ N): ")
        if a == "Y":
            flag = 1
        else:
            flag = 0
            print("Thanks for using this program")
    elif ch == 5:
            flag = 0
            print("Thanks for using this program")
    else:
        print("Wrong choice")
    a = input("Do you want to continue (Y/ N): ")
    if a != "Y":
        flag = 0
        print("Thanks for using this program")
