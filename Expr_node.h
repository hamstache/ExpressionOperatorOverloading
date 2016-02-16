#ifndef __Lab__14__Expr_node__
#define __Lab__14__Expr_node__

#include <iostream>

class Expr_node {
public:
    virtual void print(std::ostream& os) const = 0;
    
protected:
    Expr_node();
    virtual ~Expr_node();
    
    virtual int eval() const = 0;
    
private:
    friend std::ostream& operator<<(std::ostream& os, const Expr_node& node);
    friend class Expr;
    
private:
    int _use;
};
#endif /* defined(__Lab__14__Expr_node__) */
