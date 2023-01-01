1.rotate clockwise
--------
def rotate_by_one(list_of_numbers):
  j =-1
  new_numbers=[]
  for i in range(len(list_of_numbers)):
    new_numbers.append(list_of_numbers[j])
    j=j+1
  return new_numbers

     

rotate_by_one([1,2,3,4,5])

2.Nth_even num
def Nth_even(num):
    if num%2==0:
        return num 
    else:
        return num-1
num=int(input())
Nth_even(num)


3.the farm problem
imal_legs={"chikens":2,"cows":4,"pigs":4}

def animals(no_chickens,no_cows,no_pigs):
        no_legs=no_chickens *animal_legs["chikens"] + no_cows * animal_legs["cows"] + no_pigs *animal_legs["pigs"]
        return (no_legs)

print(animals(2,3,5))
print(animals(1,2,3))
print(animals(5,2,8))

4.def back_to_home(directions):
    no_North=0
    no_East=0
    no_West=0
    no_South=0
    for i in directions:
        if(i=="N"):
            no_North=no_North+1
        elif(i=="E"):
            no_East=no_East+1
        elif(i=="W"):
            no_West=no_West+1
        elif(i=="S"):
            no_South=no_South+1
        else:
            pass

    if(no_North==no_East==no_West==no_South):
        return True
    else:
        return False


directions=input("\n Enter list of directions")
if(back_to_home(directions)==True):
    print("set of directions will lead him back to Starting point")
else:
      print("set of directions will not lead him back to Starting point")

5.Invert key and values 
def Invert_key_and_values(dicti):
  dicti_temp=dict()
  for key, value in dicti.items():
    dicti_temp[value]=key
  return dicti_temp


print(Invert_key_and_values({"a":"b","c":"d"}))

6.stupid addtion
def Stupid_addition(var1,var2):
  if type(var1)==type(var2):
    if type(var1)==int:
      return str(var1)+str(var2)
    else:
      return int(var1)+int(var2)
  else:
    return "None"
     
# A=int(input())
# B=int(input())
# C=input()
# D=input()
print(Stupid_addition(A,B))

7.reverse and capitalize 
def reverse(s):
    if len(s) == 0:
      return s
    else:
      return reverse(s[1:])+s[0].upper()
       
  
s = input()
reverse(s)
     

