% CHALLENGE13.M
%   Peter Dobbs 11/30/15
%   This program loads in fakegrades.txt to matlab
%   and scatters the contents to the screen.
clear
close all

% load file
fid = load('fakegrades.txt');

if (fid == -1)
    disp('No File Found');
end

% place values into matrices
idNum = fid(:,1);
libGPA = fid(:,2);
engGPA = fid(:,3);

p1 = fid(1:8,1);
p2 = fid(9:16,1);
p3 = fid(17:26,1);
p4 = fid(27:33,1);
p5 = fid(34:41,1);
p6 = fid(42:50,1);
p7 = fid(51:58,1);
p8 = fid(59:64,1);

libGPA1 = fid(1:8,2);
libGPA2 = fid(9:16,2);
libGPA3 = fid(17:26,2);
libGPA4 = fid(27:33,2);
libGPA5 = fid(34:41,2);
libGPA6 = fid(42:50,2);
libGPA7 = fid(51:58,2);
libGPA8 = fid(59:64,2);

engGPA1 = fid(1:8,3);
engGPA2 = fid(9:16,3);
engGPA3 = fid(17:26,3);
engGPA4 = fid(27:33,3);
engGPA5 = fid(34:41,3);
engGPA6 = fid(42:50,3);
engGPA7 = fid(51:58,3);
engGPA8 = fid(59:64,3);

%figure specs
hold on;
plot(1:length(p1),libGPA1,'db') %blue diamond
plot(1:length(p1),engGPA1,'db')

plot(1:length(p2),libGPA2,'py') %yellow pentagram
plot(1:length(p2),engGPA2,'py')

plot(1:length(p3),libGPA3,'hc') %cyan hexogram
plot(1:length(p3),engGPA3,'hc')

plot(1:length(p4),libGPA4,'+g') %green cross
plot(1:length(p4),engGPA4,'+g')

plot(1:length(p5),libGPA5,'ok') %black circle
plot(1:length(p5),engGPA5,'ok')

plot(1:length(p6),libGPA6,'^r') %red up-pointing triangle
plot(1:length(p6),engGPA6,'^r')

plot(1:length(p7),libGPA7,'xm') %magenta x
plot(1:length(p7),engGPA7,'xm')

plot(1:length(p8),libGPA8,'*w') %white asterix
plot(1:length(p8),engGPA8,'*w')
hold off;

set(gca,'Color',[.89 0.50 0.92]);
axis([0 11 0 4]);
title('Challenge13')
xlabel('semester number')
ylabel('GPA')
%end of figure specs