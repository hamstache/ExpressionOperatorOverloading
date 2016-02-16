#ifndef __Lab__14__Ternary_node__
#define __Lab__14__Ternary_node__

#include "Expr_node.h"
#include "Expr.h"

#include <iostream>
#include <string>
using namespace std;

class Ternary_node :public Expr_node {
private:
	Ternary_node(string const& op, Expr lhs, Expr mid, Expr rhs);
    
	int eval() const;
	void print(ostream& os) const;
    
private:
	friend class Expr;
    
private:
	string _op;
	Expr _left, _middle, _right;
};
#endif /* defined(__Lab__14__Ternary_node__) */