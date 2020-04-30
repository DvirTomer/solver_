// #include "solver.hpp"
// // #include <iostream>
// // #include <string.h>
// #include <complex.h>

// using namespace std;
// using namespace solver;

// //using solver::solve, solver::RealVariable, solver::ComplexVariable;



//     // double solve (RealVariable real )  //  solve (2*x)
//     // {
     
//     //   return 1;
//     // }
// double solver::solve(RealVariable& x)
// {
//     return x.num;
// }

// std::complex<double> solver::solve(ComplexVariable& x)
// {
//     return 1;
// }

// // solver::RealVariable &solver::operator*(RealVariable &real, double x)
// //  {
// //    real.num=real.num*x;
// //    //RealVariable& temp = real;

// //    return real;
// //  }
// // 


// /////////////////operator+//////////////////////////
// solver::RealVariable &solver::operator+(RealVariable &x, double y)
// {
//     x.num = x.num + y;
//     return x;
// }
// solver::RealVariable &solver::operator+(double y, RealVariable &x)
// {
//     return x+y;
// }
// solver::RealVariable &solver::operator+(RealVariable &y, RealVariable &x)
// {
//     x.num = x.num + y.num;
//     return x;
// }
// /////////////////////////////////////////////////////////////////////////

// /////////////////operator-//////////////////////////
// solver::RealVariable &solver::operator-(RealVariable &x, double y)
// {
//     x.num = x.num - y;
//     return x;
// }
// solver::RealVariable &solver::operator-(double y, RealVariable &x)
// {
//     x.num = y - x.num;
//     return x;
// }
// solver::RealVariable &solver::operator-(RealVariable &y, RealVariable &x)
// {
//     y.num = y.num - x.num;
//     return y;
// }
// /////////////////////////////////////////////////////////////////////////
// /////////////////operator*//////////////////////////
// solver::RealVariable &solver::operator*(RealVariable &x, double y)
// {
//     x.num = x.num * y;
//     return x;
// }
// solver::RealVariable &solver::operator*(double y, RealVariable &x)
// {
//     return x*y;
// }
// solver::RealVariable &solver::operator*(RealVariable &y, RealVariable &x)
// {
//     x.num = x.num * y.num;
//     return x;
// }
// /////////////////////////////////////////////////////////////////////////
// /////////////////operator/ /////////////////////////
// solver::RealVariable &solver::operator/(RealVariable &x, double y)
// {
//     if(y!=0)
//     {
//     x.num = x.num / y;
//     return x;
//     }
//     else
//     {
//        throw std::invalid_argument("cant divide by zero");
//     }
// }
// solver::RealVariable &solver::operator/(double y, RealVariable &x)
// {
//     if(x.num!=0)
//     {
//     double x2 = x.num;
//     RealVariable y2;
//     y2.num=y;
//     x = y2/x2;
//     return x;
//     }
//     else
//     {
//     //    throw std::invalid_argument("cant divide by zero");
//        cout<<"im here\n";
//     }
//     return x;
// }
// solver::RealVariable &solver::operator/(RealVariable &y, RealVariable &x)
// {
//     if(x.num!=0){
//     x.num = x.num / y.num;
//     return x;
//     }
//     else
//     {
//        throw std::invalid_argument("cant divide by zero");
//     }

// }
// /////////////////////////////////////////////////////////////////////////
// /////////////////operator^//////////////////////////
// solver::RealVariable &solver::operator^(RealVariable &x, int y)
// {
//     if(y<=2){
//         int result = 1;
//        for (int i = 0; i < y; i++)
//        {
//            result *= x.num;
//        }
//         x.num=result;
//        return x;
//     }
//     else
//     {
//      //  throw std::invalid_argument("cant power more than two times");
//      cout<<"im here\n";
    
//     } 
//     return x;
// }
// // solver::RealVariable &solver::operator^(double y, RealVariable &x)
// // {
// //     return x+y;
// // }
// // solver::RealVariable &solver::operator^(RealVariable &y, RealVariable &x)
// // {
// //     x.num = x.num + y.num;
// //     return x;
// // }
// /////////////////////////////////////////////////////////////////////////
// /////////////////operator==//////////////////////////
// solver::RealVariable &solver::operator==(RealVariable &y, RealVariable &x){
//     return x;
// }
// solver::RealVariable &solver::operator==(double y, RealVariable &x){
//     return x;
// }solver::RealVariable &solver::operator==(RealVariable &y, double x){
//     return y;
// }
// ////////////////////////////////////////////////////////
// ///////////////////complex//////////////////////////////
// ////////////////////////////////////////////////////////
// solver::ComplexVariable& operator+(int y,solver::ComplexVariable& x){
//       return x;
// }
// solver::ComplexVariable& operator+(solver::ComplexVariable& x,int y){
//      return x;
// }
// solver::ComplexVariable& operator+(solver::ComplexVariable& x,solver::ComplexVariable& y){
//             return x;

// }
// solver::ComplexVariable& operator+(std::complex<double> y,solver::ComplexVariable& x){
//              return x;
// }
// solver::ComplexVariable& operator+(solver::ComplexVariable& x,std::complex<double> y){
//                    return x;

// }
//    /////////////////operator-//////////////////////////
//          solver::ComplexVariable& operator-(solver::ComplexVariable& x,int y){
//              return x;
// }
//          solver::ComplexVariable& operator-(solver::ComplexVariable& x,solver::ComplexVariable& y){
//              return x;
// }
//          solver::ComplexVariable& operator-(int y,solver::ComplexVariable& x){
//              return x;
// }
//    /////////////////operator*//////////////////////////
//          solver::ComplexVariable& operator*(int y,solver::ComplexVariable& x){
//              return x;
// }
//        solver::ComplexVariable& operator*(solver::ComplexVariable& x, int y){
//              return x;
// }
//          solver::ComplexVariable& operator*(solver::ComplexVariable& x,solver::ComplexVariable& y){
//              return x;
// }
//    /////////////////operator / /////////////////////////
//          solver::ComplexVariable& operator/(solver::ComplexVariable& x, double y){
//              return x;
// }
//          solver::ComplexVariable& operator/(double y,solver::ComplexVariable& x){
//              return x;
// }
//          solver::ComplexVariable& operator/(solver::ComplexVariable& x,solver::ComplexVariable& y){
//              return x;
// }
//    /////////////////operator==//////////////////////////
//          solver::ComplexVariable& operator==(solver::ComplexVariable& x, int y){
//              return x;
// }
//          solver::ComplexVariable& operator==(solver::ComplexVariable& x,solver::ComplexVariable& y){
//              return x;
// }
//          solver::ComplexVariable& operator==(int y,solver::ComplexVariable& x){
//              return x;
// }
//          solver::ComplexVariable& operator==(solver::ComplexVariable& x,std::complex<double> y){
//              return x;
// }
//          solver::ComplexVariable& operator==(std::complex<double> y,solver::ComplexVariable& x){
//              return x;
// }
//    /////////////////operator^//////////////////////////
//          solver::ComplexVariable& operator^(solver::ComplexVariable& x,int y){
//              return x;
// }

// // std::complex<double> solver::solve(ComplexVariable& x){  ////
// //     return 0;

// // } 
#include "solver.hpp"
using namespace std;
using namespace solver;
double solver::solve(RealVariable& x){
    return x.a++;


}

RealVariable& solver::operator+(RealVariable& x,RealVariable& y){
    int sum =3*2;
    sum++;
    return x;
}

RealVariable& solver::operator+(RealVariable& x,int y){
    int sum =32;
    sum++;
    return x;

}
RealVariable& solver::operator+(int y,RealVariable& x){
int sum =3-2;
    sum--;
    return x;

}

RealVariable& solver::operator*(int x,RealVariable& y){
   int sum =3/3;
    sum++;
    return y;
}

RealVariable& solver::operator*(RealVariable& x,RealVariable& y){
    int sum =32+3;
    sum--;
    return y;
}

RealVariable& solver::operator*(RealVariable& y,int x){
   int sum =32;
    sum*=3;
    return y;
}
RealVariable& solver::operator/(RealVariable& x,double y){
    int sum =32;
    sum/=2;
    return x;

}
RealVariable& solver::operator/(RealVariable& x,RealVariable& y){
    int sum =12;
    sum++;
    return x;

}
RealVariable& solver::operator/(double x,RealVariable& y){
    int sum =0;
    sum++;
    return y;

    }
RealVariable& solver::operator-(RealVariable& x, int y){
   int sum =4;
    sum--;
    return x;

    }
RealVariable& solver::operator-(int x,RealVariable& y){
    int sum =5+5;
    sum--;

    return y;
}
RealVariable& solver::operator-(RealVariable& x,RealVariable& y){
    int sum =32;
    sum++;
    return x;
}
        
RealVariable& solver::operator^(RealVariable& x,int y){
    int sum =32;
    sum++;
    return x;

} 
RealVariable& solver::operator==(RealVariable& x, RealVariable& y) {
    int sum =32;
    sum++;
    return x;
}
RealVariable& solver::operator==(int x,RealVariable& y) {
    int sum =32;
    sum++;
    return y;
}
RealVariable& solver::operator==(RealVariable& x, int y) {
    int sum =32;
    sum++;
    return x;
        
}

 std::complex<double> solver::solve(ComplexVariable& x){
   int sum =32;
    sum++;
    return 1;

}

ComplexVariable& solver::operator+(ComplexVariable& x,ComplexVariable& y){
   int sum =32;
    sum++;
    return x;
}

ComplexVariable& solver::operator+(ComplexVariable& x,int y){
    int sum =32;
    sum++;
    return x;

}
ComplexVariable& solver::operator+(int y,ComplexVariable& x){
int sum =32;
    sum++;
    return x;

}
ComplexVariable& solver::operator+(std::complex<double> y,ComplexVariable& x){
  int sum =32;
    sum++;
    return x;
}


ComplexVariable& solver::operator+(ComplexVariable& x,std::complex<double> y){
    int sum =32;
    sum++;
    return x;
}

ComplexVariable& solver::operator*(int x,ComplexVariable& y){
   int sum =32;
    sum++;
    return y;
}

ComplexVariable& solver::operator*(ComplexVariable& x,ComplexVariable& y){
    int sum =32;
    sum++;
    return y;
}

ComplexVariable& solver::operator*(ComplexVariable& y,int x){
   int sum =32;
    sum++;
    return y;
}
ComplexVariable& solver::operator/(ComplexVariable& x,double y){
   int sum =32;
    sum++;
    return x;

}
ComplexVariable& solver::operator/(ComplexVariable& x,ComplexVariable& y){
    int sum =32;
    sum++;
    return x;

}
ComplexVariable& solver::operator/(double x,ComplexVariable& y){
    int sum =32;
    sum++;
    return y;

    }
ComplexVariable& solver::operator-(ComplexVariable& x, int y){
   int sum =32;
    sum++;
    return x;

    }
ComplexVariable& solver::operator-(int x,ComplexVariable& y){
    int sum =32;
    sum++;
    return y;
}
ComplexVariable& solver::operator-(ComplexVariable& x,ComplexVariable& y){
    int sum =32;
    sum++;
    return x;
}
        
ComplexVariable& solver::operator^(ComplexVariable& x,int y){
    int sum =32;
    sum++;
    return x;

} 
ComplexVariable& solver::operator==(ComplexVariable& x, ComplexVariable& y) {
    int sum =32;
    sum++;
    return x;
}
ComplexVariable& solver::operator==(int x,ComplexVariable& y) {
    int sum =32;
    sum++;
    return y;
}
ComplexVariable& solver::operator==(ComplexVariable& x, int y) {
    int sum =32;
    sum++;
    return x;
        
}
ComplexVariable& solver::operator==(ComplexVariable& x,std::complex<double>){
    int sum =32;
    sum++;
    return x;
}

ComplexVariable& solver::operator==(std::complex<double> y,ComplexVariable& x){
    int sum =32;
    sum++;
    return x;
}

