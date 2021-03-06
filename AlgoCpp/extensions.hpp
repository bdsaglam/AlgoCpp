//
//  extensions.hpp
//  LearnCPP
//
//  Created by Barış Deniz Sağlam on 5.08.2020.
//  Copyright © 2020 BDS. All rights reserved.
//

#ifndef extensions_hpp
#define extensions_hpp

#include <stdio.h>
#include <iostream>
#include <string>
#include <type_traits>

#include "utils.hpp"

template <typename T>
std::ostream& operator<<(std::ostream& strm, const std::vector<T>& vec) {
    utils::print(strm, vec.begin(), vec.end(), "<", ", ", ">");
    return strm;
}

template <std::size_t S, typename T, std::is_same<T, char> = 0, std::is_same<T, std::string> = 0>
std::ostream& operator<<(std::ostream& strm, T (&arr)[S]) {
    utils::print(strm, std::begin(arr), std::end(arr), "[", ", ", "]");
    return strm;
}

#endif /* extensions_hpp */
