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
x ="aysa"
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
"""The isidentifier() method returns True if the string is a valid identifier, otherwise False.

A string is considered a valid identifier if it only contains alphanumeric letters (a-z) and (0-9), or underscores (_).
A valid identifier cannot start with a number, or contain any space"""
e = "Aasdsfsf"
print(e.istitle())
#it will print if first word of a sentence is captile


