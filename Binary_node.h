#ifndef __Lab__14__Binary_node__
#define __Lab__14__Binary_node__

#include <string>
#include "Expr_node.h"
#include "Expr.h"
using namespace std;

class Binary_node :public Expr_node{
private:
	Binary_node(string const& op, Expr lhs, Expr rhs);
	//~Binary_node();
    
	int eval() const;
	void print(ostream& os) const;
    
private:
	friend class Expr;
    
private:
	string _op;
	Expr _left, _right;
};
#endif /* defined(__Lab__14__Binary_node__) */