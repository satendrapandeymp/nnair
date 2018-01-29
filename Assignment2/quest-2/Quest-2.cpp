#include <iostream>
#include <cmath>

using namespace std;

void update(float a1, float delta_time, float * v1, float * x1);

int main()
{
    // since the program is in 1D so I'm only taking x component
    float delta_time, total_time;
    float k, potential, kinetic, total_energy;
    float x, v, a, m, force, r;
    int i;

    // defining constants
    delta_time = 2;
    k = .1;

    // Initialising t = 0 values;
    x = 1.0;
    v = 0;
    m = 10000.0;
    total_time = 0;

    // Updating pos with time
    for (i =0; i <1500; i++)
    {
        total_time = total_time + delta_time;
        force = -1 * k * x;
        a = force/m;
        update(a, delta_time, &v, &x);
        potential = .5 * k * x *x ;
        kinetic = .5 * m * v * v;
        total_energy = kinetic + potential;
        cout  << total_time << '\t' << x <<'\t'  << v << '\t'  << kinetic << "\t" << potential << '\t' << total_energy << '\t' << endl;

    }

return 0;

}

void update(float a1, float delta_time, float * v1, float * x1)
{
    *v1 = *v1 + a1 * delta_time;
    *x1 = *x1 + *v1 * delta_time;
}
