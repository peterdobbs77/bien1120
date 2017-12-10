% SCRIPT2.M
%   Peter N Dobbs 12/7/2015

clear all
close all

load ekg1.txt

t = ekg1(:,1);
v = ekg1(:,2);

plot(t,v);