#ifndef GEOMCRCL_H_
#define GEOMCRCL_H_

#include <Eigen/Dense>

/**
 * @brief  Utility class for operating with circles
 * @note   
 * @retval None
 */
class circle
{
private:
    /* data */
public:
    Eigen::Vector2d S;
    double r;

    /**
     * @brief  Constructor
     * @note   
     * @param  S_: Center
     * @param  r_: Radius
     * @retval 
     */
    circle(Eigen::Vector2d S_,double r_);
    ~circle();

    /**
     * @brief  Fits the circle to 3 points that lie on it
     * @note   
     * @param  A: Point
     * @param  B: Point
     * @param  C: Point
     * @retval New circle object fit to points
     */
    static circle fit(const Eigen::Vector2d& A,const Eigen::Vector2d& B,const Eigen::Vector2d& C);
};

#endif
