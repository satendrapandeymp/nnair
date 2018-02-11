f(x) = k*(x-x0)**2 + c
x0=0.7

c= —6.1

k= 0.01

fit f(x) ‘h2plus_energy.dat’ using 1:2 via k, x0, c
