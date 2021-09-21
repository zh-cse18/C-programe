import re
regex=re.compile(r'(\d{3})-(\d{3})-(\d{4})')
mo=regex.search('My namwe is Zahid Hassan and my phone number is 125-147-5869 and I am A student')
areacode,mainnum,lastcode=mo.groups()
print('My number is found and :'+ areacode)
print('My number is found and :'+ mainnum)
print('My number is found and :'+ lastcode)
