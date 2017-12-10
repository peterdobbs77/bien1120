% LINREG2.M
%   Peter N Dobbs 12/7/2015

clear all
close all

a = load('ekg2.txt');

t = a(:,1);
v = a(:,2);
plot(t,v);

[m,b,r2] = linregress(t,v);
