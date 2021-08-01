clc

%% run search
% x0=[4.7188e-08 0.061 1.1406e-10];
x0=4.7188e-08;
fminsearch(@min_square,x0)

