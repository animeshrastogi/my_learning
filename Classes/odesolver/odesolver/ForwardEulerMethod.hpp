//
//  ForwardEulerMethod.hpp
//  odesolver
//
//  Created by Animesh Rastogi on 8/7/22.
//

#ifndef ForwardEulerMethod_hpp
#define ForwardEulerMethod_hpp

#include <stdio.h>
#include "AbstractODESolver.hpp"
class ForwardEulerMethod:public AbstractOdeSolver{
public:
    double RightHandSide(double y, double t);
    void SolveEquation();
};
#endif /* ForwardEulerMethod_hpp */
