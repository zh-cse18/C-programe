import re
#mulpipe=re.compile(r'bat(man|mobile|copter|bat)')

optionalchar=re.compile(r'bat(wo)*man')
obj=optionalchar.search('I want to be A  and also a batwowowowowowoman')
print(obj.group())

