
#include<bits/stdc++.h>
using namespace std;

/*

Author : Shivam Shukla
Description : Finding the prefix sum in array
*/

void buildST(vector<int64_t>& a, vector<int64_t>& seg, int64_t node, int64_t l, int64_t r) {
	if (l == r)
		 seg[node] = a[l];

	else {
		int64_t mid = (l + ((r - l) >> 1));
		buildST(a, seg, (node << 1), l, mid);
		buildST(a, seg, (node << 1 | 1), mid + 1, r);

		seg[node] = seg[node << 1] + seg[node << 1 | 1];
	}
}

int64_t queryST(vector<int64_t>& seg, int64_t node, int64_t l, int64_t r, int64_t x) {
    if (seg[node] < x)
    	 return -1;

    if (l == r)
         return l + 1;

    else {
    	int64_t mid = (l + ((r - l) >> 1));
    	if (seg[node << 1] >= x)
    		return queryST(seg, node << 1, l, mid, x);
    	else 
    	    return queryST(seg, node << 1 | 1, mid + 1, r, x - seg[node << 1]);	     
    }	
}

void updateST(vector<int64_t>& seg, int64_t node, int64_t l, int64_t r, int64_t pos, int64_t val) {
	if (l == r)
		 seg[node] = val;
	else {
		int64_t mid = (l + ((r - l) >> 1));

		if (pos <= mid)
			 updateST(seg, node << 1, l, mid, pos, val);
		else
		     updateST(seg, node << 1 | 1, mid + 1, r, pos, val);	
       
        seg[node] = seg[node << 1] + seg[node << 1 | 1];
	}	
}

int32_t main(int32_t argc,char** argv){

    int64_t n, q, l, r; cin >> n >> q;

    vector<int64_t> a(n), seg(n << 2);
    for (int64_t i = 0; i < n; i++)
       cin >> a[i];   
    
    int64_t node = 1;
    buildST(a, seg, node, 0, n - 1);

    while (q--) {
       int64_t qr, x, pos, val; cin >> qr;
       if (qr == 1)
       	  cin >> x, cout << queryST(seg, node, 0, n - 1, x) << endl;
       else
       	  cin >> pos >> val, updateST(seg, node, 0, n - 1, pos - 1, val);
    }
   
    return 0;		
}
