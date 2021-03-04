N=input("enter the nomber of the composers:")
name=[]
surname=[]
birth=[]
death=[]
N=int(N)
for x in range(N):
    n=input(f"enter the name of composer number {x+1} : ")
    name.append(n)
    s=input(f"enter the surname of composer number {x+1}: ")
    surname.append(s)
    b=input(f"enter birth year of composer number {x+1}")
    birth.append(b)
    d=input(f"enter beath year of composer number {x+1}")
    death.append(d)
ages=[]
for x in range(N):
    ages.append(int(death[x])-int(birth[x]))
for x in range(N):
    print(f"name: {name[x]},surname: {surname[x]},age: {ages[x]}")
total_ages=0
for x in range(N):
    total_ages=total_ages+ages[x]
average=total_ages/N
print(f"average of ages: {average}")