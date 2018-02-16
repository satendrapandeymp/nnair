f(x) = .5 * k*(x-x0)**2 + c

x0= .9473

c= -76.0107465146

k= 0.01

fit f(x) 'for_kr.dat' using 1:2 via k, x0, c
