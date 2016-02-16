#ifndef __Lab__14__Int_node__
#define __Lab__14__Int_node__

#include "Expr_node.h"
#include "Expr.h"

#include <iostream>
#include <string>

using namespace std;

class Int_node :public Expr_node {
private:
	Int_node(int n);
    
	int eval() const;
	void print(ostream& os) const;
	
private:
	friend class Expr;
    
private:
	int _operand;
};
#endif /* defined(__Lab__14__Int_node__) */

