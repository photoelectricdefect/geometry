#include <circle.hpp>

circle::circle(Eigen::Vector2d S_,double r_):S(S_),r(r_){}

circle::~circle(){}

static circle circle::fit(const Eigen::Vector2d& A,const Eigen::Vector2d& B,const Eigen::Vector2d& C) {
    Eigen::Matrix2d W;
    Eigen::Vector2d b,x;
    W.row(0)=(A-B).transpose(),W.row(1)=(A-C).transpose();
    b(0)=A.dot(A)-B.dot(B),b(1)=A.dot(A)-C.dot(C);
    x=W.colPivHouseholderQr().solve(0.5*b);
    double r=(A-x).norm();

    return circle(x,r);
}   
