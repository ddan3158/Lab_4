#pragma once
#include "student.h"

namespace YooDaeun2693185
{
    class studentStatus
    {
        Student s;
        bool status;
        public:
            studentStatus(student testS = student{6767676, 'C', 70}, bool testStatus=false)
            :s{testS}, status{testStatus}
            {}

    void print() const{
        s.print(); //student::print()
        if(status){
            std::cout<<"on school!\n";
        }
        else{
            std::cout<<"NOT on schhool.\n";
        }
    }
    const student& getstudent() const{return s};
    void setstudent(const student& testS){s=testS;}
    };
}