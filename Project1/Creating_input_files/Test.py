import os

if not os.path.exists('Output'):
    os.mkdir('Output')

f = open('Sample.in', 'r')
text = f.read()
f.close

#check = 'dOH = '
check = 'tOH = '

before = text.split(check)[0] + check
after = text.split(check)[1]

for i in range(20):
    #b = .840 + (i/100.0)
    b = 95.4 + (i/1.0)
    print b
    name = "Output/" + str(b) + '.in'
    f = open(name , 'w')

    f.write(before)
    f.write(str(b))
    f.write(after[5:])

    f.close()

os.system('bash test.sh')

'''

f = open('cat.dat', 'r')
f1 = open('Res.dat', 'w')
for i in range(20):
    text = f.readline()
    text1 = text.split(".in.out")
    try:
        f1.write(text1[0])
        f1.write(text1[1])
    except:
            print "File Is ready"
f.close
f1.close()

os.remove('cat.dat')

os.system('./Run.sh')
'''
