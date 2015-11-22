//
//  median_search.cpp
//  coursera_week6
//
//  Created by 安田洋介 on 11/21/15.
//  Copyright © 2015 安田洋介. All rights reserved.
//

#include "median_search.h"

using namespace std;

vector<int> insert_vec(vector<int> sorted_vec, int value){
    vector<int>::iterator lower_b = lower_bound(sorted_vec.begin(), sorted_vec.end(), value);
    sorted_vec.insert(lower_b, value);
    return sorted_vec;
}

int exec_median_search(string file_name){
    ifstream inFile(file_name);
    int number;
    int median_sum = 0;
    
    vector<int> vec;
    while (inFile >> number){
        vec = insert_vec(vec, number);
        int median = vec[(vec.size()-1)/2];
        median_sum += median;
        cout << median_sum << ",";
    }
    return median_sum;
}