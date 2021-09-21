passwordFile = open('Secret.txt')
filecontent = passwordFile.read()
a=list(filecontent)
for i in range(len(a)):
    if a[i]=='+':
        print("The  name of the char ("+a[i]+")is plus")
    if a[i]=='-':
         print(" The name of the char ("+a[i]+")is minus")
    if a[i]=='*':
         print(" The name of the char ("+a[i]+")is multiplication")
    if a[i]=='/':
         print(" The name of the char ("+a[i]+")is divided")
    if a[i]==';':
         print(" The name of the char ("+a[i]+")is semicoma")
    if a[i]==',':
         print(" The name of the char ("+a[i]+")is comma")
    if a[i]=='(':
         print(" The name of the char ("+a[i]+")is starting bracket")
    if a[i]==')':
         print(" The name of the char ("+a[i]+")is closing bracket")
