%length( A(1,:) ); % length of column
%length(A(:,1)); % length of row
clc
sum = 0;
mat = [];
A=[24 44 36 36;
52 57 68 76;
66 53 69 73;
85 40 86 72;
15 47 25 28;
79 72 82 91];
for j=1:length(A(:,1))
    for i=1:length( A(j,:))
        sum = sum + A(j,i);
    end
    mat = [mat sum];
end
display(mat)    
