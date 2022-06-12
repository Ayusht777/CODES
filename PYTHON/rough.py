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
# it will print if first word of a sentence is captile

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
# ------------------------------------------------------
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
# ------------------------------------------------------------------------
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
# ----------------------------------------------------------------------------
# list
# ls1 = ["he", 455, .1442, '@']
# print(ls1)
# print(len(ls1))
# # length of list mean total element
# print(f"the list = {ls1} and lenth = {len(ls1)}")
# # adding two list
# ls2 = ["new", "5445", 774]
# print(ls1+ls2)
# # letys store this in new list
# ls = ls1 + ls2
# print(ls)
# # now add any elemnt in this list
# ls = ls + ["s"]
# print(ls)
# #indexing and slicing in list
# print(ls[0])
# print(f"'{ls[0]}'")
# print(ls[0:3])
# print(ls[::-1])
# # reverse list
# #lets cahnge any particluar indexing element
# ls[0]= "a"
# print(ls)
# # multi the elemnet
# print(ls*2)
# =================================================================
# list methods
# ls = [1,2,3,4]
# print(ls)
# ls.append(5)#to add element
# print(ls)
# ls.append("aks")
# print(ls)
# ls.pop(0)# it will remove the element at 0 index
# print(ls)
# # or remove method
# ls.remove(3) # it will particluar element
# print(ls)
# #or
# del ls[0]
# print(ls)
# ls.remove("aks")
# ls.sort()# it will sort but only should  a hve singular data type
# print(ls)
# ls.reverse()
# print(ls)
# lx = [43,4,66,8894,7]
# ls.extend(lx)#it will merege two list at end of one
# print(ls)
# ls.insert(0,47.55)# add particlure elemnent at any index
# print(ls)
# lx.extend(ls)
# print(lx)
# #.clear
# ls.clear()
# print(ls)
# #.index to find index of any element
# print(lx.index(66))
# # .count it will count how many times a element Qcurres
# print(lx)
# print(lx.count(66))
# ls = lx.copy()
# print(ls)
# #nested list
# lz= [4,5,[4,7,8],3]
# print(lz)
# print(lz[2][2])
# lx = [lz,45]
# print(lx)
# print(lx[0][2][2])
# #dictionary
# dic = {"int":788,"float":7.24,"list":[4,7,8],"str":"sdssdfsd","dic":{"x":"sasa"},"tup":(1,5)}
# print(dic)
# print(dic["tup"][1])
# dic["float"] =45.47 # we have just change value of a key
# print(dic)
# # let perform arthmetic to dic
# dic["float"] = dic["float"] - 4
# print(dic)
# dic["str"]=dic["str"].upper()
# print(dic)
# dic["a"]=458
# print(dic)
# print(dic.values(),"\n",dic.keys(),"\n",dic.items())
# print(dic.get("int"))
# dic.pop("float")
# print(dic)
# --------------------------------------------------------------
# # dic built methods
# dic  = {"s":555,"a":78,"re":788,"w":79.8}
# print(dic)
# dic.pop("re")
# print(dic)
# dic.popitem()# removes last key
# print(dic)
# dic2 = {"we":5446,"a":7.8}
# print("dic2 =",dic2)
# dic.update(dic2)
# print(dic)
# dicc = dic.copy()
# print(dicc)

# ls = '1'
# newdic = dicc.fromkeys(dicc,ls)
# print(newdic)

# newdic.setdefault("xs")
# print(newdic)
# newdic.setdefault("sd",77)
# print(newdic)
# # it will convert two set in a dic
# nx = {"sdssdf"}
# print(type(nx))
# nz = {"774"}

# ew = dict(zip(nx,nz))
# print(ew)
# print(len(ew))
# ew = {1:"ss",2:"dsd"}
# print(all(ew))
# print(any(ew))
# ex = {}
# print(type(ex))
# print(any(ex))# false due to empty dict
# qw = {"a":1,"c":3,"b":2}
# qw = sorted(qw.items())
# print(qw)
# =-====-----------==-=-==-=-=-=-=-=-=-=-=-=-=-=-=-=-==
# # nested dict
# dic = {"sss":455,"x":{"ass":545645}}
# print(dic["x"]["ass"])

# #********************************************************
# # tuples
# # it cannot be change
# t1 = (456,4,7,7)
# print(t1)
# print(len(t1))
# print(t1[0])
# t1 = (14,775,[774,88])
# print(t1[2][0])
# print(t1[::-1])
# #t[0]= 44545
# # cannot chnage
# t2 =(544,5466)
# t = t1 + t2
# print(t)
# t = (442,t1)
# print(t)
# print(type(t))
# print(max(t))
# print(min(t))
# ??????????????????????????????????????????????????????????????
# # sets
# se = {455,78,88}
# print(type(se))
# # we cannot use mutable elmeenst in sets like list ,dic,set
# sx = {"asdsd",45.4,77,(4544)}
# print(sx)
# sx.add(0.10)# it is unorder
# print(sx)
# sx.update([4.4,78.899])
# #syntax set.update([value1,value2.....])
# print(sx)
# # set witj only str
# se = set("sdnjasfnsfkjsfn")# typecasting
# print(se)
# se.remove("s")
# print(se)
# # or
# se.discard("j")#it will not give error if element doesnot present
# print(se)
# se.pop()
# print(se)
# #!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
# #set methods
# from traceback import print_tb


# x= {4,1,7,8}
# y = {7,4,5,6}
# print(x|y)#unions
# # with non repated elmenets
# z = x.union(y)
# print(z)
# print(x&y)
# z = x.intersection(y)
# print(z)
# print(x-y)
# print(y-x)
# z =x.difference(y)
# print(z)
# z =y.difference(x)
# print(z)
# print(sum(x))
# z= frozenset(x)# cannot chnage
# dic = {"sd":44}
# print(frozenset(dic))
# /////////////////////////////////////
# # bool
# a = True
# print(type(a))
# print(int(a))
# b = False
# print(type(b))
# print(int(b))
# print(2<3)
# print(3>2)
# print(2==2)
# print(2!=0)
# print(4>=3)
# print(3<=1)
# x= None
# print(x)

from optparse import Values
import os # working dir folder
# f = open("te.txt")
# x = f.read()
# print(x)
# y = f.read()
# print(y)  # it is null due to pointer is at end
# f.seek(0)  # it will rewind the pointer
# x = f.read()
# print(x)
# f.close()
# with open("te.txt") as f:  # it is just a cursor rweinder
#     r = f.read()
# print(r)
# print(r)
# f.close()
# with open("te.txt") as f:
#     rr = f.readlines()  # ! new lines with list
# print(rr)
# f.close()
# f = open("te.txt", "r")
# print(f.read())
# f.close()
# with open("te.txt") as f:
#     rr = f.readline()  # ! new lines with string
# print(rr)
# f.close()
# print(os.listdir())
# f = open("te.txt", "a")
# f.write("\nschdfjfjcd788")
# f.close()
# # more about file handling going to learn soon after function


# #!????~~~^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
# #chained comparssion opertor
# print(1<2 and 2<3)
# print(2>4 or 2<4)

# print("h"=="H" or "h"!= "h")
# x = "ayush"

# # Python Identity Operators
# print(1 is 1 )
# print(2 is not 4 )
# #Python Membership Operators
# print("x" not in  x)
# print("a"in x)
# #!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
# # if ('h'=="x"):
# # 	print("correct")
# # else:
# # 	print("not correct")
# # print("ENTER A NUMBER:")
# # x = int(input())# type casting is requried in python
# # if (x%2==0):
# # 	print("even")
# # else:
# #print("odd")
# x = "program to determine your age group"

# print(x.upper())
# print("ENTER YOUR AGE:")
# x = int(input())
# if(x<=2):
# 	print("YOUR ARE A BABY")
# elif(x<=12):
# 	print("YOU ARE A CHILD")
# elif(x<=19):
# 	print("YPUR ARE A TEENAGER")
# else:
# 	print("IT IS TIME TO WORK")

#*************************************************************
# for loops
# print("ENTER YOUR NAME:")
# name = str(input())
# for i in name:
# 	print(i)
#
#  print(i.upper())

# # for loop using list
# ls =[4,47,.01]
# for i in ls:
# 	print(i)
# for i  in range(0,3):
# 	print(ls[i],":",i)
# s = 0
# for i in ls:
# 	s= s+i
# print(s)
# tu = (4,5,7,8)
# x =0
# for i in tu:
# 	print(x+1,i)
# 	x+=1
# #tuple unpacing
# tuu = [(1,5,47),(7,8,9)]
# for i in tuu:
# 	print(i)

# for (i,j,k) in tuu:
# 	print(i,j,k)
# # loop over set
# se = {1,5.0,4,8,7}
# for i in se:
# 	print(i)

# dx = {"x":1,"z":7,"q":78}
# for i in dx:
# 	print(i)
# for i in dx.items():
# 	print(i)
# for i in dx.values():
# 	print(i)
# # dic unpacking
# d = {'k1':1,'k2':2,'k3':3}
# for (k,v) in d :
#     print(k,v)

