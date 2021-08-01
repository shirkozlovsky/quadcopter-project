global Yaw1StepTime Yaw1Value Yaw2StepTime Yaw2Value Pitch1StepTime Pitch1Value Pitch2StepTime Pitch2Value Z1StepTime Z1Value;
global Roll1StepTime Roll1Value Roll2StepTime Roll2Value Z2StepTime Z2Value;
%% manual input command 
Z1StepTime=0.5;
Z1Value=-1.5;
Z2StepTime=0;
Z2Value=0;

Roll1StepTime=1;
Roll1Value=0.1;
Pitch1StepTime =3;
Pitch1Value =0.1;
Yaw1StepTime =5;
Yaw1Value =0.1;

Roll2StepTime=Roll1StepTime+1;
Roll2Value=Roll1Value;
Pitch2StepTime =Pitch1StepTime+1;
Pitch2Value=Pitch1Value;
Yaw2StepTime =Yaw1StepTime+1;
Yaw2Value=Yaw1Value;