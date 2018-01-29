set multiplot layout 1,1 title "Ploting energy,\n Position and velocity" font ",14"
set xtics rotate
set bmargin 5
#
set title "Potential"
unset key
plot 'cat.csv' us 1:2 with lines; ; pause -1
#
unset multiplot
