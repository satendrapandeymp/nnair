set multiplot layout 1,2 title "Ploting energy,\n Position" font ",14"
set xtics rotate
set bmargin 5
#
set title "Pos"
unset key
plot 'cat.csv' us 1:2 with lines, 'cat.csv' us 1:3 with lines ; pause 3
#
set title "energy"
unset key
plot 'cat.csv' us 1:4 with lines, 'cat.csv' us 1:5 with lines, 'cat.csv' us 1:6 with lines; pause -1
#
unset multiplot
