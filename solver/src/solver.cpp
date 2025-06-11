#include "solver.h"
#include <cmath>

void solve_equation(double a, double b, double c, double& x1, double& x2) {
    double discriminant = b * b - 4 * a * c;
    x1 = (-b + std::sqrt(discriminant)) / (2 * a);
    x2 = (-b - std::sqrt(discriminant)) / (2 * a);
}
