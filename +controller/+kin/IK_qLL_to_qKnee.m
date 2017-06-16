function qKnee = IK_qLL_to_qKnee(qLL)
%IK_QLL_TO_QKNEE
%    QKNEE = IK_QLL_TO_QKNEE(QLL)

%    This function was generated by the Symbolic Math Toolbox version 7.1.
%    14-Jun-2017 15:57:25

t2 = pi.*(1.3e1./1.8e2);
t3 = cos(t2);
t4 = sin(t2);
t5 = qLL.^2;
qKnee = atan((t3.*9.46384e6-t4.*3.98936e7+sqrt(t3.*1.32385901184e14+t4.*1.297900992e13+t5.*8.6505402e15-t3.*t4.*1.880064e13+t3.*t5.*1.9584e15+t4.*t5.*1.92e14+t3.^2.*1.5851803245056e15+t4.^2.*1.6801419885056e15-t5.^2.*1.0e16-1.726759850035401e15)+1.6176e6)./(t3.*3.01016e7+t4.*8.50384e6+t5.*1.0e8-3.1360701e7)).*-2.0;
