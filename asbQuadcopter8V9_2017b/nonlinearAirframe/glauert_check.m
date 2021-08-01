%%

v = -100:100;
alpha = 30*pi/180;
K1 = 0.25;
K2 = 0.083;
omega = 500*(2*pi)/60;
for i = 1:length(v)
[CT(i) fval(i)] = FindTrim2(v(i),omega,alpha,K1,K2);
end
plot(v,CT)
title('CT vs velocity at \alpha = 30 [deg]')
xlabel('V[m/s]')
ylabel('CT')
grid on
max(fval)