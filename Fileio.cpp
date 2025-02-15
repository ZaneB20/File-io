#include <cstdio>
#include <cstring>
#include <iostream>


// I need to get the data from data.csv and read it out over here 
// then add up the first two intergers and then print the third string out the product of the two intergers
// use getline(ss,currentline,'single quotes with a comma in the quotes,'




int main(){
	std::string text;
	int number;
	
	infile.open("data.csv");
	while(getline(infile,currentLine)){
		converter.clean();
		converter.str(currentLine);

		getline(converter,sNum1,',');
		getline(converter,sNum2,',');
		getline(converter,text);

		converter.clear();
		coverter.str("");
		converter << sNum1 << " " << sNum2;

		int sum = num1 + num2



