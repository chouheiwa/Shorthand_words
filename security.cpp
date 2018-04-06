//
//  cli.cpp
//  cli
//
//  Created by 吴迪 on 2018/3/23.
//
#include <iostream>
#include <fstream>

#include<cstdlib>
#include<ctime>
#include <codecvt>
#include <vector>
#include "include/CharacterFile.hpp"
#include "include/security.hpp"

namespace security {
    std::string client::random_character(unsigned length,const std::string split_string,unsigned kind){
        srand((unsigned)time(NULL));
        vector<string> vec;
        characterList(vec,kind);
        std::string str;
        int size = vec.size();
        for (unsigned i = 0; i < length; i ++) {
            int ran = rand()%size;
            str += vec[ran];
            if (i != length - 1) {
                str += split_string;
            }
        }
        return str;
    }
    
}



