#pragma once
#ifndef CPP_VECTOR_H
#define CPP_VECTOR_H


#include <iostream>
#include <vector>
#include <iomanip>    // std::setw
#include <numeric>    // accumulate()

// simplify the name of template or params
#ifdef T
    #undef T
#else
    #define __Tmp__ template <class T>
    #define __vec std::vector<T>
    #define __t T
#endif



namespace co {
    class vec {
    private:
        ~vec();
        vec operator=(const vec& c);
    public:
        __Tmp__
        static void iter(__vec &vec);
        __Tmp__
        static void output(__vec &vec);     // size, value
        __Tmp__
        static void sort(__vec &vec, bool reverse = false);
        __Tmp__
        static void reverse(__vec &vec);
        __Tmp__
        static bool contains(__vec &vec, __t e);
        __Tmp__
        static int count(__vec &vec, __t e);
        __Tmp__
        static __t max(__vec &vec);
        __Tmp__
        static __t min(__vec &vec);
        __Tmp__
        static int sum(__vec &vec);
        __Tmp__
        static int upper_index(__vec &vec, __t e);
        __Tmp__
        static __t upper_value(__vec &vec, __t e);
        __Tmp__
        static std::pair<int, __t> binary_upper(__vec &vec, __t e);

    protected:
        // friend std::string type_name(__t t);
    };
}




__Tmp__
void co::vec::iter(__vec &vec) {
    std::cout << "[ ";
    for (auto it = vec.begin(); it != vec.end(); ++it) {
         std::cout << *it << (it == vec.end() - 1 ? " " : ", ");
    }
    std::cout << "]" << std::endl;
}


__Tmp__
void co::vec::output(__vec &vec) {
    std::cout << std::boolalpha;
    std::cout << "size: ";
    std::cout << std::setw(6) << std::left << vec.size();
    std::cout << "cap: ";
    std::cout << std::setw(6) << std::left << vec.capacity();
    std::cout << "value: ";
    std::cout << std::right;
    co::vec::iter(vec);
}

__Tmp__
void co::vec::sort(__vec &vec, bool reverse) {
    if (reverse) {
        //    auto cmp = [&](T x, T y) -> bool {
        //        return x > y;
        //    };
        //    std::sort(vec.begin(), vec.end(), cmp);
        //    std::sort(vec.begin(), vec.end(), [&](T x, T y) -> bool {return x > y;});
        std::sort(vec.begin(), vec.end(), std::greater<T>());
    }
    else std::sort(vec.begin(), vec.end());
}

__Tmp__
void co::vec::reverse(__vec &vec) {
    std::reverse(vec.begin(), vec.end());
}


__Tmp__
int co::vec::count(__vec &vec, __t e) {
    return std::count(vec.begin(), vec.end(), e);
}

__Tmp__
bool co::vec::contains(__vec &vec, __t e) {
    return std::find(vec.begin(), vec.end(), e) != vec.end();
}

__Tmp__
__t co::vec::max(__vec &vec) {
    return *std::max_element(std::begin(vec), std::end(vec));
}

__Tmp__
__t co::vec::min(__vec &vec) {
    return *std::min_element(std::begin(vec), std::end(vec));
}

__Tmp__
int co::vec::upper_index(__vec &vec, __t e) {
    int index = std::upper_bound(vec.begin(), vec.end(), e) - vec.begin();
    // not found!
    if (index == vec.size()) {
        index = -1;
        std::cout << "Error: index out the bound!  index: ";
    }
    // has found it
    return index;
}

__Tmp__
__t co::vec::upper_value(__vec &vec, __t e) {
    auto value = *std::upper_bound(vec.begin(), vec.end(), e);
    // notice: maybe contains default value! use contains.
    __t *default_value = nullptr;
    default_value = new __t();
    auto contains = [&](__vec &vec, __t &e) -> bool {
        return std::find(vec.begin(), vec.end(), e) != vec.end();
    };
    if (value == *default_value && !contains(vec, *default_value)) {
        value = -1;
        std::cout << "Error: index out the bound!  value: ";
    }
    delete default_value;
    default_value = nullptr;

    return value;

}


__Tmp__
// or return `auto`
// @returns the index and the value of the first element of the vector \
// that is greater than the target value.
std::pair<int, __t> co::vec::binary_upper(__vec &vec, __t e) {
    auto it = std::upper_bound(vec.begin(), vec.end(), e);
    // index
    int index = it - vec.begin();
    if (index == vec.size()) return std::tuple(-1, -1);
    // value
    auto value = *it;
    return std::tuple(index, value);
}

__Tmp__
int co::vec::sum(__vec &vec) {
    return accumulate(vec.begin(), vec.end(), 0);
}


#endif //CPP_VECTOR_H
