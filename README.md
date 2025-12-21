# Data Structures with C++

This is an educational data-structure library. I began writing it while learning data structures and modern C++ in parallel—an endeavour still in progress. The code therefore makes extensive use of recent C++ features such as `std::expected` and `std::function`, inevitably with some rough edges. Any clumsiness in design or style is owed to my limited experience; your indulgence is appreciated.

这是一个用于学习的数据结构库，由于我在学习数据结构的同时，也在同步学习 C++，因此代码中尝试了大量 C++ 新特性（如 `std::expected` `std::function` 等），受限于个人经验，实现与风格难免生疏，尚祈海涵。

```
Data Structures with C++
├── CMakeLists.txt
├── README.md
├── build\
├── tests\
│   ├── test_linarList.cpp
│   └── 
└── src\
    ├── error\
    │   ├── error.hpp
    │   └── error.cpp
    ├── linear_list\
    │   ├── circular_double_linked_list.cpp
    │   ├── circular_linked_list.cpp
    │   ├── double_linked_list.cpp
    │   ├── linked_list.cpp
    │   ├── sequential_list.cpp
    │   └── static_linked_list.cpp
    ├── queue\
    │   ├── circular_dequeue.cpp
    │   ├── circular_queue.cpp
    │   ├── list_dequeue.cpp
    │   └── list_queue.cpp
    ├── stack\
    │   ├── list_stack.cpp
    │   └── vector_stack.cpp
    ├── tree\
    │   ├── avl_tree.cpp
    │   ├── binary_search_tree.cpp
    │   ├── binary_tree.cpp
    │   └── red_black_tree.cpp
    ├── graph\
    │   └── adjacency_matrix_graph.cpp
    ├── set\
    │   └── union_find_set.cpp
    ├── hash\
    │   ├── hash_table.cpp
    │   └── hash_table.hpp
    ├── sorting_algorithms\
    │   └── sorting_algorithms.hpp
    └── string\(empty)
```

```bash
git clone https://github.com/xiaoze-xiaoze/Data-Structures-with-CPP.git
```