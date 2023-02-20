#include<iostream>
#include<fstream>
#include<bits/stdc++.h>
using namespace std;

int pair_number = 0;

void get_MM(std::string path,std::unordered_map<std::string,std::vector<std::string>>& MM){
     std::ifstream MM_myfile(path);
     std::string w,line;
     while (getline(MM_myfile, line))								
	{
		std::stringstream input(line);
		std::string out;
        std::vector<std::string> ids;
        input >> out;
        w = out;
		while (input >> out) {
			ids.push_back(out);
            pair_number++;
		}
        MM[w] = ids;
	}
}

int main(){
    std::unordered_map<std::string,std::vector<std::string>> order_MM;
    std::string order_MM_path = "/home/zws/Desktop/experience/test/inverted.txt";
    get_MM(order_MM_path,order_MM);
    std::cout<<"pair number="<<pair_number<<std::endl;
    return 0;
}