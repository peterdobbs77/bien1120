function [m,b,r2] = linregress(x,y)
% FUNCTION [M,B,R2] = LINREGRESS(X,Y)
%   This function takes in x y pairs and
%   calculates the linear regression.
%   Peter Dobbs 12/2/2015
%   .* ./ .^ for vectors
%   * / ^ for scalars
%

n = length(y);

m = (n*sum(x.*y) - sum(x)*sum(y))/(n*sum(x.*x) - sum(x)*sum(x));

b = (sum(y) - m*sum(x))/n;

xbar = mean(x);
ybar = mean(y);

r2 = (sum((x-xbar).*(y-ybar))^2)/(sum((x-xbar).^2)*sum((y-ybar).^2));

