function [ForcesAndMoments,ConvergenceFactor,Vinduced] = gen_SingleRotorModelTrim(InRef)
% persistent Vinduced
iter=0;
% if isempty(Vinduced)
Vinduced = 0;
% end
In = InRef;
In.Vinduced = Vinduced;
Out = gen_SingleRotorModel(In);
OmegaUp = In.OmegaUp;
% OmegaAv = (abs(OmegaUp) + abs(OmegaDn))/2;
R = In.R;
da = 0.01; % [m/sec]
% VinducedUp = Vinduced;
% VinducedDn = Vinduced;
f1 = Out.F;
ErrorF1 = (f1*f1);
while(ErrorF1 > 1e-20) && (iter < 50)
%% VinducedUp+da
InUpper = In;
InUpper.Vinduced = In.Vinduced+da;
OutUpper = gen_SingleRotorModel(InUpper);
%% VinducedUp-da
InLower = In;
InLower.Vinduced = In.Vinduced-da;
OutLower = gen_SingleRotorModel(InLower);
dFdVi = (OutUpper.F - OutLower.F)/(2*da);
X = In.Vinduced;
InvdFdVi = 1/(dFdVi);
X1 = X - InvdFdVi*f1;
In.Vinduced = X1;
Out = gen_SingleRotorModel(In);
f1 = Out.F;
ErrorF1 = (f1*f1);
iter = iter+1;
end
Vinduced = In.Vinduced;
rho = InRef.rho;
Omega2 = InRef.Omega^2;
R = InRef.R;
FaM.FZ = pi*rho*Omega2*(R^4)*Out.Coef.CT;
FaM.FX = pi*rho*Omega2*(R^4)*Out.Coef.CX;
FaM.FY = pi*rho*Omega2*(R^4)*Out.Coef.CY;
FaM.MX = pi*rho*Omega2*(R^5)*Out.Coef.CMX;
FaM.MY = pi*rho*Omega2*(R^5)*Out.Coef.CMY;
FaM.MZ = pi*rho*Omega2*(R^5)*Out.Coef.CMZ;
ForcesAndMoments = FaM;
%DrivingTorque = [pi*In.rho*OmegaUp*(R^5)*Out.OutUp.Coef.CMZ;pi*In.rho*OmegaDn*(R^5)*Out.OutDn.Coef.CMZ];
ConvergenceFactor = ErrorF1;