#ifndef CPP_LEARN_LIB_MAP_H
#define CPP_LEARN_LIB_MAP_H


#include <iostream>
#include <unordered_map>
#include <sstream>


template <typename k, typename v>
void display_map(std::unordered_map<k, v> map) {
    std::cout << "{";
    for (auto it = map.begin(); it != map.end(); ++it) {
        std::cout << (it != map.end() && it != map.begin() ? ", " : "");
        std::cout << "{" << it->first << ", " << it->second << "}";

    }
    std::cout << "}" << std::endl;
}


//template <typename k, typename v>
//void display_map2(std::unordered_map<k, v> map) {
//    std::stringstream oss;
//    oss << "{";
//    for (auto it = map.begin(); it != map.end(); ++it) {
//        oss << (it != map.end() && it != map.begin() ? ", " : "");
//        oss << "{";
//        oss << it->first;
//        oss << ", ";
//        oss << it->second;
//        oss << "}";
//
//    }
//    oss << "}";
//    std::cout << oss.str() << std::endl;
//}

#endif //CPP_LEARN_LIB_MAP_H
