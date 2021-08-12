#ifndef GEOMCRCL_H_
#define GEOMCRCL_H_

#include <Eigen/Dense>

class circle
{
private:
    /* data */
public:
    Eigen::Vector2d S;
    double r;

    circle(Eigen::Vector2d S_,double r_);
    ~circle();

    static circle fit(const Eigen::Vector2d& A,const Eigen::Vector2d& B,const Eigen::Vector2d& C);
};

#endif
