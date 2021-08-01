global K; global L; global b; global Cdxy Cdz theta0 theta_tip theta1 K2 Ka1s Kb1s ;
 
%% tuned const
% K2 = 10*10^10;%[0.605100000000000];
K2 =[0.605100000000000];

Cdxy = 0.037*1;
Cdz = [0.005]*1;
b= 1.4852e-10;
Ka1s = 1;
Kb1s = 1;
% K= 4.72e-08;
K= 4.1462e-08;
%% fixed const
L=0.06;
theta0 = 20*pi/180;
theta_tip = 5*pi/180;
theta1 = theta_tip-theta0;
