#include<iostream>
#include<fstream>
#include<bits/stdc++.h>
using namespace std;

std::vector<std::string> fullkw;

void get_w_array(std::string path, std::vector<std::string>& kw_set){
    std::ifstream key_myfile(path);
    std::string w;
    while (getline(key_myfile, w))								
	{
		std::stringstream input(w);
		std::string out;
		while (input >> out) {
			kw_set.push_back(out);
		}
	}
}

int main(){
    std::string kw_path = "/home/zws/Desktop/experience/dataset/50/key_2_14.txt";
    get_w_array(kw_path,fullkw);

    std::string result_path = "/home/zws/Desktop/experience/test/data_3/up_2_22.txt";
    std::ofstream	os(result_path,std::ios::app);


    for(int i=0;i<4194304;i++){
        int temp = rand() % fullkw.size();
        string str = to_string(i);
        string v="";
        while (v.size()<(7-str.size()))
        {
            v+="0";
        }
        v+=str;
        os<<fullkw[temp]<<" "<<v<<endl;
    }

   
    return 0;
}