function [CT fval] = FindTrim2(V,omega,alpha,K1,K2)
miu = (V*cos(alpha))/(omega*0.06);
[CT fval] = fsolve(@(CT) miu*tan(alpha)+CT/(2*sqrt(miu^2+((K1- CT )/K2)^2)) - ((K1- CT )/K2),0.2);

end

