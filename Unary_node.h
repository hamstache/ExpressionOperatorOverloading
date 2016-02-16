

#ifndef __Lab__14__Unary_node__
#define __Lab__14__Unary_node__

#include "Expr_node.h"
#include "Expr.h"

#include <iostream>
#include <string>
using namespace std;

class Unary_node :public Expr_node {
private:
	Unary_node(string const& op, Expr operand);
    
	int eval() const;
	void print(ostream& os) const;
	
public:
	friend class Expr;
    
private:
	string _op;
	Expr _operand;
};
#endif /* defined(__Lab__14__Unary_node__) */
