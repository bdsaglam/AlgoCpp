//
//  mit_6006_recitations.hpp
//  AlgoCpp
//
//  Created by Barış Deniz Sağlam on 7.08.2020.
//  Copyright © 2020 BDS. All rights reserved.
//

#ifndef mit_6006_recitations_hpp
#define mit_6006_recitations_hpp

#include <stdio.h>
#include <vector>

namespace recitation1 {

using index_type = std::vector<int>::size_type;
index_type find_a_peak(const std::vector<int>& vec, index_type start, index_type end);

void test_peak_find_1D();

}

#endif /* mit_6006_recitations_hpp */
