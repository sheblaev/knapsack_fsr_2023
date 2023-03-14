#include "conditions.h"
Conditions::Conditions(const vector<int> & v, const vector<int> & w, int K) {
	m_v = v;
	m_w = w;
	m_K = K;
}

bool Conditions::is_good(Knapsack& knapsack) {
	int sum = 0;
	//TODO
	
	return (sum < m_K);

}

int Conditions::size() {
	return m_v.size();
}
