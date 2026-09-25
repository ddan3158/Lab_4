#include <iostream>
#include "studentStatus.h"

namespace YooDaeun2693185{

    bool compareStudent(const Student& s1, const Student& s2){
        return (s1.getID()==s2.getID()
        &&s1.getgrade()==s2.getgrade()
        &&s1.getscore()==s2.getscore());
    }
}
int main(){
    using namespace YooDaeun2693185;

    studentStatus st1{};
    studentStatus st2{Student{3158417, 'A', 87}, true};
    st1.print();
    std::cout<<"student2 information: ";
    st2.print();

    if(compareStudent(st1.getstudent(), st2.getstudent())){
        std::cout<<"same\n";}
    else
        {std::cout<<"different\n";}
}