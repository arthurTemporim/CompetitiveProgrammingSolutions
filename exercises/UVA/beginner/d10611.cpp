#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, aux, q;
	scanf("%d", &n);
	vector<int> chimps;
	vector<int> qv;

	for(int i=0;i<n;i++) {
		scanf("%d", &aux);
		chimps.push_back(aux);
	}

	scanf("%d", &q);
	for(int i=0;i<q;i++) {
		scanf("%d", &aux);
		qv.push_back(aux);
	}


	for(int i=0;i<q;i++) {
		int min=0, max=0;

		for(int j=0;j<n;j++) {
			if(chimps[j] < qv[i]) {
				min = chimps[j];
			}
			if(chimps[j] >= qv[i]) {
				break;
			}
		}

		for(int j=n-1;j>=0;j--) {
			if(chimps[j] > qv[i]) {
				max = chimps[j];
			}
			if(chimps[j] <= qv[i]) {
				break;
			}
		}

		if(min==0) {
			printf("X %d\n", max);
		} else if(max == 0) {
			printf("%d X\n", min);
		}else {
		printf("%d %d\n", min, max);
		}

	}

	

	return 0;
}
