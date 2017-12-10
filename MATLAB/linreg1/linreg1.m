% LINREG1.M
%   This program loads in ekg2.txt to MATLAB and plots it to the screen
%   Peter N Dobbs 12/7/2015

% housekeeping overhead
clear all
close all

% different kinds of load commands
%   1.  load ekg2.txt
%   2.  load('ekg2.txt');
%   3.  a = load('ekg2.txt');
%   4.  Low Level I/O

% example of low level I/O to open and read the file
fid = fopen('ekg2.txt','r');

if (fid == -1)
    disp('File not found!'); % disp is like printf
end

for i = 1:500
    a(:,i) = fscanf(fid,'%g',[2,1]);
end

fclose(fid);

% make it from 2x500 to 500x2
a = a';

t = a(:,1);
v = a(:,2);
plot(t,v);