// #pragma once
// #include <stdlib.h>
// #include <iostream>
// // #include <string.h>
// #include <complex>
// #include <cmath>

// using namespace std;
// namespace solver{


//     // class RealVariable{
//     //     public:
//     //         double num;
//     //         RealVariable(){
//     //             num = 1;
//     //         }
//     // };

 
   

//             //  std::complex<double> solve(ComplexVariable& x);      ////////////////////?????????

//    // RealVariable& operator* (RealVariable real,double x);
//    //solver::RealVariable &operator*(RealVariable &x, RealVariable &y);
//    //RealVariable &operator*(RealVariable &real, double x);
  
//     class RealVariable{
//         public:
//             double num;
//             RealVariable(){
//                 num = 1;
//             }
   
//    /////////////////operator+//////////////////////////
//    friend RealVariable &operator+(solver::RealVariable &x, double y);
//    friend RealVariable &operator+(double y, solver::RealVariable &x);
//    friend RealVariable &operator+(solver::RealVariable &y, solver::RealVariable &x);

//    /////////////////operator-//////////////////////////
//    friend RealVariable &operator-(solver::RealVariable &x, double y);
//    friend RealVariable &operator-(double y, solver::RealVariable &x);
//    friend RealVariable &operator-(solver::RealVariable &y, solver::RealVariable &x);

//    /////////////////operator*//////////////////////////
//    friend RealVariable &operator*(solver::RealVariable &x, double y);
//    friend RealVariable &operator*(double y, solver::RealVariable &x);
//    friend RealVariable &operator*(solver::RealVariable &y, solver::RealVariable &x);


//    /////////////////operator / //////////////////////////
//    friend RealVariable &operator/(solver::RealVariable &x, double y);
//    friend RealVariable &operator/(double y, solver::RealVariable &x);
//    friend RealVariable &operator/(solver::RealVariable &y, solver::RealVariable &x);

//       /////////////////operator == //////////////////////////
//    friend RealVariable &operator==(solver::RealVariable &x, double y);
//    friend RealVariable &operator==(double y, solver::RealVariable &x);
//    friend RealVariable &operator==(solver::RealVariable &y, solver::RealVariable &x);

//     /////////////////operator ^ //////////////////////////
//    friend RealVariable &operator^(solver::RealVariable &x, int y);
// //    RealVariable &operator^(double y, solver::RealVariable &x);
// //    RealVariable &operator^(solver::RealVariable &y, solver::RealVariable &x);
//      };
 
//    class ComplexVariable{
        
// friend ComplexVariable& operator+(int y,ComplexVariable& x);
//          friend ComplexVariable& operator+(ComplexVariable& x,int y);
//         friend ComplexVariable& operator+(ComplexVariable& x,ComplexVariable& y);
//         friend ComplexVariable& operator+(std::complex<double> y,ComplexVariable& x);
//         friend ComplexVariable& operator+(ComplexVariable& x,std::complex<double> y);
//    /////////////////operator-////////

//         public:
//           //    double comp;
//           //    double real;
//           std::complex<double> a,b,c;   ////////////////////?????????
//           ComplexVariable() = default;
//                 // real = 1;
             

   
//        /////////////////operator+//////////////////////////
// //          friend ComplexVariable& operator+(int y,ComplexVariable& x);
// //          friend ComplexVariable& operator+(ComplexVariable& x,int y);
// //         friend ComplexVariable& operator+(ComplexVariable& x,ComplexVariable& y);
// //         friend ComplexVariable& operator+(std::complex<double> y,ComplexVariable& x);
// //         friend ComplexVariable& operator+(ComplexVariable& x,std::complex<double> y);
// //    /////////////////operator-//////////////////////////
//         friend ComplexVariable& operator-(ComplexVariable& x,int y);
//         friend ComplexVariable& operator-(ComplexVariable& x,ComplexVariable& y);
//         friend ComplexVariable& operator-(int y,ComplexVariable& x);
//    /////////////////operator*//////////////////////////
//         friend ComplexVariable& operator*(int y,ComplexVariable& x);
//         friend ComplexVariable& operator*(ComplexVariable& x, int y);
//         friend ComplexVariable& operator*(ComplexVariable& x,ComplexVariable& y);
//    /////////////////operator / /////////////////////////
//         friend ComplexVariable& operator/(ComplexVariable& x, double y);
//         friend ComplexVariable& operator/(double y,ComplexVariable& x);
//         friend ComplexVariable& operator/(ComplexVariable& x,ComplexVariable& y);
//    /////////////////operator==//////////////////////////
//          friend ComplexVariable& operator==(ComplexVariable& x, int y); 
//         friend ComplexVariable& operator==(ComplexVariable& x,ComplexVariable& y);
//         friend ComplexVariable& operator==(int y,ComplexVariable& x);
//         friend ComplexVariable& operator==(ComplexVariable& x,std::complex<double> y);
//         friend ComplexVariable& operator==(std::complex<double> y,ComplexVariable& x);
//    /////////////////operator^//////////////////////////
//         friend ComplexVariable& operator^(ComplexVariable& x,int y);
//         //  std::complex<double> solve(ComplexVariable& x);      ////////////////////?????????

// };
// //     class solve{
// //         public:
// //             RealVariable real;
// //             ComplexVariable comp;
// //     };
//     double solve (RealVariable& real );
//     std::complex<double> solve (ComplexVariable& comp);   /////////////////////////
//  };
#pragma once
#include <cmath>
#include <complex>
namespace solver{

    
    
    class RealVariable{
        public:
        double a;
        int b;
        double c;

        RealVariable() = default;

        //+
        friend RealVariable& operator+(int y,RealVariable& x);
        friend RealVariable& operator+(RealVariable& x,int y);
        friend RealVariable& operator+(RealVariable& x,RealVariable& y);
        //*
        friend RealVariable& operator*(int y,RealVariable& x);
        friend RealVariable& operator*(RealVariable& x, int y);
        friend RealVariable& operator*(RealVariable& x,RealVariable& y);
        ///
        friend RealVariable& operator/(RealVariable& x,double y);
        friend RealVariable& operator/(double y,RealVariable& x);
        friend RealVariable& operator/(RealVariable& x,RealVariable& y);
        //-
        friend RealVariable& operator-(RealVariable& x,int y);
        friend RealVariable& operator-(RealVariable& x,RealVariable& y);
        friend RealVariable& operator-(int y,RealVariable& x);
        //^
        friend RealVariable& operator^(RealVariable& x,int y);
        //==
        friend RealVariable& operator==(RealVariable& x,  int y); 
        friend RealVariable& operator==(RealVariable& x,RealVariable& y);
        friend RealVariable& operator==(int y,RealVariable& x);
        //
    
    };
    double solve(RealVariable& x);
    
    class ComplexVariable{
        public:
        std::complex<double> a,b,c;
        ComplexVariable()=default;

        friend ComplexVariable& operator+(int y,ComplexVariable& x);
        friend ComplexVariable& operator+(ComplexVariable& x,int y);
        friend ComplexVariable& operator+(ComplexVariable& x,ComplexVariable& y);
        friend ComplexVariable& operator+(std::complex<double> y,ComplexVariable& x);
        friend ComplexVariable& operator+(ComplexVariable& x,std::complex<double> y);

        //*
        friend ComplexVariable& operator*(int y,ComplexVariable& x);
        friend ComplexVariable& operator*(ComplexVariable& x, int y);
        friend ComplexVariable& operator*(ComplexVariable& x,ComplexVariable& y);
        ///
        friend ComplexVariable& operator/(ComplexVariable& x, double y);
        friend ComplexVariable& operator/(double y,ComplexVariable& x);
        friend ComplexVariable& operator/(ComplexVariable& x,ComplexVariable& y);
        //-
        friend ComplexVariable& operator-(ComplexVariable& x,int y);
        friend ComplexVariable& operator-(ComplexVariable& x,ComplexVariable& y);
        friend ComplexVariable& operator-(int y,ComplexVariable& x);
        //^
        friend ComplexVariable& operator^(ComplexVariable& x,int y);
        //==
        friend ComplexVariable& operator==(ComplexVariable& x, int y); 
        friend ComplexVariable& operator==(ComplexVariable& x,ComplexVariable& y);
        friend ComplexVariable& operator==(int y,ComplexVariable& x);
        friend ComplexVariable& operator==(ComplexVariable& x,std::complex<double> y);
        friend ComplexVariable& operator==(std::complex<double> y,ComplexVariable& x);

    
    };
    std::complex<double> solve(ComplexVariable& x);

}