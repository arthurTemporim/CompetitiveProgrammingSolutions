#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, q, marble, j=1, value;
	int flag;
	vector<int> x;
	do {

		scanf("%d %d", &n, &q);
		if(n==0 && q==0) {
			break;
		}

		for(int i=0;i<n;i++) {
			scanf("%d", &marble);
			x.push_back(marble);
		}

		printf("CASE# %d:\n", j);

		for(int i=0;i<q;i++) {
			scanf(" %d", &value);
			flag = -1;
			for(int k=0;k<n;k++) {
				if(value==x[k]){
					flag=k;
				}
			}

			if(flag==-1) {
				printf("%d not found\n", value);
			} else {
				printf("%d found at %d\n", value, flag);
			}
		}

		x.clear();
		j++;
	} while(1);
	return 0;
}
