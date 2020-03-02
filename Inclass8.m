data = randi([-10,10], 50, 50);
nzdata = data < 0;
datacopy = data;
datacopy(nzdata) = 0;
final = sum(datacopy) ./ (size(data,1) - sum(nzdata))



    
