% CHALLENGE13B.M
%   This program loads in fakegrades.txt to matlab
%   
%   Peter Dobbs 12/2/15

% overhead
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

engGPA1 = fid(1:8,3);
engGPA2 = fid(9:16,3);
engGPA3 = fid(17:26,3);
engGPA4 = fid(27:33,3);
engGPA5 = fid(34:41,3);
engGPA6 = fid(42:50,3);
engGPA7 = fid(51:58,3);
engGPA8 = fid(59:64,3);

% find max engGPA
MAXeng(1,1) = fid(1,1);
MAXeng(1,2) = max(engGPA1);
MAXeng(2,1) = fid(9,1);
MAXeng(2,2) = max(engGPA2);
MAXeng(3,1) = fid(17,1);
MAXeng(3,2) = max(engGPA3);
MAXeng(4,1) = fid(27,1);
MAXeng(4,2) = max(engGPA4);
MAXeng(5,1) = fid(34,1);
MAXeng(5,2) = max(engGPA5);
MAXeng(6,1) = fid(42,1);
MAXeng(6,2) = max(engGPA6);
MAXeng(7,1) = fid(51,1);
MAXeng(7,2) = max(engGPA7);
MAXeng(8,1) = fid(59,1);
MAXeng(8,2) = max(engGPA8);

MAXeng = sortrows(MAXeng,-2); %sort by descending order of column 2

% find overall GPA
%cumGPA1 = fid(1:8,2:3);
cumGPA1 = mean(mean(fid(1:8,2:3),2));
cumGPA2 = mean(mean(fid(9:16,2:3),2));
cumGPA3 = mean(mean(fid(17:26,2:3),2));
cumGPA4 = mean(mean(fid(27:33,2:3),2));
cumGPA5 = mean(mean(fid(34:41,2:3),2));
cumGPA6 = mean(mean(fid(42:50,2:3),2));
cumGPA7 = mean(mean(fid(51:58,2:3),2));
cumGPA8 = mean(mean(fid(59:64,2:3),2));

% find max cumulative GPA
MAXcum(1,1) = fid(1,1);
MAXcum(1,2) = max(cumGPA1);
MAXcum(2,1) = fid(9,1);
MAXcum(2,2) = max(cumGPA2);
MAXcum(3,1) = fid(17,1);
MAXcum(3,2) = max(cumGPA3);
MAXcum(4,1) = fid(27,1);
MAXcum(4,2) = max(cumGPA4);
MAXcum(5,1) = fid(34,1);
MAXcum(5,2) = max(cumGPA5);
MAXcum(6,1) = fid(42,1);
MAXcum(6,2) = max(cumGPA6);
MAXcum(7,1) = fid(51,1);
MAXcum(7,2) = max(cumGPA7);
MAXcum(8,1) = fid(59,1);
MAXcum(8,2) = max(cumGPA8);

MAXcum = sortrows(MAXcum,-2);
MAXcum = round(MAXcum/.01)*.01; %round to the nearest hundredth

%print tables
format longG
T_eng = table(MAXeng(:,1),MAXeng(:,2),'VariableNames',{'ID' 'Max_engGPA'});
T_cum = table(MAXcum(:,1),MAXcum(:,2),'VariableNames',{'ID' 'Max_cumGPA'});
disp('type either T_eng or T_cum for the tables')
