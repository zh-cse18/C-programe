def skip_comments(file):
    for line in file:
        if not line.strip().startswith('//'):
            yield line
f = open('input.txt')
f1=open('output.txt','w')
for line in skip_comments(f):
    print(line)

    
