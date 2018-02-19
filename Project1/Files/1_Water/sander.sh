#sander -O -i min.in -o min.out -p water.prmtop -c water.inpcrd -r min.rst
sander -O -i prod.in -o prod.out -p water.prmtop -c min.rst -x water.mdcrd -r prod.rst

