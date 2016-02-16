#include "Unary_node.h"

Unary_node::Unary_node(string const& op, Expr operand)
: Expr_node(), _op(op), _operand(operand){}


int Unary_node::eval() const{
	if (_op == "-"){ return -_operand.eval(); }
	else if (_op == " " || _op == "+"){ return _operand.eval(); }
	else{throw std::invalid_argument("Not - or +"); }
}

void Unary_node::print(ostream& os) const{
	os << _op << _operand;
}