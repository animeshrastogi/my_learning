//
//  AbstractODESolver.cpp
//  odesolver
//
//  Created by Animesh Rastogi on 8/7/22.
//

#include "AbstractODESolver.hpp"
void AbstractOdeSolver::SetStepSize(double h){
    stepSize = h;
}

void AbstractOdeSolver::SetTimeInterval(double t0, double t1){
    initialTime = t0;
    finalTime =  t1;
}

void AbstractOdeSolver::SetInitialValue(double y0){
    initialValue=y0;
}
