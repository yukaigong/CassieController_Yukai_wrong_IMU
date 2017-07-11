function dR = AngularVelocity_to_dMatrix(in1,in2)
%ANGULARVELOCITY_TO_DMATRIX
%    DR = ANGULARVELOCITY_TO_DMATRIX(IN1,IN2)

%    This function was generated by the Symbolic Math Toolbox version 7.1.
%    05-Jul-2017 13:07:10

r1_1 = in2(1);
r1_2 = in2(4);
r1_3 = in2(7);
r2_1 = in2(2);
r2_2 = in2(5);
r2_3 = in2(8);
r3_1 = in2(3);
r3_2 = in2(6);
r3_3 = in2(9);
wx = in1(1,:);
wy = in1(2,:);
wz = in1(3,:);
dR = reshape([r3_1.*wy-r2_1.*wz,-r3_1.*wx+r1_1.*wz,r2_1.*wx-r1_1.*wy,r3_2.*wy-r2_2.*wz,-r3_2.*wx+r1_2.*wz,r2_2.*wx-r1_2.*wy,r3_3.*wy-r2_3.*wz,-r3_3.*wx+r1_3.*wz,r2_3.*wx-r1_3.*wy],[3,3]);
