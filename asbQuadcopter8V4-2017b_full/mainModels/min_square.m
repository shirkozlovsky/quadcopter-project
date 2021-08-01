function [J]= min_square(x)
global K L b;
global Yaw1StepTime Yaw1Value Yaw2StepTime Yaw2Value   Pitch1StepTime Pitch1Value Pitch2StepTime Pitch2Value ;
global Roll1StepTime Roll1Value Roll2StepTime Roll2Value Z1StepTime Z1Value  Z2StepTime Z2Value;
K=x;
% L=x;
% b=x;

%% K flight 1
Z1StepTime=0.5;
Z1Value=-1.5;
Z2StepTime=5;
Z2Value=-3;

Roll1StepTime=0;
Roll1Value=0;
Pitch1StepTime =0;
Pitch1Value =0;
Yaw1StepTime =0;
Yaw1Value =0;

Roll2StepTime=Roll1StepTime+1;
Roll2Value=Roll1Value;
Pitch2StepTime =Pitch1StepTime+1;
Pitch2Value=Pitch1Value;
Yaw2StepTime =Yaw1StepTime+1;
Yaw2Value=Yaw1Value;
load('K1ref')
J=flight(state);

%% K flight 2
Z1StepTime=1;
Z1Value=-3.5;
Z2StepTime=6;
Z2Value=-2;

Roll1StepTime=0;
Roll1Value=0;
Pitch1StepTime =0;
Pitch1Value =0;
Yaw1StepTime =0;
Yaw1Value =0;

Roll2StepTime=Roll1StepTime+1;
Roll2Value=Roll1Value;
Pitch2StepTime =Pitch1StepTime+1;
Pitch2Value=Pitch1Value;
Yaw2StepTime =Yaw1StepTime+1;
Yaw2Value=Yaw1Value;
load('K2ref')
J=J+flight(state);

%% K flight 3
Z1StepTime=0.5;
Z1Value=-5.5;
Z2StepTime=5;
Z2Value=-3;

Roll1StepTime=0;
Roll1Value=0;
Pitch1StepTime =0;
Pitch1Value =0;
Yaw1StepTime =0;
Yaw1Value =0;

Roll2StepTime=Roll1StepTime+1;
Roll2Value=Roll1Value;
Pitch2StepTime =Pitch1StepTime+1;
Pitch2Value=Pitch1Value;
Yaw2StepTime =Yaw1StepTime+1;
Yaw2Value=Yaw1Value;
load('K3ref')
J=J+flight(state);

%% b flight 1
Z1StepTime=0.5;
Z1Value=-1.5;
Z2StepTime=0;
Z2Value=0;

Roll1StepTime=0;
Roll1Value=0;
Pitch1StepTime =0;
Pitch1Value =0;
Yaw1StepTime =1;
Yaw1Value =0.2;

Roll2StepTime=Roll1StepTime+1;
Roll2Value=Roll1Value;
Pitch2StepTime =Pitch1StepTime+1;
Pitch2Value=Pitch1Value;
Yaw2StepTime =Yaw1StepTime+3;
Yaw2Value=-2*Yaw1Value;
load('b1ref')
J=flight(state);

%% b flight 2
Z1StepTime=0.5;
Z1Value=-1.5;
Z2StepTime=0;
Z2Value=0;

Roll1StepTime=0;
Roll1Value=0;
Pitch1StepTime =0;
Pitch1Value =0;
Yaw1StepTime =1;
Yaw1Value =0.2;

Roll2StepTime=Roll1StepTime+1;
Roll2Value=Roll1Value;
Pitch2StepTime =Pitch1StepTime+1;
Pitch2Value=Pitch1Value;
Yaw2StepTime =Yaw1StepTime+3;
Yaw2Value=2*Yaw1Value;
load('b2ref')
J=J+flight(state);

%% b flight 3

Z1StepTime=0.5;
Z1Value=-1.5;
Z2StepTime=0;
Z2Value=0;

Roll1StepTime=0;
Roll1Value=0;
Pitch1StepTime =0;
Pitch1Value =0;
Yaw1StepTime =1;
Yaw1Value =-0.1;

Roll2StepTime=Roll1StepTime+1;
Roll2Value=Roll1Value;
Pitch2StepTime =Pitch1StepTime+1;
Pitch2Value=Pitch1Value;
Yaw2StepTime =Yaw1StepTime+4;
Yaw2Value=-3*Yaw1Value;
load('b3ref')
J=J+flight(state);

%% L flight 1
Z1StepTime=0.5;
Z1Value=-1.5;
Z2StepTime=0;
Z2Value=0;

Roll1StepTime=1;
Roll1Value=0.1;
Pitch1StepTime =3;
Pitch1Value =0.1;
Yaw1StepTime =0;
Yaw1Value =0;

Roll2StepTime=Roll1StepTime+1;
Roll2Value=Roll1Value;
Pitch2StepTime =Pitch1StepTime+1;
Pitch2Value=Pitch1Value;
Yaw2StepTime =Yaw1StepTime+4;
Yaw2Value=-3*Yaw1Value;
load('L1ref')
J=flight(state);

%% L flight 2
Z1StepTime=0.5;
Z1Value=-1.5;
Z2StepTime=0;
Z2Value=0;

Roll1StepTime=1;
Roll1Value=0.2;
Pitch1StepTime =4;
Pitch1Value =-0.1;
Yaw1StepTime =0;
Yaw1Value =0;

Roll2StepTime=Roll1StepTime+1;
Roll2Value=Roll1Value;
Pitch2StepTime =Pitch1StepTime+1;
Pitch2Value=Pitch1Value;
Yaw2StepTime =Yaw1StepTime+4;
Yaw2Value=-3*Yaw1Value;
load('L2ref')
J=J+flight(state);

%% L flight 3
Z1StepTime=0.5;
Z1Value=-1.5;
Z2StepTime=0;
Z2Value=0;

Roll1StepTime=1;
Roll1Value=0.3;
Pitch1StepTime =3;
Pitch1Value =-0.1;
Yaw1StepTime =0;
Yaw1Value =0;

Roll2StepTime=Roll1StepTime+1;
Roll2Value=Roll1Value;
Pitch2StepTime =Pitch1StepTime+2;
Pitch2Value=Pitch1Value;
Yaw2StepTime =Yaw1StepTime+1;
Yaw2Value=Yaw1Value;
load('L3ref')
J=J+flight(state);

%% validation flight
Z1StepTime=0.5;
Z1Value=-1.5;
Z2StepTime=0;
Z2Value=0;

Roll1StepTime=1;
Roll1Value=0.1;
Pitch1StepTime =3;
Pitch1Value =0.1;
Yaw1StepTime =5;
Yaw1Value =0.1;

Roll2StepTime=Roll1StepTime+1;
Roll2Value=Roll1Value;
Pitch2StepTime =Pitch1StepTime+1;
Pitch2Value=Pitch1Value;
Yaw2StepTime =Yaw1StepTime+1;
Yaw2Value=Yaw1Value;


