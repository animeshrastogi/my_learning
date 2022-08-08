//
//  ForwardEulerMethod.cpp
//  odesolver
//
//  Created by Animesh Rastogi on 8/7/22.
//

#include "ForwardEulerMethod.hpp"
#include <fstream>
#include <iostream>
using namespace std;
double ForwardEulerMethod::RightHandSide(double y, double t){
    double rhs = 1+t;
    return rhs;
}

void ForwardEulerMethod::SolveEquation(){
    
    int N = (int)(finalTime - initialTime)/stepSize;
    double y[N+1], t[N+1];
    double exacty[N+1];
    y[0] = initialValue;
    t[0] = initialTime;
    exacty[0] = initialValue;
    ofstream myfile;
    myfile.open ("/Users/animeshrastogi/Dropbox/Graduate_School/Career/Project_Github/Assignment_Projects/Learn_C++/solution.txt");
    myfile <<t[0]<<"\t"<<y[0]<<"\t"<<exacty[0]<<"\n";
    for(int i = 1;i<N+1;i++){
        t[i] = initialTime + i*stepSize;
        y[i] = y[i-1]+stepSize*RightHandSide(y[i-1], t[i-1]);
        exacty[i]=(t[i]*t[i] + 2*t[i] + 4)/2;
        myfile <<t[i]<<"\t"<<y[i]<<"\t"<<exacty[i]<<"\n";
    }
    myfile.close();
}
