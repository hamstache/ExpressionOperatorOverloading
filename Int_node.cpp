#include "Int_node.h"

Int_node::Int_node(int n) :Expr_node(), _operand(n){}

int Int_node::eval() const{
	return _operand;
}

void Int_node::print(ostream& os) const{
	os << _operand;
}