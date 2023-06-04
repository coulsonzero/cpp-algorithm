#include <vector>
#include <numeric>
using namespace std;

#ifndef ARRAYS_H
#define ARRAYS_H

template <typename T>
class arrays {
    public:
        void print_array(vector<T>& vec);
        int sum_array(vector<int>& vec);
        int find_array(vector<T>& vec, T element);
        void sort(vector<T>& vec);
        void reverse(vector<T>& vec);
};


#endif //ARRAYS_H
