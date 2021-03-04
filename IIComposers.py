def data_in ():
    x=1
    name=[]
    surname=[]
    birth=[]
    death=[]
    ages=[]
    while x>0 :
        n=input(f"enter the name of composer number {x} : ")
        name.append(n)
        s=input(f"enter the surname of composer number {x}: ")
        surname.append(s)
        b=input(f"enter birth year of composer number {x}")
        birth.append(b)
        d=input(f"enter death year of composer number {x}")
        death.append(d)
        ages.append(int(d)-int(b))
        A=input("add more? yes or no:  ")
        if A=="yes":
            x=x+1
            continue
        else:
            break
    return(name,surname,ages)

def average_ages (list):
    total_ages=0
    l=len(list)
    for x in range(l):
        total_ages=total_ages+list[x]
    return(total_ages/len(list))

n,s_n,a=data_in()
av= average_ages(a)
print (n)
print (s_n)
print (a)
print(f"average of ages: {av}")