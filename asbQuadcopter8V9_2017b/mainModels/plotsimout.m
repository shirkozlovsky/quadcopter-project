% sim('asbQuadcopter')
function plotsimout(state, state1, holdflag)
% state=full;
% state1=simple;
VbodyX1 = reshape([state1.V_body.Data(1,1,:)],[numel(state1.V_body.Data(1,1,:)),1]);
VbodyY1= reshape([state1.V_body.Data(2,1,:)],[numel(state1.V_body.Data(2,1,:)),1]);
VbodyZ1 = reshape([state1.V_body.Data(3,1,:)],[numel(state1.V_body.Data(3,1,:)),1]);
VbodyX2 = reshape([state.V_body.Data(1,1,:)],[numel(state.V_body.Data(1,1,:)),1]);
VbodyY2= reshape([state.V_body.Data(2,1,:)],[numel(state.V_body.Data(2,1,:)),1]);
VbodyZ2 = reshape([state.V_body.Data(3,1,:)],[numel(state.V_body.Data(3,1,:)),1]);
AccelbodyX1 = reshape([state1.Accel_body.Data(1,1,:)],[numel(state1.Accel_body.Data(1,1,:)),1]);
AccelbodyY1 = reshape([state1.Accel_body.Data(2,1,:)],[numel(state1.Accel_body.Data(2,1,:)),1]);
AccelbodyZ1 = reshape([state1.Accel_body.Data(3,1,:)],[numel(state1.Accel_body.Data(3,1,:)),1]);
AccelbodyX2 = reshape([state.Accel_body.Data(1,1,:)],[numel(state.Accel_body.Data(1,1,:)),1]);
AccelbodyY2 = reshape([state.Accel_body.Data(2,1,:)],[numel(state.Accel_body.Data(2,1,:)),1]);
AccelbodyZ2 = reshape([state.Accel_body.Data(3,1,:)],[numel(state.Accel_body.Data(3,1,:)),1]);
dOmegabadyX1= reshape([state1.dOmega_body.Data(1,1,:)],[numel(state1.dOmega_body.Data(1,1,:)),1]);
dOmegabadyY1= reshape([state1.dOmega_body.Data(2,1,:)],[numel(state1.dOmega_body.Data(2,1,:)),1]);
dOmegabadyZ1= reshape([state1.dOmega_body.Data(3,1,:)],[numel(state1.dOmega_body.Data(3,1,:)),1]);
dOmegabadyX2= reshape([state.dOmega_body.Data(1,1,:)],[numel(state.dOmega_body.Data(1,1,:)),1]);
dOmegabadyY2= reshape([state.dOmega_body.Data(2,1,:)],[numel(state.dOmega_body.Data(2,1,:)),1]);
dOmegabadyZ2= reshape([state.dOmega_body.Data(3,1,:)],[numel(state.dOmega_body.Data(3,1,:)),1]);
OmegabadyX1= reshape([state1.Omega_body.Data(1,1,:)],[numel(state1.Omega_body.Data(1,1,:)),1]);
OmegabadyY1= reshape([state1.Omega_body.Data(2,1,:)],[numel(state1.Omega_body.Data(2,1,:)),1]);
OmegabadyZ1= reshape([state1.Omega_body.Data(3,1,:)],[numel(state1.Omega_body.Data(3,1,:)),1]);
OmegabadyX2= reshape([state.Omega_body.Data(1,1,:)],[numel(state.Omega_body.Data(1,1,:)),1]);
OmegabadyY2= reshape([state.Omega_body.Data(2,1,:)],[numel(state.Omega_body.Data(2,1,:)),1]);
OmegabadyZ2= reshape([state.Omega_body.Data(3,1,:)],[numel(state.Omega_body.Data(3,1,:)),1]);
Euler_phi1= reshape([state1.Euler.Data(1,1,:)],[numel(state1.Euler.Data(1,1,:)),1]);
Euler_theta1= reshape([state1.Euler.Data(2,1,:)],[numel(state1.Euler.Data(2,1,:)),1]);
Euler_psi1= reshape([state1.Euler.Data(3,1,:)],[numel(state1.Euler.Data(3,1,:)),1]);
Euler_phi2= reshape([state.Euler.Data(1,1,:)],[numel(state.Euler.Data(1,1,:)),1]);
Euler_theta2= reshape([state.Euler.Data(2,1,:)],[numel(state.Euler.Data(2,1,:)),1]);
Euler_psi2= reshape([state.Euler.Data(3,1,:)],[numel(state.Euler.Data(3,1,:)),1]);
% Force_x1= reshape([state.Forces.Data(1,1,:)],[numel(state.Forces.Data(1,1,:)),1]);
% Force_y1= reshape([state.Forces.Data(2,1,:)],[numel(state.Forces.Data(2,1,:)),1]);
% Force_z1= reshape([state.Forces.Data(3,1,:)],[numel(state.Forces.Data(3,1,:)),1]);
% Force_x2= reshape([state1.Forces.Data(1,1,:)],[numel(state1.Forces.Data(1,1,:)),1]);
% Force_y2= reshape([state1.Forces.Data(2,1,:)],[numel(state1.Forces.Data(2,1,:)),1]);
% Force_z2= reshape([state1.Forces.Data(3,1,:)],[numel(state1.Forces.Data(3,1,:)),1]);
% moments_x1= reshape([state.Moments.Data(1,1,:)],[numel(state.Moments.Data(1,1,:)),1]);
% moments_y1= reshape([state.Moments.Data(2,1,:)],[numel(state.Moments.Data(2,1,:)),1]);
% moments_z1= reshape([state.Moments.Data(3,1,:)],[numel(state.Moments.Data(3,1,:)),1]);
% moments_x2= reshape([state1.Moments.Data(1,1,:)],[numel(state1.Moments.Data(1,1,:)),1]);
% moments_y2= reshape([state1.Moments.Data(2,1,:)],[numel(state1.Moments.Data(2,1,:)),1]);
% moments_z2= reshape([state1.Moments.Data(3,1,:)],[numel(state1.Moments.Data(3,1,:)),1]);

% figure; %velocity x body
% plot(state.V_body.Time,VbodyX1)
% grid on;
% hold on;
% plot(state.V_body.Time,VbodyX2)
% title('velocity x body')
% xlabel('Time [sec]')
% ylabel('velocity [m/s]')
%
% figure; %velocity y body
% plot(state.V_body.Time,VbodyY1)
% grid on;
% hold on;
% plot(state.V_body.Time,VbodyY2)
% title('velocity y body')
% xlabel('Time [sec]')
% ylabel('velocity [m/s]')
%
% figure; %velocity z body
% plot(state.V_body.Time,VbodyZ1)
% grid on;
% hold on;
% plot(state.V_body.Time,VbodyZ2)
% title('velocity z body')
% xlabel('Time [sec]')
% ylabel('velocity [m/s]')
%
% figure; %accelertion x body
% plot(state.Accel_body.Time,AccelbodyX1)
% grid on;
% hold on;
% plot(state.V_body.Time,AccelbodyX2)
% title('accelertion x body')
% xlabel('Time [sec]')
% ylabel('accelertion [m/s^2]')
%
% figure; %accelertion y body
% plot(state.Accel_body.Time,AccelbodyY1)
% grid on;
% hold on;
% plot(state.V_body.Time,AccelbodyY2)
% title('accelertion y body')
% xlabel('Time [sec]')
% ylabel('accelertion [m/s^2]')
%
% figure; %accelertion z body
% plot(state.Accel_body.Time,AccelbodyZ1)
% grid on;
% hold on;
% plot(state.V_body.Time,AccelbodyZ2)
% title('accelertion z body')
% xlabel('Time [sec]')
% ylabel('accelertion [m/s^2]')

%% Angular Velocity/Acc

figure(1); %rate
subplot(3,2,1)
plot(state.Omega_body.Time,OmegabadyX1)
grid on;
hold on;
plot(state.Omega_body.Time,OmegabadyX2)
title('Angular Velocity x body')
xlabel('Time [sec]')
ylabel('Angular Velocity [rad/s]')
legend('Simple','Original');

subplot(3,2,3)
plot(state.Omega_body.Time,OmegabadyY1)
grid on;
hold on;
plot(state.Omega_body.Time,OmegabadyY2)
title('Angular Velocity y body')
xlabel('Time [sec]')
ylabel('Angular Velocity [rad/s]')

subplot(3,2,5)
plot(state.Omega_body.Time,OmegabadyZ1)
grid on;
hold on;
plot(state.Omega_body.Time,OmegabadyZ2)
title('Angular Velocity z body')
xlabel('Time [sec]')
ylabel('Angular Velocity [rad/s]')

% figure(2); %
subplot(3,2,2)
plot(state.dOmega_body.Time,dOmegabadyX1)
grid on;
hold on;
plot(state.dOmega_body.Time,dOmegabadyX2)
title('Angular Acceleration x body')
xlabel('Time [sec]')
ylabel('Angular Acceleration [rad/s^2]')
% legend('Simple','Original');

subplot(3,2,4)
plot(state.dOmega_body.Time,dOmegabadyY1)
grid on;
hold on;
plot(state.dOmega_body.Time,dOmegabadyY2)
title('Angular Acceleration y body')
xlabel('Time [sec]')
ylabel('Angular Acceleration [rad/s^2]')

subplot(3,2,6)
plot(state.dOmega_body.Time,dOmegabadyZ1)
grid on;
hold on;
plot(state.dOmega_body.Time,dOmegabadyZ2)
title('Angular Acceleration z body')
xlabel('Time [sec]')
ylabel('Angular Acceleration [rad/s^2]')

%% Euler

figure(3);
subplot(3,1,1)
plot(state.Euler.Time,Euler_phi1)
grid on;
hold on;
plot(state.Euler.Time,Euler_phi2)
title('Euler \phi')
xlabel('Time [sec]')
ylabel('Euler \phi [rad]')
legend('Simple','Original');

subplot(3,1,2)
plot(state.Euler.Time,Euler_theta1)
grid on;
hold on;
plot(state.Euler.Time,Euler_theta2)
title('Euler \theta')
xlabel('Time [sec]')
ylabel('Euler \theta [rad]')

subplot(3,1,3)
plot(state.Euler.Time,Euler_psi1)
grid on;
hold on;
plot(state.Euler.Time,Euler_psi2)
title('Euler \psi')
xlabel('Time [sec]')
ylabel('Euler \psi [rad]')

%% subplot- Vel\Acc
figure(4);
subplot(3,2,1); %velocity x body
plot(state.V_body.Time,VbodyX1)
grid on;
hold on;
plot(state.V_body.Time,VbodyX2)
title('velocity x body')
xlabel('Time [sec]')

subplot(3,2,3); %velocity y body
plot(state.V_body.Time,VbodyY1)
grid on;
hold on;
plot(state.V_body.Time,VbodyY2)
title('velocity y body')
xlabel('Time [sec]')

subplot(3,2,5); %velocity z body
plot(state.V_body.Time,VbodyZ1)
grid on;
hold on;
plot(state.V_body.Time,VbodyZ2)
title('velocity z body')
xlabel('Time [sec]')


subplot(3,2,2); %accelertion x body
plot(state.Accel_body.Time,AccelbodyX1)
grid on;
hold on;
plot(state.Accel_body.Time,AccelbodyX2)
title('accelertion x body')
xlabel('Time [sec]')


subplot(3,2,4); %accelertion y body
plot(state.Accel_body.Time,AccelbodyY1)
grid on;
hold on;
plot(state.Accel_body.Time,AccelbodyY2)
title('accelertion y body')
xlabel('Time [sec]')

subplot(3,2,6); %accelertion z body
plot(state1.Accel_body.Time,AccelbodyZ1)
grid on;
hold on;
plot(state.Accel_body.Time,AccelbodyZ2)
title('accelertion z body')
xlabel('Time [sec]')
legend('Simple','Original');

% forces and moments
% figure(5);
% subplot(3,1,1); %accelertion z body
% plot(state.Accel_body.Time,Force_x1)
% grid on;
% hold on;
% plot(state.V_body.Time,Force_x2)
% legend('Simple','Original');
% title('Force x')
% 
% subplot(3,1,2); %accelertion z body
% plot(state.Accel_body.Time,Force_y1)
% grid on;
% hold on;
% plot(state.V_body.Time,Force_y2)
% title('Force y')
% 
% subplot(3,1,3); %accelertion z body
% plot(state.Accel_body.Time,Force_z1)
% grid on;
% hold on;
% plot(state.V_body.Time,Force_z2)
% title('Force z')
% xlabel('Time [sec]')
% 
% figure(6);
% subplot(3,1,1); %accelertion z body
% plot(state.Accel_body.Time,moments_x1)
% grid on;
% hold on;
% plot(state.V_body.Time,moments_x2)
% legend('Simple','Original');
% title('moments x')
% 
% subplot(3,1,2); %accelertion z body
% plot(state.Accel_body.Time,moments_y1)
% grid on;
% hold on;
% plot(state.V_body.Time,moments_y2)
% title('moments y')
% 
% subplot(3,1,3); %accelertion z body
% plot(state.Accel_body.Time,moments_z1)
% grid on;
% hold on;
% plot(state.V_body.Time,moments_z2)
% title('moments z')

if holdflag
    hold on;
else
    hold off;
end

end