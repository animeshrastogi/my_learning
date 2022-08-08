
#include <iostream>
#include "ForwardEulerMethod.hpp"
using namespace std;
int main(int argc, const char * argv[]) {
    ForwardEulerMethod f1;
    f1.SetStepSize(0.2);
    f1.SetTimeInterval(0.0, 1.0);
    f1.SetInitialValue(2);
    f1.SolveEquation();
}
