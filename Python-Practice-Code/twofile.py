def fcopy(fileName1,fileName2):
    fileIn=open(fileName1, 'r')
    fileOut=open(fileName2, 'w')
    for word in fileIn.readlines():
        if '//' not in word:
            fileOut.write(word)
    fileIn.close()
    fileOut.close()
print('==============The Input file=================')
File = open('input.txt')
filecontent = File.read()
print(filecontent)
File.close()
print('==============END =================\n \n')
print('==============The Output file=================')
File = open('output.txt')
filecontent = File.read()
print(filecontent)
File.close()
print('==============End=================\n\n')

print("Symbol\t\tToken\t\t\tAttribute")
print("======\t\t=====\t\t\t==========")

fcopy('input.txt','output.txt')
#open('output.txt')



with open('output.txt','r') as f:
    for line in f:
        for word in line.split():
            if word=='int' or word=='include'or word=='main'or word=='for' or word=='if'  or word=='double' or word=='printf' or word=='scanf':

                print(word+' \t\t keyword')
            if word=='stdio.h' or word=='math.h'or word=='stdlib.h'or word=='string.h':
                print(word+' \t\t headerfile')
            if word=='i' or word=='j' or word=='sum1'or word=='sum2' or word=='d':
                 print(word+' \t\t variable')
                



File = open('output.txt')
filecontent = File.read()

a=list(filecontent)
for i in range(len(a)):
    if a[i]=='+':
        fil=open('output.txt','w')
        fil.write(" "+a[i]+"\tarithmetic operator\t    plus")
     
    if a[i]=='-':
        print(  " "+a[i]+"\tarithmetic operator\t    Minus")
    if a[i]=='*':
         print(" "+a[i]+"\tarithmetic operator\t    Multiplecation")
    if a[i]=='/':
         print(" "+a[i]+"\tarithmetic operator\t    Divided")
    if a[i]==';':
         print(" "+a[i]+"\tSpecial Symbol\t\t    Semicoma")
    if a[i]==',':
         print(" "+a[i]+"\tSpecial Symbol\t\t    Coma")
    if a[i]=='(':
         print(" "+a[i]+"\tSpecial Symbol   \t    Starting Openning parenteses")
    if a[i]==')':
         print(" "+a[i]+"\tSpecial Symbol   \t    Closing parentheses")
    if a[i]=='#':
        print(" "+a[i]+"\tSpecial Symbol\t\t    Hash")
    if a[i]=='{':
         print(" "+a[i]+"\tSpecial Symbol\t\t    Opening Curly brace")
    if a[i]=='}':
         print(" "+a[i]+"\tSpecial Symbol\t\t    Closing Curly Brace")
    if a[i]=='[':
         print(" "+a[i]+"\tSpecial Operator\t    Starting Square Brace")
    if a[i]==']':
         print(" "+a[i]+"\tSpecial Operator\t    Closing Square Brace")
    if a[i]=='%':
         print(" "+a[i]+"\tUnary operator\t\t    Modulus")
    if a[i]=='&':
         print(" "+a[i]+"\tSpecial Symbol\t\t    Ampersand\n\n")
         if type(a[i])=='class str':
             print(string)
print('\n\n\t\t==============End=================\n\n')
