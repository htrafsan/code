clc
clear

F0 = 0;
F1 = 1;
sum = 0;
mat = [F0,F1];
for i=1:10
    
    sum = F0 +F1;
    F0 = F1;
    F1= sum;  
    mat = [mat sum];
end    
display(mat);
