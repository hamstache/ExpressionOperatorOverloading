#include "Expr_node.h"
#include "Expr.h"
#include <iostream>
using namespace std;

void display(Expr const& e){
	cout << e << " = " << e.eval() << endl;
}

int main(){
    
	Expr n(7);
	Expr unary("-", 5);
	Expr binary("+", 3, 4);
	Expr e(Expr("*", unary, binary));
	Expr ternary("!=", unary != binary, Expr("*", 20, 10), Expr("/", 20, 10) );
    
    
	cout << "==================================================" << endl;
	display(n);
	display(unary);
	display(binary);
	display(e);
	display(ternary);
	cout << "==================================================" << endl << endl;
    
	Expr unary1("-", 75);
	Expr unary2("+", 25);
	Expr binary1("*", unary1, unary2);
	Expr binary2("/", unary1, unary2);
	Expr ternary1("==", unary1 == unary2, binary1, binary2);
	Expr ternary2("<", unary1 < unary2, binary1, binary2);
	Expr ternary3("<", 5 - 3 < 5 + 3, Expr("+", 22, 17), Expr("-", 100, 80));
    
	display(unary1);
	display(unary2);
	display(binary1);
	display(binary2);
	display(ternary1);
	display(ternary2);
	display(ternary3);
    
	//cin.get();
	return 0;
}