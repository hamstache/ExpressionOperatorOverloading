#include "Binary_node.h"

Binary_node::Binary_node(string const& op, Expr lhs, Expr rhs)
:Expr_node(), _op(op), _left(lhs), _right(rhs){}


int Binary_node::eval() const{
	int _lhs = _left.eval();
	int _rhs = _right.eval();
	if (_op == "+"){ return _lhs + _rhs; }
	else if (_op == "-"){ return _lhs - _rhs; }
	else if (_op == "*"){ return _lhs*_rhs; }
	else if (_op == "/"){ return _lhs / _rhs; }
	else{ throw std::invalid_argument("invalid argument"); }
}

void Binary_node::print(ostream& os) const{
	os << "(" << _left << " " << _op << " " << _right << ")";
}