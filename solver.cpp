#include "solver.h"
Solver::Solver( Conditions& c) {
	m_conditions = c;
	m_solution.resize(c.size());
}

void Solver::solve() {
	// Local search:
	vector<int> knapsack(m_solution.size());

	//TODO: add your code here 
	/*
	while (???? ) {
	  knapsack = knapsack_with_one_coord_update; ????
	  int new_gain = 0;
	  int new_weight = 0;
	  for (...i...) {  ????
		  new_gain  +=  knapsack[i] * m_conditions.v[i];
		  new_weight +=  knapsack[i] * m_conditions.w[i];
	  }
	  if (new_gain < m_conditions.m_K)  ???? {
	  	???? 
	  }
	}
      */
}
int Solver::answer() {
	return m_answer;
}
vector<int>&  Solver::solution() {
	return m_solution;
}
