str = 'ayush'
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
z= z.split(" ",1)
print(z)


