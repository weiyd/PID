close all 
clc
clear
load '../matlab.txt'
index=1:2000;
excepted=matlab(mod(index,2)==0);00
acutal=matlab(mod(index,2)==1);
plot(excepted)
hold on 
plot(acutal)
max(matlab(mod(index,2)==0))