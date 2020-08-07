//
//  mit_6006_recitations.cpp
//  AlgoCpp
//
//  Created by Barış Deniz Sağlam on 7.08.2020.
//  Copyright © 2020 BDS. All rights reserved.
//

#include "mit_6006_recitations.hpp"
#include <exception>
#include <iostream>
#include "assert.h"
#include "extensions.hpp"

using namespace std;

namespace recitation1 {

index_type find_a_peak(const vector<int>& vec, index_type start = 0, index_type end = -1) {
    if (vec.size()==0) return -1;
    
    if (end==-1) end = vec.size();
    
    if (start < 0 || end < start)
        throw invalid_argument("start and end cannot be negative");
    
    if (start == end - 1) return start;
    
    index_type mid = (start + end) / 2;
    
    if (vec[mid] < vec[mid - 1] )
        return find_a_peak(vec, start, mid);
    
    if (mid < end - 1 && vec[mid] < vec[mid + 1] )
        return find_a_peak(vec, mid + 1, end);
    
    return mid;
}

bool is_peak(const vector<int>& vec, index_type index) {
    if (vec.size() == 1) return true;
    return (index == 0 || vec[index] >= vec[index - 1])
    && (index == vec.size() - 1 || vec[index] >= vec[index + 1]);
}

void test_peak_find_1D() {
    {
        vector<int> vec {};
        auto peak_index = find_a_peak(vec);
        assert(peak_index == -1);
    }
    {
        vector<int> vec {1};
        auto peak_index = find_a_peak(vec);
        assert(is_peak(vec, peak_index));
        cout << "Vector: " << vec << endl;
        cout << "Peak " << vec[peak_index] << " @ index " << peak_index << endl << endl;
    }
    {
        vector<int> vec {1,1,1,1};
        auto peak_index = find_a_peak(vec);
        assert(is_peak(vec, peak_index));
        cout << "Vector: " << vec << endl;
        cout << "Peak " << vec[peak_index] << " @ index " << peak_index << endl << endl;
    }
    {
        vector<int> vec {1,2};
        auto peak_index = find_a_peak(vec);
        assert(is_peak(vec, peak_index));
        cout << "Vector: " << vec << endl;
        cout << "Peak " << vec[peak_index] << " @ index " << peak_index << endl << endl;
    }
    {
        vector<int> vec {4,2,1,3,5,0};
        auto peak_index = find_a_peak(vec);
        assert(is_peak(vec, peak_index));
        cout << "Vector: " << vec << endl;
        cout << "Peak " << vec[peak_index] << " @ index " << peak_index << endl << endl;
    }
    {
        vector<int> vec {1,2,3,4,5};
        auto peak_index = find_a_peak(vec);
        assert(is_peak(vec, peak_index));
        cout << "Vector: " << vec << endl;
        cout << "Peak " << vec[peak_index] << " @ index " << peak_index << endl << endl;
    }
    {
        vector<int> vec {5,4,3,2,1};
        auto peak_index = find_a_peak(vec);
        assert(is_peak(vec, peak_index));
        cout << "Vector: " << vec << endl;
        cout << "Peak " << vec[peak_index] << " @ index " << peak_index << endl << endl;
    }
    
    
}

}
