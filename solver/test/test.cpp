#include "solver.h"
#include <cassert>

int main() {
    double x1, x2;
    solve_equation(1, -3, 2, x1, x2);
    assert(x1 == 2.0);
    assert(x2 == 1.0);
    return 0;
}
