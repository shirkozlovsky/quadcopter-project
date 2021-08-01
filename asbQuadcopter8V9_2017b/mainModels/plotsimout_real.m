% sim('asbQuadcopter')
function plotsimout_real(state,state1, holdflag)
% state=real;
% state1=sim;

VbodyX_sim = reshape([state1.V_body.Data(1,1,:)],[numel(state1.V_body.Data(1,1,:)),1]);
VbodyY_sim= reshape([state1.V_body.Data(2,1,:)],[numel(state1.V_body.Data(2,1,:)),1]);
VbodyZ_sim = reshape([state1.V_body.Data(3,1,:)],[numel(state1.V_body.Data(3,1,:)),1]);
AccelbodyX_sim = reshape([state1.Accel_body.Data(1,1,:)],[numel(state1.Accel_body.Data(1,1,:)),1]);
AccelbodyY_sim = reshape([state1.Accel_body.Data(2,1,:)],[numel(state1.Accel_body.Data(2,1,:)),1]);
AccelbodyZ_sim = reshape([state1.Accel_body.Data(3,1,:)],[numel(state1.Accel_body.Data(3,1,:)),1]);
dOmegabadyX_sim= reshape([state1.dOmega_body.Data(1,1,:)],[numel(state1.dOmega_body.Data(1,1,:)),1]);
dOmegabadyY_sim= reshape([state1.dOmega_body.Data(2,1,:)],[numel(state1.dOmega_body.Data(2,1,:)),1]);
dOmegabadyZ_sim= reshape([state1.dOmega_body.Data(3,1,:)],[numel(state1.dOmega_body.Data(3,1,:)),1]);
OmegabadyX_sim= reshape([state1.Omega_body.Data(1,1,:)],[numel(state1.Omega_body.Data(1,1,:)),1]);
OmegabadyY_sim= reshape([state1.Omega_body.Data(2,1,:)],[numel(state1.Omega_body.Data(2,1,:)),1]);
OmegabadyZ_sim= reshape([state1.Omega_body.Data(3,1,:)],[numel(state1.Omega_body.Data(3,1,:)),1]);
Euler_phi_sim= reshape([state1.Euler.Data(1,1,:)],[numel(state1.Euler.Data(1,1,:)),1]);
Euler_theta_sim= reshape([state1.Euler.Data(2,1,:)],[numel(state1.Euler.Data(2,1,:)),1]);
Euler_psi_sim= reshape([state1.Euler.Data(3,1,:)],[numel(state1.Euler.Data(3,1,:)),1]);

VbodyX_real= state.rt_estim.signals.values(:,7);
VbodyY_real= state.rt_estim.signals.values(:,8);
VbodyZ_real= state.rt_estim.signals.values(:,9);
AccelbodyX_real= state.rt_sensor.signals.values(:,1);
AccelbodyY_real= state.rt_sensor.signals.values(:,2);
AccelbodyZ_real= state.rt_sensor.signals.values(:,3)+10.0578;
dOmegabadyX_real= state.rt_sensor.signals.values(:,4);
dOmegabadyY_real= state.rt_sensor.signals.values(:,5);
dOmegabadyZ_real= state.rt_sensor.signals.values(:,6);
OmegabadyX_real= state.rt_estim.signals.values(:,10);
OmegabadyY_real= state.rt_estim.signals.values(:,11);
OmegabadyZ_real= state.rt_estim.signals.values(:,12);
Euler_phi_real= state.rt_estim.signals.values(:,6);
Euler_theta_real= state.rt_estim.signals.values(:,5);
Euler_psi_real= state.rt_estim.signals.values(:,4);
RTD=180/pi;

%% Angular Velocity/Acc

figure(1); %rate
subplot(3,2,1)
plot(state1.V_body.Time  ,RTD*OmegabadyX_sim)
grid on;
hold on;
plot(state.rt_estim.time  ,RTD*OmegabadyX_real)
title('Angular Velocity x body')
xlabel('Time [sec]')
ylabel('Angular Velocity [deg/s]')
legend('Simple','real');

subplot(3,2,3)
plot(state1.V_body.Time  ,RTD*OmegabadyY_sim)
grid on;
hold on;
plot(state.rt_estim.time  ,RTD*OmegabadyY_real)
title('Angular Velocity y body')
xlabel('Time [sec]')
ylabel('Angular Velocity [deg/s]')

subplot(3,2,5)
plot(state1.V_body.Time  ,RTD*OmegabadyZ_sim)
grid on;
hold on;
plot(state.rt_estim.time  ,RTD*OmegabadyZ_real)
title('Angular Velocity z body')
xlabel('Time [sec]')
ylabel('Angular Velocity [deg/s]')

% figure(2); %
subplot(3,2,2)
plot(state1.V_body.Time  ,RTD*dOmegabadyX_sim)
grid on;
hold on;
plot(state.rt_estim.time  ,RTD*dOmegabadyX_real)
title('Angular Acceleration x body')
xlabel('Time [sec]')
ylabel('Angular Acceleration [deg/s^2]')
% legend('Simple','real');

subplot(3,2,4)
plot(state1.V_body.Time  ,RTD*dOmegabadyY_sim)
grid on;
hold on;
plot(state.rt_estim.time  ,RTD*dOmegabadyY_real)
title('Angular Acceleration y body')
xlabel('Time [sec]')
ylabel('Angular Acceleration [deg/s^2]')

subplot(3,2,6)
plot(state1.V_body.Time  ,RTD*dOmegabadyZ_sim)
grid on;
hold on;
plot(state.rt_estim.time  ,RTD*dOmegabadyZ_real)
title('Angular Acceleration z body')
xlabel('Time [sec]')
ylabel('Angular Acceleration [deg/s^2]')

%% Euler

figure(3);
subplot(3,1,1)
plot(state1.V_body.Time  ,RTD*Euler_phi_sim)
grid on;
hold on;
plot(state.rt_estim.time  ,RTD*Euler_phi_real)
title('Euler \phi')
xlabel('Time [sec]')
ylabel('Euler \phi [deg]')
legend('Simple','real');

subplot(3,1,2)
plot(state1.V_body.Time  ,RTD*Euler_theta_sim)
grid on;
hold on;
plot(state.rt_estim.time  ,RTD*Euler_theta_real)
title('Euler \theta')
xlabel('Time [sec]')
ylabel('Euler \theta [deg]')

subplot(3,1,3)
plot(state1.V_body.Time  ,RTD*Euler_psi_sim)
grid on;
hold on;
plot(state.rt_estim.time  ,RTD*Euler_psi_real)
title('Euler \psi')
xlabel('Time [sec]')
ylabel('Euler \psi [deg]')

%% subplot- Vel\Acc
figure(4);
subplot(3,2,1); %velocity x body
plot(state1.V_body.Time  ,VbodyX_sim)
grid on;
hold on;
plot(state.rt_estim.time  ,VbodyX_real)
title('velocity x body')
xlabel('Time [sec]')
ylabel('V[m/s]')

subplot(3,2,3); %velocity y body
plot(state1.V_body.Time  ,VbodyY_sim)
grid on;
hold on;
plot(state.rt_estim.time  ,VbodyY_real)
title('velocity y body')
xlabel('Time [sec]')
ylabel('V[m/s]')


subplot(3,2,5); %velocity z body
plot(state1.V_body.Time  ,VbodyZ_sim)
grid on;
hold on;
plot(state.rt_estim.time  ,VbodyZ_real)
title('velocity z body')
xlabel('Time [sec]')
ylabel('V[m/s]')



subplot(3,2,2); %acceleration x body
plot(state1.V_body.Time,AccelbodyX_sim)
grid on;
hold on;
plot(state.rt_estim.time,AccelbodyX_real)
title('acceleration x body')
xlabel('Time [sec]')
ylabel('a[m/s^2]')



subplot(3,2,4); %acceleration y body
plot(state1.V_body.Time,AccelbodyY_sim)
grid on;
hold on;
plot(state.rt_estim.time,AccelbodyY_real)
title('acceleration y body')
xlabel('Time [sec]')
ylabel('a[m/s^2]')


subplot(3,2,6); %acceleration z body
plot(state1.V_body.Time,AccelbodyZ_sim)
grid on;
hold on;
plot(state.rt_estim.time,AccelbodyZ_real)
title('acceleration z body')
xlabel('Time [sec]')
ylabel('a[m/s^2]')
legend('Simple','real');

if holdflag
    hold on;
else
    hold off;
end

end