% CHALLENGE14.M
%   Peter N Dobbs
%   12/7/2015
clear
close all

a = load('regdata.txt');

for i = 2:6
    [m,b,r2] = linregress(a(:,1),a(:,i));
    scatter(i,m,'r'); hold on;
    scatter(i,b,'b'); hold on;
    scatter(i,r2,'k'); hold on;
end