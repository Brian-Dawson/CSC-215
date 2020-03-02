
//Mac    : g++ browser.cpp getWebPage_mac.cpp -o web
//Windows: g++ browser.cpp getWebPage_win.cpp -o web.exe -lws2_32

#include <iostream>
#include <string>

using namespace std;

int getWebPage (const string url, string& HTMLString);

int main() {

	int counter = 1;
	string html = "";
	string htmlhtml = "";
	int    result;
	string msn = "www.msn.com";
	int    result1;
	
	result = getWebPage ("www.msn.com", html);
	
	if (result == 0) {
		//cout << html;
	} else {
		cout << "Error " << result << " getting webpage for " 
		     << "www.msn.com"  << endl;
	}
	
	string z;
	string g;
	int x;
	int y;
	int a;
	int w;

	do
	{
		x = html.find("<a");
		w = html.find("href", x);
		a = html.find("\"",w);
		y = html.find("\"",a+1);
		z = html.substr((a+1) , ((y-1)-a));

		g = z;
		if((g.find("/en") != string::npos) && (g.find("http") == string::npos))
		{
			g = msn + g;
			cout << counter << " " << g << endl;
			counter++;


		}
		else if (g.find("#") != string::npos)
		{
			int b = g.length();
			g.erase(0, b);
			g = "";
		}
		
		else if((g.find("//") != string::npos) && (g.find("http") == string::npos))
		{
			int j = g.length();
			g.erase(0, j);
			g = "";
		}
		
		else
		{
			cout << counter << " " << g << endl;
			counter++;
		}

		
	result1 = getWebPage (g, htmlhtml);
	
	if (result1 == 0) {
		//cout << htmlhtml;
	}
	else 
	{	
		
		cout << "Error " << endl;
	}
	
		string z1;
		string g1;
		int x1;
		int y1;
		int a1;
		int w1;
		do
		{
		x1 = htmlhtml.find("<a");
		w1 = htmlhtml.find("href", x1);
		a1 = htmlhtml.find("\"",w1);
		y1 = htmlhtml.find("\"",a1+1);
		z1  = htmlhtml.substr((a1+1), ((y1-1)-a1));

		g1 = z1;
		if((g1.find("/en") != string::npos) && (g.find("http") == string::npos))
		{
			g1 = g + g1;
			cout << "	" << g1 << endl;
		}
		else if (g1.find("#") != string::npos)
		{
			int c = g1.length();
			g1.erase(0, c);
		}
		else if(g1.find("//") != string::npos)
		{
			int j1 = g1.length();
			g1.erase(0 ,j1);
		}
		else
		{
			cout << "	" << g1 << endl;
		}

		

		z1 = htmlhtml.erase(0, (a1+1));
		}
		while(htmlhtml.find("<a href") != string::npos);
	
	
	z = html.erase(0,(a+1));

	}
	while(html.find("<a href") != string::npos);
	
} // end of main()
