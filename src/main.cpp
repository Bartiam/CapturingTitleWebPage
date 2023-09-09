#include <iostream>
#include <cpr/cpr.h>

int main()
{
	cpr::Response r = cpr::Get(cpr::Url("http://httpbin.org/html"), 
		cpr::Header({{"Accept", "text/html"}}));
	int begin = r.text.find("<h1>") + 4;
	int end = r.text.find("</h1>");
	std::cout << r.text.substr(begin, end - begin) << std::endl;
	


	return 0;
}