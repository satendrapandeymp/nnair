set multiplot layout 1,3 title "Ploting energy,\n Position and velocity" font ",14"
set xtics rotate
set bmargin 5
#
set title "Pos"
unset key
plot 'cat.csv' us 1:2 with lines; ; pause 1
#
set title "Vel"
unset key
plot 'cat.csv' us 1:3 with lines; pause 1
#
set title "energy"
unset key
plot 'cat.csv' us 1:4 with lines; pause -1
#
unset multiplot
