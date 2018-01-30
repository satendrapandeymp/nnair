set multiplot layout 1,2 title "Ploting energy,\n Position" font ",14"
set xtics rotate
set bmargin 5
#
set title "Pos"
unset key
plot 'Res.dat' us 1:2 with lines; pause 3
#
unset multiplot
