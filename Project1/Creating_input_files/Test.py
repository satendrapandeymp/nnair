import os

if not os.path.exists('Output'):
    os.mkdir('Output')

f = open('Sample.pdb', 'r')
text = f.read()
f.close

check = '_'

before = text.split(check)[0]
after = text.split(check)[1]

print before

for i in range(10):
    name = "Output/res_" + str(i) + '.pdb' 
    f = open(name , 'w')
    
    f.write(before)
    f.write(str(i))
    f.write(after)
    
    f.close()
