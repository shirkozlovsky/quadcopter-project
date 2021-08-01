function J=real_flight(RealData)
global PARAM;
sim('asbQuadcopter')
i_start = find(RealData.rt_cmd.time>0.1,1);
i_end = find(RealData.rt_cmd.time>2,1); 
AccelbodyZ_real= RealData.rt_sensor.signals.values(:,3);
OmegabadyZ_real= LowPassFilterFun(RealData.rt_cmd.time,RealData.rt_sensor.signals.values(:,3));
AccelbodyZ_sim = reshape([state1.Accel_body.Data(3,1,:)],[numel(state1.Accel_body.Data(3,1,:)),1]);
OmegabadyZ_sim= reshape([state1.Omega_body.Data(3,1,:)],[numel(state1.Omega_body.Data(3,1,:)),1]);
AccelbodyZ_real = AccelbodyZ_real(i_start:end);
AccelbodyZ_sim = AccelbodyZ_sim(i_start:end);
VbodyZ_sim = reshape([state1.V_body.Data(3,1,:)],[numel(state1.V_body.Data(3,1,:)),1]);
VbodyZ_real= RealData.rt_estim.signals.values(:,9);
VbodyZ_sim = VbodyZ_sim(i_start:i_end);
VbodyZ_real = VbodyZ_real(i_start:i_end);

switch PARAM
    case 1
    J=sum(((AccelbodyZ_sim(1:length(AccelbodyZ_real))-AccelbodyZ_real).^2));
    case 2
    J=sum((OmegabadyZ_sim(1:length(AccelbodyZ_real))-OmegabadyZ_real).^2);
    case 3
     J1=sum(((AccelbodyZ_sim(1:600)-AccelbodyZ_real(1:600)).^2));
     J3=sum((OmegabadyZ_sim(1:401)-OmegabadyZ_real(1:401)).^2)+3*sum((OmegabadyZ_sim(401:600)-OmegabadyZ_real(401:600)).^2);
     J=J1+J3;
    case 4
%      J=sum(((AccelbodyZ_sim(1:length(AccelbodyZ_real))-AccelbodyZ_real).^2));
     J=sum(((VbodyZ_sim(1:length(VbodyZ_real))-VbodyZ_real).^2));

end
