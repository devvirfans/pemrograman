#include <iostream> 
#include <cstdlib>
using namespace std;	
struct node {
    int info;
    struct node *left; 
    struct node *right;
}*root;

class BST {
    public:
        void fun_1(int, node **, node **); 
        void fun_2(int);
        void fun_3(node *, node *); 
        void fun_4(node *, int); 
        void case_a(node *,node *); 
        void case_b(node *,node *); 
        void case_c(node *,node *); 
        BST()
        {
            root = NULL;
        }
};