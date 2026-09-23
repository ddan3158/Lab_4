#include <iostream>
#pragma once

namespace YooDaeun2693185{

    class Student{
         int ID;
         int score;
         char grade;
        void testID(){
            if((ID)<1000000||(ID)>9999999){
                std::cout<<"Wrong ID.\n";
                std::exit(1);
            }
        }
        void testgrade(){
            if((grade)<'A'||(grade)>'F'){
                std::cout<<"Wrong grade.\n";
                std::exit(1);
            }
        }
        void testscore(){
            if((score)<0||(score)>100){
                std::cout<<"Wrong Score.\n";
                std::exit(1);
            }
        }
     public:
        void input(){
            std::cout<<"enter ID: ";
            std::cin>>ID; testID();
            std::cout<<"enter grade: ";
            std::cin>>grade; testgrade();
            std::cout<<"enter score: ";
            std::cin>>score; testscore();
        }

        void print(){
            std::cout<<ID<<", "<<grade<<", "<<score<<"\n";
        };
        void setID(int newID){
            ID=newID;
            testID();
        }
        void setgrade(int newgrade){
            grade=newgrade;
            testgrade();
        }
        void setscore(int newscore){
            score=newscore;
            testscore();
        }
        int getID(){
            return ID;
        };
        char getgrade(){
            return grade;
        };
        int getscore(){
            return score;
        };
    };
}
