#include <iostream>
#include "studentStatus.h"

namespace YooDaeun2693185{

    bool compareStudnet(const student& s1, const student& s2){
        return (s1.getID()==s2.getID
        &&s1.getgrade()==s2.getgrade
        &&s1.getscore()==s2.getscore);
    }
}
int main(){
    using namespace YooDaeun2693185;

    studentStatus s1{}, s2{student{3158417, 'A', 87}, true};
    s1.print();
    std::cout<<"student2 information";
    s2.print();

    if(compareStudent(s1.getstudent))std::cout<<"same\n";
    else std::cout<<"different\n";


}