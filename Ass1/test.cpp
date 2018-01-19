#include <iostream>
#include <cmath>


using namespace std;

int main()
{
float r, sigma, epsilon, potential;
float result[100];
int i;

sigma = 1.0;
epsilon = .001;
potential = pow(sigma,epsilon);


for (i =0; i<100; i++)
{
r = .90 + i * .02;
result[i] = 4 * epsilon * ( pow((sigma/r),12) - pow((sigma/r),6));
cout  << r << '\t' << result[i] << endl;

}

return 0;

}
