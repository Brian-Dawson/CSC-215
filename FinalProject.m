url = "https://www.ncdc.noaa.gov/orders/qclcd/%s";

%Downloads the weather files and then deletes the unwanted ones

for x = 2016:2017
   for y = 1:12
      dayfiles = "%d$02ddaily.txt";
      if (exist (sprintf(dayfiles,x,y), 'file')) == 0
          fileformat = "QCLCD%d%02d.zip";
          filename = sprintf(fileformat,x,y);
          
          websave (filename, sprintf(url, filename));
          unzip(filename);
          delete *hourly.txt;
          delete *monthly.txt;
          delete *precip.txt;
          delete *remarks.txt;
          delete *station.txt;
          delete *.zip;
      end
   end
end


%Get all of the data for 2016 weather


Tavg201601 = DailyText("201601daily.txt", 31);
Tavg201602 = DailyText("201602daily.txt", 29);
Tavg201603 = DailyText("201603daily.txt", 31);
Tavg201604 = DailyText("201604daily.txt", 30);
Tavg201605 = DailyText("201605daily.txt", 31);
Tavg201606 = DailyText("201606daily.txt", 30);
Tavg201607 = DailyText("201607daily.txt", 31);
Tavg201608 = DailyText("201608daily.txt", 31);
Tavg201609 = DailyText("201609daily.txt", 30);
Tavg201610 = DailyText("201610daily.txt", 31);
Tavg201611 = DailyText("201611daily.txt", 30);
Tavg201612 = DailyText("201612daily.txt", 31);


%Get all of the data for 2017 weather
Tavg201701 = DailyText("201701daily.txt", 31);
Tavg201702 = DailyText("201702daily.txt", 28);
Tavg201703 = DailyText("201703daily.txt", 31);
Tavg201704 = DailyText("201704daily.txt", 30);
Tavg201705 = DailyText("201705daily.txt", 31);
Tavg201706 = DailyText("201706daily.txt", 30);
Tavg201707 = DailyText("201707daily.txt", 31);
Tavg201708 = DailyText("201708daily.txt", 31);
Tavg201709 = DailyText("201709daily.txt", 30);
Tavg201710 = DailyText("201710daily.txt", 31);
Tavg201711 = DailyText("201711daily.txt", 30);
Tavg201712 = DailyText("201712daily.txt", 31);

%Plot the weather data with legend
%Combine all the arrays
Total = vertcat(Tavg201601, Tavg201602, Tavg201603, Tavg201604, Tavg201605, Tavg201606, Tavg201607, Tavg201608, Tavg201609, Tavg201610, Tavg201611, Tavg201612, Tavg201701, Tavg201702, Tavg201703, Tavg201704, Tavg201705, Tavg201706, Tavg201707, Tavg201708, Tavg201709, Tavg201710, Tavg201711, Tavg201712);
figure
plot(Total)
xlim([0 750])
ylim([-1 100])
title('Weather Data')
xlabel('Days')
ylabel('Temperature')
legend('George Bush Airport','Central Park, New York City','Denver International Airport','Key West International Airport','San Juan','San Francisco International Airport')




%Gets the average weather data from a file
function Tavg = DailyText(fileName, numDays)
strData = "?";
x = 1;
Tavg = cell(31,6);

%Gets all of the data from the different weather stations
fid = fopen(fileName);
while ~strncmp(strData, "12960", 5)
    strData = fgets(fid);
end

numExtras = 31 - (numDays+1);

while x < (numDays + 1)
    cellData = textscan(strData, '%s', 'Delimiter', ',');
    if (cellData{1}{7} == 'M')
        Tavg{x,1} = '-1';
    end
    if (cellData{1}{7} ~= 'M')
        Tavg{x,1} = cellData{1}{7};
    end
    strData = fgets(fid);
    x = x + 1;
end

while numExtras > -1
    Tavg{(31-numExtras),1} = '-1';
    numExtras = numExtras - 1;
end

fclose(fid);


strData = "?";
x = 1;
numExtras = 31 - (numDays+1);

fid = fopen(fileName);
while ~strncmp(strData, "94728", 5)
    strData = fgets(fid);
end

while x < (numDays + 1)
    cellData = textscan(strData, '%s', 'Delimiter', ',');
    if (cellData{1}{7} == 'M')
        Tavg{x,2} = '-1';
    end
    if (cellData{1}{7} ~= 'M')
        Tavg{x,2} = cellData{1}{7};
    end
    strData = fgets(fid);
    x = x + 1;
end

while numExtras > -1
    Tavg{(31-numExtras),2} = '-1';
    numExtras = numExtras - 1;
end

fclose(fid);


strData = "?";
x = 1;
numExtras = 31 - (numDays+1);

fid = fopen(fileName);
while ~strncmp(strData, "03017", 5)
    strData = fgets(fid);
end

while x < (numDays + 1)
    cellData = textscan(strData, '%s', 'Delimiter', ',');
    if (cellData{1}{7} == 'M')
        Tavg{x,3} = '-1';
    end
    if (cellData{1}{7} ~= 'M')
        Tavg{x,3} = cellData{1}{7};
    end
    strData = fgets(fid);
    x = x + 1;
end

while numExtras > -1
    Tavg{(31-numExtras),3} = '-1';
    numExtras = numExtras - 1;
end

fclose(fid);


strData = "?";
x = 1;
numExtras = 31 - (numDays+1);

fid = fopen(fileName);
while ~strncmp(strData, "12836", 5)
    strData = fgets(fid);
end

while x < (numDays + 1)
    cellData = textscan(strData, '%s', 'Delimiter', ',');
    if (cellData{1}{7} == 'M')
        Tavg{x,4} = '-1';
    end
    if (cellData{1}{7} ~= 'M')
        Tavg{x,4} = cellData{1}{7};
    end
    strData = fgets(fid);
    x = x + 1;
end

while numExtras > -1
    Tavg{(31-numExtras),4} = '-1';
    numExtras = numExtras - 1;
end

fclose(fid);


strData = "?";
x = 1;
numExtras = 31 - (numDays+1);

fid = fopen(fileName);
while ~strncmp(strData, "11641", 5)
    strData = fgets(fid);
end

while x < (numDays + 1)
    cellData = textscan(strData, '%s', 'Delimiter', ',');
    if (cellData{1}{7} == 'M')
        Tavg{x,5} = '-1';
    end
    if (cellData{1}{7} ~= 'M')
        Tavg{x,5} = cellData{1}{7};
    end
    strData = fgets(fid);
    x = x + 1;
end

while numExtras > -1
    Tavg{(31-numExtras),5} = '-1';
    numExtras = numExtras - 1;
end

fclose(fid);

strData = "?";
x = 1;
numExtras = 31 - (numDays+1);

fid = fopen(fileName);
while ~strncmp(strData, "23234", 5)
    strData = fgets(fid);
end

while x < (numDays + 1)
    cellData = textscan(strData, '%s', 'Delimiter', ',');
    if (cellData{1}{7} == 'M')
        Tavg{x,6} = '-1';
    end
    if (cellData{1}{7} ~= 'M')
        Tavg{x,6} = cellData{1}{7};
    end
    strData = fgets(fid);
    x = x + 1;
end

while numExtras > -1
    Tavg{(31-numExtras),6} = '-1';
    numExtras = numExtras - 1;
end

fclose(fid);



%Converts the average temp data to numbers so it can be plotted

Tavg = cellfun(@str2num,Tavg);

end