import re
phonenumrex=re.compile(r'((\d\d\d)-\d\d\d)-(\d\d\d\d)')
m=phonenumrex.search('My number is a word 258-147-6988 and my name is Zahid')
print('Phone number found :'+ m.group(0))
