import pprint
message='I like my father and mother very much.They \
are my most helpful person in this world'
count={}
for character in message:
    count.setdefault(character,0)
    count[character]=count[character]+1
pprint.pprint(count)    
