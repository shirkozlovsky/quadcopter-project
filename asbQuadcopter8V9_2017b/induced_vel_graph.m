global K
clear T V
x1 = 0:0.1:5;
x2 = -1.999:0.1:0.0001;
x3 = -5:0.1:-2;

f1 = -1/2 * x1 +1/2*(x1.^2+4).^0.5;
f2 = 1 -0.5*x2 +5/4*x2.^2 +3/4*x2.^3;
f3 = -1/2 * x3 -1/2*(x3.^2-4).^0.5;

title('Induced Velocity Vs Climb Ratio')
xlabel('Vc/Vh')
ylabel('Vi/Vh')
% plot(x1,f1)
% hold on
% plot(x2,f2)
% plot(x3,f3)
f = [f3,f2,f1];
x = [x3,x2,x1];
% plot(x,f)
%% thrust check
alpha = 30;
omega = 1900;
rho = 1.185;
A = pi*(0.033^2);
V = -50:0.1:50;
Vh = sqrt(K/(2*A*rho)) * omega;

for i=1:length(V)
Vi_h = interp1(x,f,V(i)*sind(alpha)/Vh);
T(i) = Vi_h *sqrt(2*rho*A*K)*omega*sqrt((V(i)*cosd(alpha))^2+(V(i)*sind(alpha)+Vi_h*sqrt(K/(2*rho*A)) *omega)^2);
end
figure(1)
plot(V,T)
title('T vs Velocity')
xlabel('V[m/s]')
ylabel('T[N]')
grid on
hold on

