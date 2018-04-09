/*
Author: Meraz Mamun
Course: CSCI-133H
Instructor: Mr.Zamansky
Assignment: lab_08

This file contains all the functions of my code.
*/

#include <iostream>
#include <string>
#include <cctype>

using std::cout;
using std::string;
//program deletes all spaces, not just leading space
string removeLeadingSpaces(string line){
	// took out original code and replaced it with a while loop
	int i = 0;
	while (isspace(line[i])){
		i++;
	}
		//string result;

		//for(int i=0; i<line.length(); ++i){

		//	if(!isspace(line[i])){

		//		result+=line[i];

				//USE SUBSTR TO GET RID OF LEADING SPACES

		//	}

		//}

		return line.substr(i,line.length()-1);
}

int countChar(string line, char c){
	//int j = 0;
	for (int j= 0; j < line.length(), j++){
		if (line[j]== c){
			line[j] += "\n \t";
		}
	}
}

