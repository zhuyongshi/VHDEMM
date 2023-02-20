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
    std::string kw_path = "/home/zws/Desktop/experience/test/key.txt";
    get_w_array(kw_path,fullkw);

    // std::string new_kwset_path = "/home/zws/Desktop/experience/dataset/50/key_2_14.txt";
    // get_w_array(new_kwset_path,fullkw);
    cout<<fullkw.size();
    // std::ofstream	os(new_kwset_path,std::ios::app);
    // int j = 0;
    // for(auto i : fullkw){
    //     os<<i<<" ";
    //     j++;
    //     cout<<j<<endl;
    //     if(j>=4096) break;
    // }
    // os.close();
    
    return 0;
}