clc
global PARAM Flight J_vec J_index;
PARAM=4;% 1 for K 2 for b 3 for combined 4 for Cd
Flight=2;% 1-sim 2- real
J_index = 1;
%% run search
% x0=1.1706e-10;
clear x J_vec
x0(1) = [0];%Cdz;
% x(2) = 0.6051; %Lock
x0(2) = 4.1462e-08;
% fminsearch(@min_square,x)
A = [];
b = [];
Aeq = [];
beq = [];
lb = [0,0];
ub = [0.01,4e-7];
nonlcon = [];
options = optimoptions('fmincon','StepTolerance',1e-10);
x = fmincon(@min_square,x0,A,b,Aeq,beq,lb,ub,nonlcon,options)
