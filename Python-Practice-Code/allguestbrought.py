allguest={'Alice':{'Apple':0,'Mango':2,'Banana':3},'Bob':{'Apple':6,'PineApple':5},'Rana':{'Apple':7,'Banana':7}}
def totalbrought(guest,item):
    numbrought=0
    for k,v in guest.items():
        numbrought=numbrought+v.get(item,0)
    return numbrought
print('nUMBER OF THING ARE BROUGHT:')
print('apple '+str(totalbrought(allguest,'Apple')))
    
    
