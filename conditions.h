#include <vector>
using namespace std;

#include "knapsack.h" 

#ifndef _conditions_h_
#define _conditions_h_

class Conditions {
	public:
		Conditions() {};
		Conditions(const vector<int> & v, const vector<int> & w, int K) ;
		bool 	is_good(Knapsack& knapsack); 
		int 	size(); 
	private:
		vector<int> m_v;
		vector<int> m_w;
		int m_K;
};
#endif
