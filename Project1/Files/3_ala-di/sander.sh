#sander -O -i min.in -o min.out -p aladi.prmtop -c aladi.inpcrd -r min.rst
sander -O -i prod.in -o prod.out -p aladi.prmtop -c min.rst -x aladi.mdcrd -r prod.rst

