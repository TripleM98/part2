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

string removeLeadingSpaces(string line){

		string result;

		for(int i=0; i<line.length(); ++i){

			if(!isspace(line[i])){

				result+=line[i];

				//USE SUBSTR TO GET RID OF LEADING SPACES

			}

		}

		return result;
}


