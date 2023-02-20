#include<iostream>
#include<fstream>
#include<bits/stdc++.h>
using namespace std;



void get_MM(std::string path,std::multimap<int,std::string,std::greater<int>> &rank){
     std::ifstream MM_myfile(path);
     std::string k,line;
     while (getline(MM_myfile, line))								
	{
		std::stringstream input(line);
		std::string out;
        int sum = 0;
        input >> out;
        k = out;
		while (input >> out) {
			sum++;
		}
        rank.insert({sum,k});
	}
}

int main(){
    std::multimap<int,std::string,std::greater<int>> rank;  
    std::string inverted_MM_path = "/home/zws/Desktop/experience/dataset/01_04/0_inverted_01.txt";
    get_MM(inverted_MM_path,rank);

    std::ofstream	os("/home/zws/Desktop/VHDEMM/test/RANK/rank.txt",std::ios::app);
    for(auto i : rank){
        os<<i.first<<" "<<i.second<<std::endl;
    }
    os.close();
    return 0;
}