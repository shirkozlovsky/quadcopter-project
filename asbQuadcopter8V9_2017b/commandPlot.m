time = 3;
RTD = 180/pi;
%%
figure(1)
x0 = 0:0.01:time;
y0 = zeros(1,length(x0));

x1 = X1StepTime:0.01:time;
y1 = [zeros(1,length(x0)-length(x1)) X1Value*ones(1,length(x1))];

x2 = X2StepTime:0.01:time;
y2 = [zeros(1,length(x0)-length(x2)) X2Value*ones(1,length(x2))];

y = y0+y1+y2;
plot(x0,y,'LineWidth',2)
title('Input')
xlabel('time [sec]')
ylabel('X[m]')
grid on
hold on
legend('first','second','third')

figure(2)
x0 = 0:0.01:time;
y0 = zeros(1,length(x0));

x1 = Z1StepTime:0.01:time;
y1 = [zeros(1,length(x0)-length(x1)) Z1Value*ones(1,length(x1))];

x2 = Z2StepTime:0.01:time;
y2 = [zeros(1,length(x0)-length(x2)) Z2Value*ones(1,length(x2))];

y = y0+y1+y2;
plot(x0,-y,'LineWidth',2)
title('Z_E')
xlabel('time [sec]')
ylabel('Z[m]')
grid on
hold on

figure(3)
x0 = 0:0.01:time;
y0 = zeros(1,length(x0));

x1 = Y1StepTime:0.01:time;
y1 = [zeros(1,length(x0)-length(x1)) Y1Value*ones(1,length(x1))];

x2 = Y2StepTime:0.01:time;
y2 = [zeros(1,length(x0)-length(x2)) Y2Value*ones(1,length(x2))];

y = y0+y1+y2;
plot(x0,y,'LineWidth',2)
title('Input')
xlabel('time [sec]')
ylabel('Y[m]')
grid on
hold on

figure(4)
x0 = 0:0.01:time;
y0 = zeros(1,length(x0));

x1 = Yaw1StepTime:0.01:time;
y1 = [zeros(1,length(x0)-length(x1)) Yaw1Value*ones(1,length(x1))];

x2 = Yaw2StepTime:0.01:time;
y2 = [zeros(1,length(x0)-length(x2)) Yaw2Value*ones(1,length(x2))];

y = y0+y1+y2;
plot(x0,y*RTD,'LineWidth',2)
title('Input')
xlabel('time [sec]')
ylabel('Yaw[deg]')
grid on
hold on