
#ifndef _solver_h_
#define _solver_h_
#include <vector>
#include "conditions.h"
class Solver {
    public:
	Solver(Conditions& c);
	void 		solve();
	int 		answer();
	std::vector<int>&  	solution();

    private:
	std::vector<int> 	m_solution;
	int 		m_answer;
	Conditions	m_conditions;
};
#endif
