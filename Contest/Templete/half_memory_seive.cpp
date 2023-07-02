const int MX = 5e4+123;
bool seive[MX];
vi prime;

void seiveGen(int limit) {
	limit += 100;
	int sqrtn = sqrt(limit);
	for(int i = 3; i <= sqrtn; i += 2) {
		if(!seive[i>>1]) {
			for(int j = i * i; j < limit; j += i + i) {
				seive[j>>1] = 1;
			}
		}
	}
	
	prime.PB(2);
	for(int i = 3; i < limit; i += 2) {
		if(!seive[i>>1]) prime.PB(i);
	}
}
