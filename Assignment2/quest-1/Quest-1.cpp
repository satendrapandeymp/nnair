#include <iostream>
#include <cmath>

using namespace std;

void update(float a1, float a2, float delta_time, float * v1, float * v2, float * x1, float * x2);

int main()
{
    // since the program is in 1D so I'm only taking x component
    float delta_time, total_time;
    float sigma, epsilon, potential, kinetic, total_energy;
    float x1, x2, v1, v2, a1, a2, m1, m2, force, r;
    int i;

    // defining constants
    delta_time = 20;
    sigma = 1.0;
    epsilon = .001;

    // Initialising t = 0 values;
    x1 = 0.0;
    x2 = 1.4;
    v1 = 0;
    v2 = 0;
    m1 = 10.0 * 1866;
    m2 = m1;
    total_time = 0;

    // Updating pos with time
    for (i =0; i <1000; i++)
    {
        r = x2 - x1;
        total_time = total_time + delta_time;
        force = 4 * epsilon * ( (pow((sigma/r),13) * 12)  - (pow((sigma/r),7) * 6))/ sigma;
        a1 = -1 *force/m1;
        a2 =  force/m2;
        update(a1, a2, delta_time, &v1, &v2, &x1, &x2);
        potential = 4 * epsilon * ( pow((sigma/r),12) - pow((sigma/r),6));
        kinetic = m1 * v1 * v1;
        total_energy = kinetic + potential;
        cout  << total_time << '\t' << x1 << '\t' << x2 << '\t' << kinetic << "\t" << potential << '\t' << total_energy << '\t' << endl;

    }

return 0;

}

void update(float a1, float a2, float delta_time, float * v1, float * v2, float * x1, float * x2)
{
    *v1 = *v1 + a1 * delta_time;
    *v2 = *v2 + a2 * delta_time;
    *x1 = *x1 + *v1 * delta_time;
    *x2 = *x2 + *v2 * delta_time;
}
