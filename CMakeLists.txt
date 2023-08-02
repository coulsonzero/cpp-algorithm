cmake_minimum_required(VERSION 3.19)
project(cpp_algorithm)

# head file path，头文件目录
#INCLUDE_DIRECTORIES(include)
# source directory，源文件目录
#AUX_SOURCE_DIRECTORY(src DIR_SRCS)
# add link library，添加可执行文件所需要的库，比如我们用到了libm.so（命名规则：lib+name+.so），就添加该库的名称
#TARGET_LINK_LIBRARIES(${PROJECT_NAME} m)

set(CMAKE_CXX_STANDARD 20)

add_executable(${PROJECT_NAME} main.cpp leetcode/listnode.h)

add_executable(leetcode_0234.palindrome-linkedlist leetcode/0234.palindrome-linkedlist.cpp)