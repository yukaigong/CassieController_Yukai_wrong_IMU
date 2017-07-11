/*
 * Automatically Generated from Mathematica.
 * Mon 10 Jul 2017 14:13:13 GMT-04:00
 */

#ifndef QFLEXION_IK4_HH
#define QFLEXION_IK4_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace SymExpression
{

  void qFlexion_IK4_raw(double *p_output1, const double *var1,const double *var2);

  inline void qFlexion_IK4(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1,const Eigen::VectorXd &var2)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 1, 1);
    assert_size_matrix(var2, 1, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 1, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    qFlexion_IK4_raw(p_output1.data(), var1.data(),var2.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // QFLEXION_IK4_HH
