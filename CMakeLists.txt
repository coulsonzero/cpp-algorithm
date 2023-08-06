cmake_minimum_required(VERSION 3.19)
project(cpp_algorithm)
set(CMAKE_CXX_STANDARD 20)

# header path
include_directories("${PROJECT_SOURCE_DIR}/leetcode/headers")

# source path
#aux_source_directory(${PROJECT_SOURCE_DIR}/leetcode)

# source directory，源文件目录
#AUX_SOURCE_DIRECTORY(src DIR_SRCS)
# add link library，添加可执行文件所需要的库，比如我们用到了libm.so（命名规则：lib+name+.so），就添加该库的名称
#TARGET_LINK_LIBRARIES(${PROJECT_NAME} m)

add_executable(${PROJECT_NAME} main.cpp)


add_executable(leetcode_2-array_6932.maximum-elegance-klength-subsequence leetcode/2-array/6932.maximum-elegance-klength-subsequence.cpp)