% CHALLENGE11.M
%   Peter Dobbs 11/30/2015
%   Challenge is to rotate the points of a square and
%   replot the rotated square.

clear
close all

p = [1 1; 2 1; 2 2; 1 2; 1 1];

R = [cos(pi/4) -sin(pi/4); sin(pi/4) cos(pi/4)];

n = 8;
%color pallete
colorlist = jet(n);

for i=1:n
    p = p*R;
    x = p(:,1);
    y = p(:,2);
    plot(x,y,'col',colorlist(i,:)); hold on;
    axis([-3 3 -3 3])
end
hold off;