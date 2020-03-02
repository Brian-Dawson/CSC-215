a = [0 72;1 73; 2 74; 3 76;4 78; 5 80; 6 83;];
time  = a(:,1);
TempF = a(:,2);
TempC = (5/9)*(TempF - 32);
figure
plot(time,TempC)
title('Temperature in Celsius')
xlabel('Time')
ylabel('Temperature')
