function J=flight(state)

sim('asbQuadcopter')
AccelbodyX1 = reshape([state1.Accel_body.Data(1,1,:)],[numel(state1.Accel_body.Data(1,1,:)),1]);
AccelbodyY1 = reshape([state1.Accel_body.Data(2,1,:)],[numel(state1.Accel_body.Data(2,1,:)),1]);
AccelbodyZ1 = reshape([state1.Accel_body.Data(3,1,:)],[numel(state1.Accel_body.Data(3,1,:)),1]);
AccelbodyX2 = reshape([state.Accel_body.Data(1,1,:)],[numel(state.Accel_body.Data(1,1,:)),1]);
AccelbodyY2 = reshape([state.Accel_body.Data(2,1,:)],[numel(state.Accel_body.Data(2,1,:)),1]);
AccelbodyZ2 = reshape([state.Accel_body.Data(3,1,:)],[numel(state.Accel_body.Data(3,1,:)),1]);
OmegabadyX1= reshape([state1.Omega_body.Data(1,1,:)],[numel(state1.Omega_body.Data(1,1,:)),1]);
OmegabadyY1= reshape([state1.Omega_body.Data(2,1,:)],[numel(state1.Omega_body.Data(2,1,:)),1]);
OmegabadyZ1= reshape([state1.Omega_body.Data(3,1,:)],[numel(state1.Omega_body.Data(3,1,:)),1]);
OmegabadyX2= reshape([state.Omega_body.Data(1,1,:)],[numel(state.Omega_body.Data(1,1,:)),1]);
OmegabadyY2= reshape([state.Omega_body.Data(2,1,:)],[numel(state.Omega_body.Data(2,1,:)),1]);
OmegabadyZ2= reshape([state.Omega_body.Data(3,1,:)],[numel(state.Omega_body.Data(3,1,:)),1]);

J_accel=sum((AccelbodyX1-AccelbodyX2).^2+(AccelbodyY1-AccelbodyY2).^2+(AccelbodyZ1-AccelbodyZ2).^2);
J_angle=sum((OmegabadyX1-OmegabadyX2).^2+(OmegabadyY1-OmegabadyY2).^2+(OmegabadyZ1-OmegabadyZ2).^2);
J=J_accel+J_angle;