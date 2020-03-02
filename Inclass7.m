data=xlsread('Stats.xlsx');
A=data(:,16);
c1=[1:15];
d1=[1:15];
a = A(1:15);
b = A(18:32);
c = sort(a)
d = sort(b)
figure
plot(c1,c,'--r',d1,d,'--g')
xlim([1,15])
legend('1908 Data','2016 Data')