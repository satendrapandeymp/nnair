#sander -O -i min.in -o min.out -p waterbox.prmtop -c waterbox.inpcrd -r min.rst
sander -O -i npt.in -o npt.out -p waterbox.prmtop -c min.rst -x waterbox.mdcrd -r prod.rst


