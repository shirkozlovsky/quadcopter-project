function [Output] =  LowPassFilterFun(time,data)
% Filter type
filtertype = 'FIR';
% Sampling Frequency
Fs = 1/200;
% Filter Order
N = 3;
% Passband frequency
Fpass = 1/10000;
% Stopband frequency
Fstop = 1/(1000);
% Ripple Factor and Attenuation in stop band
Rp = 0.5;
Astop = 50;
% Design the filter using dsp.LowpassFilter
LPF = dsp.LowpassFilter('SampleRate',Fs,...
                        'FilterType',filtertype,...
                        'PassbandFrequency',Fpass,...
                        'StopbandFrequency',Fstop,...
                        'PassbandRipple',Rp,...
                        'StopbandAttenuation',Astop);
                    
                   
% Only use plot in MATLAB Visualizations
Output = step(LPF, data);
% plot(time,data,time,Output);
% title('filtered data')
% ylabel('acce Z [m/s^2]');
% xlabel('Time[sec]')
% legend('measured Data', 'Filtered Data');
end