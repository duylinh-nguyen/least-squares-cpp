/*
 * gauss_newton.h
 *
 *  Created on: 03 May 2018
 *      Author: Fabian Meyer
 */

#ifndef OPT_GAUSS_NEWTON_H_
#define OPT_GAUSS_NEWTON_H_

#include "optcpp/optimization_algorithm.h"

namespace opt
{

    class GaussNewton : public OptimizationAlgorithm
    {
    public:
        GaussNewton();
        ~GaussNewton();

        Eigen::VectorXd calcStepUpdate(const Eigen::VectorXd &state);
    };
}

#endif
