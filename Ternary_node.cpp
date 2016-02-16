#include "Ternary_node.h"

Ternary_node::Ternary_node(string const& op, Expr lhs, Expr mid, Expr rhs)
:Expr_node(), _op(op), _left(lhs), _middle(mid), _right(rhs){}


int Ternary_node::eval() const{
	if (_left.eval()){ return _middle.eval(); }
	else{ return _right.eval(); }
}

void Ternary_node::print(ostream& os) const{
	if (_left == 0){ os << "false"; }
	else{ os << "true"; }
	os << " ? " << _middle << " : " << _right;
}