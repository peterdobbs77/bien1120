% CHALLENGE12.M
%   Peter Dobbs 11/30/2015
%   Specs:
%       This script inputs the file 'star.txt',
%           'star.txt' contains 6 X,Y pairs that draw a star
%       plot the points and rotate them 45 degrees (pi/4) and 
%       plot them again. Continue until you have got full circle
%       Extra: make each star a different color or play with
%           colors to make a pattern.
close all
clear

fid = load('star.txt');

R = [cos(pi/4) -sin(pi/4); sin(pi/4) cos(pi/4)];

n = 8;
%color pallete
colorlist = hsv(n);

for i=1:n
    x = fid(:,1);
    y = fid(:,2);
    fid = fid*R;
    plot(x,y,'col',colorlist(i,:)); hold on;
    axis([-4 4 -4 4])
end
hold off;