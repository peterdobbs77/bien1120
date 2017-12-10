function b = quizfun(mat_in,n)
% FUNCTION B = QUIZFUN(MAT_IN,N)
%   Peter Dobbs 12/9/2015
%   

b = mat_in(n,:);
if n==2
    b = b - 4;
end
if n==3
    b = b - 8;
end
