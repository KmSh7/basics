def leep(year):
    if year%4==0:
        if year%100!=0:
            leap='True'
        else:
            if year%400==0:
                leap='True'
            else:
                leap='False'
    else:
        leap='False'
    return leap
b=1
while b==1:
    year=input("enter year=")
    print(leep(int(year)))
    b=int(input("do you want to continue(1/0)?="))