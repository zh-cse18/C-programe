#Bismillahir Rahamanir  Rahim
File = open('input.txt')
filecontent = File.read()
print("Symbol\t\tToken\t\t\tAttribute")
print("======\t\t=====\t\t\t==========")
a=list(filecontent)
for i in range(len(a)):
    if a[i]=='+':
        print(" "+a[i]+"\tarithmetic operator\t    plus")
     
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
        print(" "+a[i]+"\tSpecial Symbol\t\t    Hush")
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
         print(" "+a[i]+"\tSpecial Symbol\t\t    Ampersand")
         if type(a[i])=='class str':
             print(string)
               
        
  
















    
