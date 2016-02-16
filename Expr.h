#ifndef __Lab__14__Expr__
#define __Lab__14__Expr__

#include "Expr_node.h"

#include <iostream>
using namespace std;

class Expr {
public:
	Expr(int operand);
	Expr(string const& op, Expr operand);
	Expr(string const& op, Expr lhs, Expr rhs);
	Expr(string const& op, Expr lhs, Expr mid, Expr rhs);
	Expr(Expr const& other);
	~Expr();
	Expr& operator=(Expr const& other);
    
	bool operator==(Expr const& other) const;
	bool operator!=(Expr const& other) const;
	bool operator<(Expr const& other) const;
	bool operator<=(Expr const& other) const;
	bool operator>=(Expr const& other) const;
	bool operator>(Expr const& other) const;
    
	int eval() const;
    
private:
	friend ostream& operator<<(ostream& os, Expr const& expr);
	friend class Expr_node;
    
private:
	Expr_node* _p;
};
#endif /* defined(__Lab__14__Expr__) */


