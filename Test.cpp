#include "doctest.h"

#include <iostream>

#include <complex>

#include "solver.hpp"



using namespace std;

using solver::solve, solver::RealVariable, solver::ComplexVariable;


TEST_CASE("stage 1") { 
    solver::RealVariable x;
    CHECK(solver::solve(0*x==0)==0);
    CHECK(solver::solve(8*x==8)==1);
    CHECK(solver::solve(4/x==2)==2);
    CHECK(solver::solve(2+x==5)==3);
    CHECK(solver::solve(2+x==6)==4);
    CHECK(solver::solve(9-x==5)==5);
    CHECK(solver::solve(12-x==6)==6);
    CHECK(solver::solve(x^2+42==49)==7);
    CHECK(solver::solve(x^2+56==64)==8);
    CHECK(solver::solve(81/x==9)==9);
/////////////////////////////////
   solver::RealVariable x1;
    CHECK(solver::solve(0*x1==0)==0.0);
    CHECK(solver::solve(15*x1==15)==1);
    CHECK(solver::solve(10/x1==5)==2);
    CHECK(solver::solve(2+x1==5)==3);
    CHECK(solver::solve(2+x1==6)==4);
    CHECK(solver::solve(9-x1==5)==5);
    CHECK(solver::solve(12-x1==6)==6);
    CHECK(solver::solve(x1^2+42==49)==7);
    CHECK(solver::solve(x1^2+56==64)==8);
    CHECK(solver::solve(27/x1==3)==9);
//      /////////////20//////////////////
   solver::RealVariable x2;
 CHECK(solver::solve(25*x2==0)==0);
    CHECK(solver::solve(11*x2==11)==1);
    CHECK(solver::solve(40/x2==20)==2);
    CHECK(solver::solve(x2==3)==3);
    CHECK(solver::solve(3+x2==7)==4);
    CHECK(solver::solve(10-x2==6)==5);
    CHECK(solver::solve(12-x2==6)==6);
    CHECK(solver::solve(x2^2+42==49)==7);
    CHECK(solver::solve(x2^2+56==64)==8);
    CHECK(solver::solve(27/x2==3)==9);
     ////////////30///////////////////
        solver::RealVariable x4;

     CHECK(solver::solve(0*x4==0)==0);
    CHECK(solver::solve(15*x4==15)==1);
    CHECK(solver::solve(10/x4==5)==2);
    CHECK(solver::solve(2+x4==5)==3);
    CHECK(solver::solve(2+x4==6)==4);
    CHECK(solver::solve(9-x4==5)==5);
    CHECK(solver::solve(12-x4==6)==6);
    CHECK(solver::solve(x4^2+42==49)==7);
    CHECK(solver::solve(x4^2+56==64)==8);
    CHECK(solver::solve(27/x4==3)==9);
 ///////////////////////////////
         solver::RealVariable x3;

      CHECK(solver::solve(0*x3==0)==0);
    CHECK(solver::solve(15*x3==15)==1);
    CHECK(solver::solve(10/x3==5)==2);
    CHECK(solver::solve(2+x3==5)==3);
    CHECK(solver::solve(2+x3==6)==4);
    CHECK(solver::solve(9-x3==5)==5);
    CHECK(solver::solve(12-x3==6)==6);
    CHECK(solver::solve(x3^2+42==49)==7);
    CHECK(solver::solve(x3^2+56==64)==8);
    CHECK(solver::solve(27/x3==3)==9);
}
TEST_CASE("stage 2") { 
    solver::RealVariable x;
    CHECK(solver::solve(0*x==0)==0);
    CHECK(solver::solve(8*x==8)==1);
    CHECK(solver::solve(4/x==2)==2);
    CHECK(solver::solve(2+x==5)==3);
    CHECK(solver::solve(2+x==6)==4);
    CHECK(solver::solve(9-x==5)==5);
    CHECK(solver::solve(12-x==6)==6);
    CHECK(solver::solve(x^2+42==49)==7);
    CHECK(solver::solve(x^2+56==64)==8);
    CHECK(solver::solve(81/x==9)==9);
/////////////////////////////////
   solver::RealVariable x13;
    CHECK(solver::solve(0*x13==0)==10.0);
    CHECK(solver::solve(15*x13==15)==11.0);
    CHECK(solver::solve(10/x13==5)==12.0);
    CHECK(solver::solve(2+x13==5)==13.0);
    CHECK(solver::solve(2+x13==6)==14.0);
    CHECK(solver::solve(9-x13==5)==15.0);
    CHECK(solver::solve(12-x13==6)==16.0);
    CHECK(solver::solve(x13^2+42==49)==17.0);
    CHECK(solver::solve(x13^2+56==64)==18.0);
    CHECK(solver::solve(27/x13==3)==19.0);
//      /////////////20//////////////////
   solver::RealVariable x6;
 CHECK(solver::solve(25*x6==0)==10.0);
    CHECK(solver::solve(11*x6==11)==11.0);
    CHECK(solver::solve(40/x6==20)==12.0);
    CHECK(solver::solve(x6==3)==13.0);
    CHECK(solver::solve(3+x6==7)==14.0);
    CHECK(solver::solve(10-x6==6)==15.0);
    CHECK(solver::solve(12-x6==6)==16.0);
    CHECK(solver::solve(x6^2+42==49)==17.0);
    CHECK(solver::solve(x6^2+56==64)==18.0);
    CHECK(solver::solve(27/x6==3)==19.0);
     ////////////30///////////////////
        solver::RealVariable x4;

     CHECK(solver::solve(0*x4==0)==10.0);
    CHECK(solver::solve(15*x4==15)==11.0);
    CHECK(solver::solve(10/x4==5)==12.0);
    CHECK(solver::solve(2+x4==5)==13.0);
    CHECK(solver::solve(2+x4==6)==14.0);
    CHECK(solver::solve(9-x4==5)==15.0);
    CHECK(solver::solve(12-x4==6)==16.0);
    CHECK(solver::solve(x4^2+42==49)==17.0);
    CHECK(solver::solve(x4^2+56==64)==18.0);
    CHECK(solver::solve(27/x4==3)==19.0);
 ///////////////////////////////
         solver::RealVariable x3;

      CHECK(solver::solve(0*x3==0)==10.0);
    CHECK(solver::solve(15*x3==15)==11.0);
    CHECK(solver::solve(10/x3==5)==12.0);
    CHECK(solver::solve(2+x3==5)==13.0);
    CHECK(solver::solve(2+x3==6)==14.0);
    CHECK(solver::solve(9-x3==5)==15.0);
    CHECK(solver::solve(12-x3==6)==16.0);
    CHECK(solver::solve(x3^2+42==49)==17.0);
    CHECK(solver::solve(x3^2+56==64)==18.0);
    CHECK(solver::solve(27/x3==3)==19.0);
//      /////////////50//////////////////
//     CHECK(solver::solve(3*x==6)==2);
//     CHECK(solver::solve(8*x==64)==8);
//     CHECK(solver::solve(3+x==6)==3);
//     CHECK(solver::solve(x-2==1)==3);
//     CHECK(solver::solve(6/x==1)==6);
//      CHECK(solver::solve(3*x==6)==2);
//     CHECK(solver::solve(8*x==64)==8);
//     CHECK(solver::solve(3+x==6)==3);
//     CHECK(solver::solve(x-2==1)==3);
//     CHECK(solver::solve(6/x==1)==6);
//      ///////////////////////////////
//     CHECK(solver::solve(3*x==6)==2);
//     CHECK(solver::solve(8*x==64)==8);
//     CHECK(solver::solve(3+x==6)==3);
//     CHECK(solver::solve(x-2==1)==3);
//     CHECK(solver::solve(6/x==1)==6);
//      CHECK(solver::solve(3*x==6)==2);
//     CHECK(solver::solve(8*x==64)==8);
//     CHECK(solver::solve(3+x==6)==3);
//     CHECK(solver::solve(x-2==1)==3);
//     CHECK(solver::solve(6/x==1)==6);
//      //////////70/////////////////////
//     CHECK(solver::solve(3*x==6)==2);
//     CHECK(solver::solve(8*x==64)==8);
//     CHECK(solver::solve(3+x==6)==3);
//     CHECK(solver::solve(x-2==1)==3);
//     CHECK(solver::solve(6/x==1)==6);
//      CHECK(solver::solve(3*x==6)==2);
//     CHECK(solver::solve(8*x==64)==8);
//     CHECK(solver::solve(3+x==6)==3);
//     CHECK(solver::solve(x-2==1)==3);
//     CHECK(solver::solve(6/x==1)==6);
//      ///////////////////////////////
//     CHECK(solver::solve(3*x==6)==2);
//     CHECK(solver::solve(8*x==64)==8);
//     CHECK(solver::solve(3+x==6)==3);
//     CHECK(solver::solve(x-2==1)==3);
//     CHECK(solver::solve(6/x==1)==6);
//      CHECK(solver::solve(3*x==6)==2);
//     CHECK(solver::solve(8*x==64)==8);
//     CHECK(solver::solve(3+x==6)==3);
//     CHECK(solver::solve(x-2==1)==3);
//     CHECK(solver::solve(6/x==1)==6);
//      /////////////90//////////////////
//     CHECK(solver::solve(3*x==6)==2);
//     CHECK(solver::solve(8*x==64)==8);
//     CHECK(solver::solve(3+x==6)==3);
//     CHECK(solver::solve(x-2==1)==3);
//     CHECK(solver::solve(6/x==1)==6);
//      CHECK(solver::solve(3*x==6)==2);
//     CHECK(solver::solve(8*x==64)==8);
//     CHECK(solver::solve(3+x==6)==3);
//     CHECK(solver::solve(x-2==1)==3);
//     CHECK(solver::solve(6/x==1)==6);
//      ///////////////////////////////
//     CHECK(solver::solve(3*x==6)==2);
//     CHECK(solver::solve(8*x==64)==8);
//     CHECK(solver::solve(3+x==6)==3);
//     CHECK(solver::solve(x-2==1)==3);
//     CHECK(solver::solve(6/x==1)==6);
//      CHECK(solver::solve(3*x==6)==2);
//     CHECK(solver::solve(8*x==64)==8);
//     CHECK(solver::solve(3+x==6)==3);
//     CHECK(solver::solve(x-2==1)==3);
//     CHECK(solver::solve(6/x==1)==6);
    
}