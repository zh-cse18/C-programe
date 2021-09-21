import re
regpipe=re.compile(r'ZahidHassan | Ayesha')
mo=regpipe.search('I am Zahid Hassan And She ias Ayesha')
print(mo.group())
