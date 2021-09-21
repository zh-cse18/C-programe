message='I love my Country very much.I want to do something for our country'
count={}
for character in message:
    count.setdefault(character,0)
    count[character]=count[character]+1


print(count)    
    
