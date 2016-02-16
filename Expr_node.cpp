#include "Expr_node.h"

Expr_node::Expr_node() :_use(1){}

Expr_node::~Expr_node(){}

std::ostream& operator<<(std::ostream& os, Expr_node const& node){
	node.print(os);
	return os;
}