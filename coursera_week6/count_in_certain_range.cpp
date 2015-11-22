//
//  count_in_certain_range.cpp
//  coursera_week6
//
//  Created by 安田洋介 on 11/21/15.
//  Copyright © 2015 安田洋介. All rights reserved.
//

#include "count_in_certain_range.h"

using namespace std;

bool check_sum(vector<long> sorted_vec, long sum){
    vector<long>::iterator lower = sorted_vec.begin();
    vector<long>::iterator higher = sorted_vec.end()-1;
    while(lower<higher){
        if (sum == *lower + *higher)return true;
        else if(sum>*lower + *higher) higher--;
        else lower++;
    }
    return false;
}

bool comare(long i, long j){
    return i>j;
}

int count_in_certain_range(vector<long> vec, int min, int max){
    sort(vec.begin(), vec.end(), comare);
    int count = 0;
    for(int i=min; i<=max; i++){
        if(check_sum(vec, i)){
            count++;
        }
    }
    return count;
}

vector<long> exec_check_sum(string file_name){
    ifstream inFile(file_name);
    vector<long> data;
    long number;
    while(inFile >> number){
        data.push_back(number);
    }
    cout<<count_in_certain_range(data, -10000, 10000) << endl;
    return data;
}