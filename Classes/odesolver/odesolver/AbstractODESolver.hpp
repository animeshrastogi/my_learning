//
//  AbstractODESolver.hpp
//  odesolver
//
//  Created by Animesh Rastogi on 8/7/22.
//

#ifndef AbstractODESolver_hpp
#define AbstractODESolver_hpp

#include <stdio.h>
class AbstractOdeSolver
{
    protected:
    double stepSize;
    double initialTime;
    double finalTime;
    double initialValue;
    public:
    void SetStepSize(double h);
    void SetTimeInterval(double t0, double t1);
    void SetInitialValue(double y0);
    virtual double RightHandSide(double y, double t) = 0;
    virtual void SolveEquation() = 0;
};
#endif /* AbstractODESolver_hpp */
