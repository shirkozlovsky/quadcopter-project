function J=flight(state)
global PARAM
sim('asbQuadcopter')
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
OmegabadyX1= reshape([state1.Omega_body.Data(1,1,:)],[numel(state1.Omega_body.Data(1,1,:)),1]);
OmegabadyY1= reshape([state1.Omega_body.Data(2,1,:)],[numel(state1.Omega_body.Data(2,1,:)),1]);
OmegabadyZ1= reshape([state1.Omega_body.Data(3,1,:)],[numel(state1.Omega_body.Data(3,1,:)),1]);
OmegabadyX2= reshape([state.Omega_body.Data(1,1,:)],[numel(state.Omega_body.Data(1,1,:)),1]);
OmegabadyY2= reshape([state.Omega_body.Data(2,1,:)],[numel(state.Omega_body.Data(2,1,:)),1]);
OmegabadyZ2= reshape([state.Omega_body.Data(3,1,:)],[numel(state.Omega_body.Data(3,1,:)),1]);
i_start = find(state.V_body.Time>=0,1);
switch PARAM
    case 1
    J=sum(((AccelbodyZ1-AccelbodyZ2).^2));
    case 2
    J=sum((OmegabadyZ1-OmegabadyZ2).^2);
    case 3
     J1=sum(((AccelbodyZ1(1:1401)-AccelbodyZ2(1:1401)).^2));
     J2=sum((OmegabadyZ1(1:1001)-OmegabadyZ2(1:1001)).^2)+3*sum((OmegabadyZ1(1001:1401)-OmegabadyZ2(1001:1401)).^2);
     J=J1+J2;
    case 4
    J1=sum(((VbodyX1(i_start:end)-VbodyX2(i_start:end)).^2));
    J2=sum(((VbodyZ1(i_start:end)-VbodyZ2(i_start:end)).^2));
    J = J1+J2;
end
