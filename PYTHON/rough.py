"""str = 'ayush'
str = str.upper()
print(str)
str = str.lower()
print(str)
str = str.capitalize()
print(str)
# count number of letter its is case senstive
print(str.count("y"))
print(str.count("Y"))
# to find postion of any letter
print(1+str.find("h"))
# +1 to get in human form means 1 to 5
# not 0 to 5
str = '        sdffs         '
print(str)
print(str.strip())
# it will trim whitespaces
print(str.lstrip())
# to strip left side white spaces
print(str.rstrip())
# it removes right side whitespaces
x = 'hello  my new world of flower'
print(x)
# it will replace any word in string with any word
x = x.replace('flower','fire')
print(x)
z = 'hello  bake cake bake times '
z = z.replace("bake","cake",1)
print(z)
# above stament will replace any word any partiluer time
z = z.split()
# it will create a list
print(z)
z = 'hello  bake cake bake times '
z = z.split("b")
# this will split at b
print(z)
z = 'hello bake cake bake times '
z= z.split(" ",)
print(z)"""
"""x ="aysa"
print(x.isalpha())
x ="ays  a"
print(x.isalpha())
a ="5566"
print(a.isalnum())
a ="55@@6"
print(a.isalnum())
q = "4544646"
print(q.isdigit())
q = "45446.46"
print(q.isdigit())
q = "4544646"
print(q.isdecimal())
q = "45446.46"
print(q.isdecimal())
# it will give flase due to .
print("-----------------")
w ="jfsnfskfnsjk"
a = "ddwdAWWW"
print(w.islower()),print(a.islower())
y = "AASDD"
print(y.isupper())
#it will tell it is a upper case or  not
print(w.isupper())
print("-----------------")
q = "  "
print(q.isspace())
# it will print true if it is purely have spaces only
print("------------------------------")
r = 'a@@@@'
print(r.isascii())
# it will print true if all char in a string have a ascci value
print("-----|||||------------------------")
ux = "aydydayd"
print(ux.startswith("a"))
print(ux.endswith("d"))
print("]]]]]]]]]]]]]]]]]]]]]]")
nac = "shdhshd"
print(nac)
print(nac.center(40))
# it will add spaces by default from center mean half left and right
print(nac.center(12,"-"))
# you  can only add any particlure char any you cannot add more tahn one char
print("[[]]]]]]]][]]]]]\]\\")
a = "www"
print(a.isidentifier())
The isidentifier() method returns True if the string is a valid identifier, otherwise False.

A string is considered a valid identifier if it only contains alphanumeric letters (a-z) and (0-9), or underscores (_).
A valid identifier cannot start with a number, or contain any space
e = "Aasdsfsf"
print(e.istitle())"""
#it will print if first word of a sentence is captile

# print("my name is {}".format("ayush"))
# # {} is a p;ace holder
# x = "ayush"
# print("my name is {}".format(x))
# a = "name"
# b = "game"
# c ="fame"
# print("something {},{},{}".format(a,b,c))
# # lets change the oreder
# print("something {2},{1},{0}".format(a,b,c))
#  # lets repeate a single string
# print("something {1},{1},{1}".format(a,b,c))
# p = 500
# p_per= 500/42
# print("THE PRICE PER KG {} AND PER PEICE {}".format(p,p_per))
# # lets use perision
# print("THE PRICE PER KG {} AND PER PEICE {:0.2f}".format(p,p_per))
# #pading this will ad white spaces as you want
# # left pading
# print("hello my {a:>10} bless you".format(a= "good"))
# # right padding
# print("checking something {r:<10} here".format(r = "right"))
# #center padiing
# print("checking something {c:^15}a".format(c = "center"))
# # lets add another symoble as padding
# print("hello {z:=^8}new ".format(z="my"))
#------------------------------------------------------
# fstring
# name = "ayush"
# print(f"hello my friend {name}")
# # persion
# q =475.5
# w = q/2
# print(f"the q = {q:1} and the w ={w:1.2f}")
# num = 23.45984
# print("your number is:{0:10.4f}".format(num).upper())
# print(f"your number is:{num:10.2f}".lower())
# print(f"47 divide 9 is eqaul to {47/9:2.1f}") # using percision
#------------------------------------------------------------------------
# # % formmatting
# print("hello %s"%("world"))
# z = "ayush"
# s ="\ttalesara"
# print("hello %s %s"%(z,s))
# # %r it is raw version of any string
# print("hello %s %r"%(s,s))
# print("%s %d"%(9.9,9.9))
# # %d is integer place holder
# #padding
# print("9 div by 7 = %1.2f"%(9/7))
# print("7 div by 17 = %5.3f"%(7/17))
#----------------------------------------------------------------------------



