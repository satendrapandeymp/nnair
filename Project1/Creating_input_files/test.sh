 
cd Output

ext='.out'
for i in $( ls ); 
do
    name=$i$ext
    g09 $i $name
    echo $i $name
done

grep -i "SCF Done" *.out | awk '{ print $1 $6}' > ../cat.dat



