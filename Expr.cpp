#include "Expr.h"
#include "Expr_node.h"
#include "Unary_node.h"
#include "Binary_node.h"
#include "Int_node.h"
#include "Ternary_node.h"

Expr::Expr(int operand){ _p = new Int_node(operand); }
Expr::Expr(const string& op, Expr operand) : _p (new Unary_node(op, operand)){}
Expr::Expr(const string& op, Expr lhs, Expr rhs){ _p = new Binary_node(op, lhs, rhs); }
Expr::Expr(string const& op, Expr lhs, Expr mid, Expr rhs){ _p = new Ternary_node(op, lhs, mid, rhs); }

Expr::Expr(Expr const& other){
	_p = other._p;
	++_p->_use;
}

Expr::~Expr(){
	if (--_p->_use == 0){ delete _p; }
}

Expr& Expr::operator=(Expr const& other){
	//other._p->_use;
	if (--_p->_use == 0){ delete _p; }
	_p = other._p;
	return *this;
}

ostream& operator<<(ostream& os, Expr const& expr){
	expr._p->print(os);
	return os;
}

int Expr::eval() const{ return _p -> eval(); }


bool Expr::operator==(Expr const& other) const{
	return _p->eval() == other._p->eval();
}

bool Expr::operator!=(Expr const& other) const{
	return !(*this == other);
}

bool Expr::operator<(Expr const& other) const{
	return _p->eval() < other._p->eval();
}

bool Expr::operator<=(Expr const& other) const{
	return _p->eval() <= other._p->eval();
}

bool Expr::operator>=(Expr const& other) const{
	return _p->eval() >= other._p->eval();
}

bool Expr::operator>(Expr const& other) const{
	return _p->eval() > other._p->eval();
}