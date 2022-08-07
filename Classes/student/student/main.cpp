//Practise inheritance
//Concepts: Inheritance, virtual functions, access privilege

#include <iostream>
#include <string>
#include <cassert>
using namespace std;
class student{
    double lfines;
public:
    //overriding the default constructor
    student();
    string sname;
    double tfees;
    void setlibraryfines(double lfines);
    double getlibraryfines();
    double virtual total_money();
    
};
student::student(){
    this->sname = "doesnotexist";
}
void student::setlibraryfines(double lfines){
    assert(lfines>=0.0);
    this->lfines = lfines;
}
double student::getlibraryfines(){
    return lfines;
}
double student::total_money(){
    return lfines+tfees;
}

class gradstudent: public student{
public:
    gradstudent();
    double total_money();
    bool type; //true - full-time, false - part-time
};
gradstudent::gradstudent(){
    type = true;
}
double gradstudent::total_money(){
    return getlibraryfines();
}

class phdstudent:public gradstudent{
public:
    double total_money();
};

double phdstudent::total_money(){
    return 0.0;
}

int main(int argc, const char * argv[]) {
    
    student* s1 = new student;
    student* s2 = new student;
    student* s3 = new gradstudent;
    s1->tfees = 1000.0;
    s1->setlibraryfines(100.0);
    s2->tfees = 3000.0;
    s2->setlibraryfines(500.0);
    s3->tfees = 5000.0;
    s3->setlibraryfines(1000.0);
    
    student* p1 = new phdstudent;
    p1->tfees = 1000.0;
    p1->setlibraryfines(100.0);
    
    cout<<s1->total_money()<<"\n";
    cout<<s2->total_money()<<"\n";
    cout<<s3->total_money()<<"\n";
    cout<<p1->total_money()<<"\n";
    
    delete s1;
    delete s2;
    delete s3;
    delete p1;
    
}
