

#ifndef CPP_ALGORITHM_LISTNODE_H
#define CPP_ALGORITHM_LISTNODE_H

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

//class ListNode {
//public:
//    // [1, 2, 2, 1] = >
//    //    struct ListNode node4 = {1, nullptr};
//    //    struct ListNode node3 = {2, &node4};
//    //    struct ListNode node2 = {2, &node3};
//    //    struct ListNode head  = {1, &node2};
//    void printNodes(vactor<int> nodes) {
//        for (int i = 0 ; i < nodes.size(); ++i) {
//            std::string name = i == 0 ? "head" : "node"+i+1;
//            std::printf("struct ListNode %s = {%d, &%s};\n", name, nodes[i], next);
//        }
//    }
//};


#endif //CPP_ALGORITHM_LISTNODE_H
