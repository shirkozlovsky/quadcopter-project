function [J]= min_square(x)
global K b K2 Cdxy Cdz K3;
global PARAM Flight ;
global Yaw1StepTime Yaw1Value Yaw2StepTime Yaw2Value Yaw3StepTime Yaw3Value Pitch1StepTime Pitch1Value Pitch2StepTime Pitch2Value Pitch3StepTime Pitch3Value Z1StepTime Z1Value;
global Roll1StepTime Roll1Value Roll2StepTime Roll2Value Roll3StepTime Roll3Value Z2StepTime Z2Value Z3StepTime Z3Value X2StepTime X2Value X3StepTime X3Value X1StepTime X1Value;
global Y1StepTime Y1Value Y2StepTime Y2Value Y3StepTime Y3Value K1;
global J_vec J_index
switch PARAM
    case 1
K=x;
    case 2
b=x;
    case 3
K=x(1);
b=x(2);
    case 4
Cdz = x(1);
% K2 = x(2);
K = x(2);
end
switch PARAM
%% 
         case 1
%% K flight 1
Z1StepTime=1;
Z1Value=-1;
Z2StepTime=2;
Z2Value=-1;
Z3StepTime=0;
Z3Value=0;

Roll1StepTime=10;
Roll1Value=0;
Roll2StepTime=0;
Roll2Value=-0;
Roll3StepTime=0;
Roll3Value=0;

Pitch1StepTime =0;
Pitch1Value =0;
Pitch2StepTime =0;
Pitch2Value=-0;
Pitch3StepTime =0;
Pitch3Value=0;

Yaw1StepTime =0;
Yaw1Value =0;
Yaw2StepTime =0;
Yaw2Value=-0;
Yaw3StepTime =0;
Yaw3Value=0;

X1StepTime=5;
X1Value=300;
X2StepTime=13;
X2Value=-2;
X3StepTime=0;
X3Value=0;
A= load('C:\Users\Shir\Dropbox\technion\semester 6\quadcopter\asbQuadcopter8V5_2017b -\K1_real');
% load('C:\Users\PUBLIC.PC\Desktop\asbQuadcopter8V4_2017b\k1ref')
if Flight==1
    J=flight(state);
end
if Flight==2
        J=real_flight(A);
end
   
%% K flight 2
Z1StepTime=1;
Z1Value=-2;
Z2StepTime=2;
Z2Value=-2;
Z3StepTime=0;
Z3Value=0;

Roll1StepTime=10;
Roll1Value=0;
Roll2StepTime=0;
Roll2Value=-0;
Roll3StepTime=0;
Roll3Value=0;

Pitch1StepTime =0;
Pitch1Value =0;
Pitch2StepTime =0;
Pitch2Value=-0;
Pitch3StepTime =0;
Pitch3Value=0;

Yaw1StepTime =0;
Yaw1Value =0;
Yaw2StepTime =0;
Yaw2Value=-0;
Yaw3StepTime =0;
Yaw3Value=0;

X1StepTime=11;
X1Value=2;
X2StepTime=0;
X2Value=0;
X3StepTime=0;
X3Value=0;

A= load('C:\Users\Shir\Dropbox\technion\semester 6\quadcopter\asbQuadcopter8V5_2017b -\K2_real');
% load('C:\Users\PUBLIC.PC\Desktop\asbQuadcopter8V4_2017b\k2ref')
if Flight==1
    J=J+flight(state);
end
if Flight==2
        J=J+real_flight(A);
end

   
%% K flight 3
Z1StepTime=1;
Z1Value=-3;
Z2StepTime=2;
Z2Value=1;
Z3StepTime=3;
Z3Value=1;

Roll1StepTime=10;
Roll1Value=0;
Roll2StepTime=0;
Roll2Value=-0;
Roll3StepTime=0;
Roll3Value=0;

Pitch1StepTime =0;
Pitch1Value =0;
Pitch2StepTime =0;
Pitch2Value=-0;
Pitch3StepTime =0;
Pitch3Value=0;

Yaw1StepTime =0;
Yaw1Value =0;
Yaw2StepTime =0;
Yaw2Value=-0;
Yaw3StepTime =0;
Yaw3Value=0;

X1StepTime=11;
X1Value=2;
X2StepTime=13;
X2Value=-2;
X3StepTime=0;
X3Value=0;

A= load('C:\Users\Shir\Dropbox\technion\semester 6\quadcopter\asbQuadcopter8V5_2017b -\K3_real');
% load('C:\Users\PUBLIC.PC\Desktop\asbQuadcopter8V4_2017b\k3ref')
if Flight==1
    J=J+flight(state);
end
if Flight==2
        J=J+real_flight(A);
end
%% 
        case 2
%% b flight 1
Z1StepTime=0;
Z1Value=-1;
Z2StepTime=0;
Z2Value=0;
Z3StepTime=0;
Z3Value=0;

Roll1StepTime=10;
Roll1Value=0;
Roll2StepTime=0;
Roll2Value=-0;
Roll3StepTime=0;
Roll3Value=0;

Pitch1StepTime =0;
Pitch1Value =0;
Pitch2StepTime =0;
Pitch2Value=-0;
Pitch3StepTime =0;
Pitch3Value=0;

Yaw1StepTime =1;
Yaw1Value =0.3;
Yaw2StepTime =2;
Yaw2Value=0.3;
Yaw3StepTime =0;
Yaw3Value=0;

X1StepTime=11;
X1Value=2;
X2StepTime=13;
X2Value=-2;
X3StepTime=0;
X3Value=0;

A= load('C:\Users\Shir\Dropbox\technion\semester 6\quadcopter\asbQuadcopter8V5_2017b -\b1_real');
% load('C:\Users\PUBLIC.PC\Desktop\asbQuadcopter8V4_2017b\b1ref')
if Flight==1
    J=flight(state);
end
if Flight==2
        J=real_flight(A);
end

%% b flight 2
Z1StepTime=0;
Z1Value=-0.5;
Z2StepTime=0;
Z2Value=0;
Z3StepTime=0;
Z3Value=0;

Roll1StepTime=10;
Roll1Value=0;
Roll2StepTime=0;
Roll2Value=-0;
Roll3StepTime=0;
Roll3Value=0;

Pitch1StepTime =0;
Pitch1Value =0;
Pitch2StepTime =0;
Pitch2Value=-0;
Pitch3StepTime =0;
Pitch3Value=0;

Yaw1StepTime =1;
Yaw1Value =0.4;
Yaw2StepTime =2;
Yaw2Value=0.4;
Yaw3StepTime =0;
Yaw3Value=0;

X1StepTime=11;
X1Value=2;
X2StepTime=13;
X2Value=-2;
X3StepTime=0;
X3Value=0;

A= load('C:\Users\Shir\Dropbox\technion\semester 6\quadcopter\asbQuadcopter8V5_2017b -\b2_real');
% load('C:\Users\PUBLIC.PC\Desktop\asbQuadcopter8V4_2017b\b2ref')
if Flight==1
    J=J+flight(state);
end
if Flight==2
    J=J+real_flight(A);
end

%% b flight 3

Z1StepTime=0;
Z1Value=-0.5;
Z2StepTime=0;
Z2Value=0;
Z3StepTime=0;
Z3Value=0;

Roll1StepTime=10;
Roll1Value=0;
Roll2StepTime=0;
Roll2Value=-0;
Roll3StepTime=0;
Roll3Value=0;

Pitch1StepTime =0;
Pitch1Value =0;
Pitch2StepTime =0;
Pitch2Value=-0;
Pitch3StepTime =0;
Pitch3Value=0;

Yaw1StepTime =1;
Yaw1Value =0.5;
Yaw2StepTime =2;
Yaw2Value=-0.3;
Yaw3StepTime =0;
Yaw3Value=0;

X1StepTime=11;
X1Value=2;
X2StepTime=13;
X2Value=-2;
X3StepTime=0;
X3Value=0;

A= load('C:\Users\Shir\Dropbox\technion\semester 6\quadcopter\asbQuadcopter8V5_2017b -\b3_real');
% load('C:\Users\PUBLIC.PC\Desktop\asbQuadcopter8V4_2017b\b3ref')
if Flight==1
    J=J+flight(state);
end
if Flight==2
    J=J+real_flight(A);
end
%%
    case 3
%% combined flight
Z1StepTime=0;
Z1Value=-1;
Z2StepTime=2;
Z2Value=0;
Z3StepTime=0;
Z3Value=0;

Roll1StepTime=1;
Roll1Value=0.4;
Roll2StepTime=2;
Roll2Value=-0.4;
Roll3StepTime=0;
Roll3Value=0;

Pitch1StepTime =4;
Pitch1Value =0.2;
Pitch2StepTime =5;
Pitch2Value=-0.2;
Pitch3StepTime =0;
Pitch3Value=0;

Yaw1StepTime =7;
Yaw1Value =0.4;
Yaw2StepTime =8;
Yaw2Value=-0.4;
Yaw3StepTime =0;
Yaw3Value=0;

X1StepTime=11;
X1Value=2;
X2StepTime=13;
X2Value=-2;
X3StepTime=0;
X3Value=0;

% load('C:\Users\PUBLIC.PC\Desktop\asbQuadcopter8V4_2017b\valid');
load('C:\Users\Shir\Dropbox\technion\semester 6\quadcopter\asbQuadcopter8V5_2017b -\A');
if Flight==1
    J=flight(state);
end
if Flight==2
        J=real_flight(A);  
end
    case 4


Z1StepTime=1;
Z1Value=-2;
Z2StepTime=2;
Z2Value=-2;
Z3StepTime=0;
Z3Value=0;

Roll1StepTime=2;
Roll1Value=0;
Roll2StepTime=0;
Roll2Value=0;
Roll3StepTime=0;
Roll3Value=0;

Pitch1StepTime =1;
Pitch1Value =0;
Pitch2StepTime =6;
Pitch2Value=-0;
Pitch3StepTime =0;
Pitch3Value=0;

Yaw1StepTime =8;
Yaw1Value =0;
Yaw2StepTime =0;
Yaw2Value=0;
Yaw3StepTime =0;
Yaw3Value=0;

X1StepTime = 5;
X1Value = 0;
X2StepTime=0;
X2Value=-0;
X3StepTime=0;
X3Value=0;

Y1StepTime=5;
Y1Value=0;
Y2StepTime=0;
Y2Value=0;
Y3StepTime=0;
Y3Value=0;

RealData = load('C:\Users\PUBLIC.PC\Desktop\asbQuadcopter8V7_2017b\real_flight\Zt1Zv2Zt2Zv2time3\state.mat');
SimData = load('C:\Users\PUBLIC.PC\Desktop\asbQuadcopter8V7_2017b\simulation_flight\Zt1Zv3mZt2Zv1ptime3\state.mat');
if Flight==1
    J1=flight(SimData.state);
end
if Flight==2
    J1=real_flight(RealData);
end

% Z1StepTime=1;
% Z1Value=-2;
% Z2StepTime=2;
% Z2Value=-2;
% RealData = load('C:\Users\PUBLIC.PC\Desktop\asbQuadcopter8V7_2017b\real_flight\Zt1Zv2Zt2Zv2time3\state.mat');
% if Flight==1
%     J2=flight(SimData.state);
% end
% if Flight==2
%     J2=real_flight(RealData);
% end
% Z1StepTime=1;
% Z1Value=-3;
% Z2StepTime=2;
% Z2Value=1;
% RealData = load('C:\Users\PUBLIC.PC\Desktop\asbQuadcopter8V7_2017b\real_flight\Zt1Zv3mZt2Zv1ptime3\state.mat');
% if Flight==1
%     J3=flight(SimData.state);
% end
% if Flight==2
%     J3=real_flight(RealData);
% end
% J = J1+J2+J3
J = J1
    J_vec(J_index) = J; % to show convergence
    J_index = J_index+1;

end
