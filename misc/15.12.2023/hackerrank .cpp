// Kitty's Calculations on a Tree

#include <iostream>
#include <cstdio>
#include <vector>
#include <cstring>
#include <utility>
using namespace std;

typedef long long LL;
typedef pair<LL,LL> pii;
const int MAX_N = 2e5 + 6;
const int MAX_P = 19;
const LL mod = 1e9 + 7;

vector<int> edg[MAX_N];
int dis[MAX_P][MAX_N];
bool visit[MAX_N];

struct Cen {
    int par;
    int depth;
    pii val_v_av;  //first --> val, second --> minus
    pii val_v;
} cen[MAX_N];

vector<int> v;
int sz[MAX_N];
int mx[MAX_N];

void dfs2(int id) {
    v.push_back(id);
    visit[id]=1;
    sz[id]=1;
    mx[id]=0;
    for (int i:edg[id]) {
        if (!visit[i]) {
            dfs2(i);
            sz[id] += sz[i];
        }
    }
}

#define SZ(x) ((int)(x).size())

int get_cen(int id) {
    v.clear();
    dfs2(id);
    int tot=SZ(v);
    int cen=-1;
    for (int i:v) {
        if (max(mx[i],tot-sz[i]) <= tot/2) {
            cen=i;
        }
        visit[i]=false;
    }
    return cen;
}

void dfs3(int id,int par,int cen_depth,int dist)  {
    dis[cen_depth][id] = dist;
    for (int i:edg[id]) {
        if (!visit[i] && i!=par) {
            dfs3(i,id,cen_depth,dist+1);
        }
    }
}

void dfs(int id,int cen_par,int cen_depth) {
    int ccen=get_cen(id);
    dfs3(ccen,ccen,cen_depth,0);
    cen[ccen]={cen_par,cen_depth,{0,0},{0,0}};
    visit[ccen]=1;
    for (int i:edg[ccen]) {
        if (!visit[i]) dfs(i,ccen,cen_depth+1);
    }
}

pii operator+(const pii &p1,const pii &p2) {
    return make_pair(p1.first+p2.first,p1.second+p2.second);
}

pii operator-(const pii &p1,const pii &p2) {
    return make_pair(p1.first-p2.first,p1.second-p2.second);
}

pii operator+=(pii &p1,const pii &p2) {
    p1 = p1 + p2;
    return p1;
}

pii operator-=(pii &p1,const pii &p2) {
    p1 = p1 - p2;
    return p1;
}

void Pure(pii &p) {
    p.first = (p.first%mod + mod) % mod;
    p.second = (p.second%mod + mod) % mod;
}

void addd(LL x) {
    LL p=x;
    while (p!=-1) {
        cen[p].val_v += {x,0};
        cen[p].val_v_av += {x*dis[cen[p].depth][x],0};
        if (cen[p].par != -1) {
            int par=cen[p].par;
            cen[p].val_v -= {0,x};
            cen[p].val_v_av -= {0,x*dis[cen[par].depth][x]};
        }
        Pure(cen[p].val_v);
        Pure(cen[p].val_v_av);
        p=cen[p].par;
    }
}

void dell(LL x) {
    LL p=x;
    while (p!=-1) {
        cen[p].val_v -= {x,0};
        cen[p].val_v_av -= {x*dis[cen[p].depth][x],0};
        if (cen[p].par != -1) {
            int par=cen[p].par;
            cen[p].val_v += {0,x};
            cen[p].val_v_av += {0,x*dis[cen[par].depth][x]};
        }
        Pure(cen[p].val_v);
        Pure(cen[p].val_v_av);
        p=cen[p].par;
    }
}

LL query(LL x) {
    LL ret=0;
    LL v=0;
    LL v_av=0;
    int p=x;
    while (p!=-1) {
        v += cen[p].val_v.first;
        v_av += cen[p].val_v_av.first;
        ret += x*v_av;
        ret %= mod;
        ret += x*dis[cen[p].depth][x]*v;
        ret %= mod;
        v = cen[p].val_v.second;
        v_av = cen[p].val_v_av.second;
        p=cen[p].par;
    }
    return ret;
}

LL pow(LL a,LL n,LL mod) {
    if (n==0) return 1;
    else if (n==1) return a;
    LL ret=pow(a,n/2,mod);
    ret*=ret;
    ret%=mod;
    if (n&1) {
        ret*=a;
        ret%=mod;
    }
    return ret;
}

int main () {
    int n,q;
    scanf("%d %d",&n,&q);
    for (int i=1;n-1>=i;i++) {
        int a,b;
        scanf("%d %d",&a,&b);
        edg[a].push_back(b);
        edg[b].push_back(a);
    }
    dfs(1,-1,0);
    while (q--) {
        int k;
        scanf("%d",&k);
        vector<int> v;
        while (k--) {
            int x;
            scanf("%d",&x);
            v.push_back(x);
        }
        for (int i:v) addd(i);
        LL ans=0;
        for (int i:v) {
            ans += query(i);
            ans%=mod;
        }
        for (int i:v) dell(i);
        printf("%lld\n",(ans*pow(2,mod-2,mod) + mod)%mod);
    }
}

// Square-Ten Tree

#include <bits/stdc++.h>
#define pb push_back
#define sqr(x) (x)*(x)
#define sz(a) int(a.size())
#define reset(a,b) memset(a,b,sizeof(a))
#define oo 1000000007

using namespace std;

typedef pair<int,int> pii;
typedef long long ll;

char l[1000007],r[1000007];
int m,n;


void plus1(int pos){
    int t=1;
    for(int i=pos; i>=1; --i){
        if(l[i]=='9') l[i]='0';
        else{
            ++l[i];
            break;
        }
    }
}

vector<int> sub9(int s, int f){
    int t=0;
    vector<int> ans;
    for(int i=f; i>=s; --i){
        int v='0'-l[i]-t;
        if(v<0){
            v+=10;
            t=1;
        }else{
            t=0;
        }
        ans.pb(v);
    }
    return ans;
}

vector<int> sub(int s, int f){
    int t=0;
    vector<int> ans;
    for(int i=f; i>=s; --i){
        int v=r[i]-l[i]-t;
        if(v<0){
            v+=10;
            t=1;
        }else{
            t=0;
        }
        ans.pb(v);
    }
    return ans;
}

vector<int> add(vector<int> &a, vector<int> &b){
    while(sz(a)<sz(b)) a.pb(0);
    while(sz(b)<sz(a)) b.pb(0);
    vector<int> c;
    int t=0;
    for(int i=0; i<sz(a); ++i){
        int v=a[i]+b[i]+t;
        c.pb(v%10);
        t=v/10;
    }
    if(t>0) c.pb(t);
    return c;
}

void printVector(vector<int> &a){
    for(int i=sz(a)-1; i>=0; --i) printf("%d",a[i]);
}

struct Block{
    int s;
    vector<int> cnt;
    Block(){}
    Block(int _s, vector<int> &_cnt){
        s = _s;
        cnt = _cnt;
        while(sz(cnt)>1 && cnt[sz(cnt)-1]==0) cnt.pop_back();
    }
};
vector<Block> result;

int main(){
//    freopen("input.txt","r",stdin);
    scanf("%s",l+1);
    m=strlen(l+1);
    scanf("%s",r+1);
    n=strlen(r+1);
    for(int i=n; i>=n-m+1; --i) l[i]=l[i-(n-m)];
    for(int i=n-m; i>=1; --i) l[i]='0';

    int x=0;
    while(x<=n && l[x+1]==r[x+1]) ++x;
    if(x>n){
        puts("1");
        puts("0 1");
        return 0;
    }
    while(x<n){
        if(x==n-1){
            vector<int> cnt; cnt.pb(r[n]-l[n]+1);
            result.pb(Block(0,cnt));
            l[n]=r[n];
            break;
        }else if(l[n]!='1'){
            vector<int> cnt; cnt.pb(0);
            while(l[n]!='1'){
                plus1(n);
                ++cnt[0];
                while(x<n && l[x+1]==r[x+1]) ++x;
                if(x==n){
                    ++cnt[0];
                    break;
                }
            }
            result.pb(Block(0,cnt));
        }else{
            int u=n-1;
            while(u-1>x && l[u]=='0') --u;
            int len=n-u;
            int s=1;
            while((1<<(s)) <= len) ++s;
            int leftBound = n - (1<<(s));
            int rightBound = n - (1<<(s-1));
            leftBound = max(leftBound,0);
            if(x < leftBound){
                vector<int> cnt = sub9(leftBound+1,rightBound);
                result.pb(Block(s, cnt));
                for(int i=leftBound+1; i<=rightBound; ++i) l[i]='0';
                l[n]='0';
                plus1(leftBound);
            }else{
                vector<int> cnt = sub(leftBound+1, rightBound);
                result.pb(Block(s, cnt));
                for(int i=leftBound+1; i<=rightBound; ++i) l[i]=r[i];
                l[n]='0';
            }
            while(x<n && l[x+1]==r[x+1]) ++x;
            if(x<n) l[n]='1';
        }
    }
    printf("%d\n",sz(result));
    for(int i=0; i<sz(result); ){
        int j=i;
        vector<int> sum = result[i].cnt;
        while(j+1<sz(result) && result[j+1].s==result[i].s){
            vector<int> t=add(sum, result[++j].cnt);
            sum = t;
        }
        printf("%d ",result[i].s);
        printVector(sum);
        i=j+1;
        puts("");
    }
}

// Balanced Forest

#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <string>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <deque>
#include <cassert>
#include <stdlib.h>

using namespace std;


typedef long long ll;

const ll INF = (ll) 1e18;
const int N = (int) 5e4 + 10;

vector<int> g[N];
ll c[N];
ll f[N];
ll res = INF;
ll tot = 0;
bool was[N];

void upd(ll a, ll b, ll c) {
    if (a == b && c <= a)
        res = min(res, a - c);
    if (a == c && b <= a)
        res = min(res, a - b);
    if (b == c && a <= b)
        res = min(res, b - a); 
}

set<ll>* unite(set<ll>* a, set<ll>* b) {
    if (a->size() > b->size())
        swap(a, b);
    for (ll x : *a) {
        if (b->count(tot - 2 * x))
            upd(tot - 2 * x, x, x);
        if (b->count(x))
            upd(x, x, tot - 2 * x);
        if ((tot - x) % 2 == 0 && b->count((tot - x) / 2))
            upd((tot - x) / 2, x, (tot - x) / 2);
    }
    for (ll x : *a) {
        b->insert(x);
    }
    delete a;
    return b;
}

set<ll>* dfs(int v) {
    was[v] = true;
    f[v] = c[v];
    set<ll>* sv = new set<ll>();
    for (int to : g[v])
        if (!was[to]) {
            set<ll>* sto = dfs(to);
            f[v] += f[to];
            sv = unite(sv, sto);
        }
    if (f[v] % 2 == 0 && sv->count(f[v] / 2))
        upd(f[v] / 2, f[v] / 2, tot - f[v]);
    if (sv->count(tot - f[v]))
        upd(tot - f[v], 2 * f[v] - tot, tot - f[v]);
    if (sv->count(2 * f[v] - tot))
        upd(2 * f[v] - tot, tot - f[v], tot - f[v]);
    sv->insert(f[v]);
    return sv;
}

void solve() {
    int n;
    cin >> n;
    for (int i = 0; i < N; i++) {
        was[i] = false;
        g[i].clear();
        c[i] = 0;
    }
    tot = 0;
    res = INF;
    for (int i = 0; i < n; i++) {
        cin >> c[i];
        tot += c[i];
    }
    for (int i = 0; i < n - 1; i++) {
        int x, y;
        cin >> x >> y;
        --x;
        --y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    set<ll>* s = dfs(0);
    //for (int i = 0; i < n; i++)
    //    cerr << f[i] << " ";
    //cerr << endl;
    delete s;
    if (res == INF)
        res = -1;
    cout << res << endl;
    // cerr << "----------" << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    int p;
    cin >> p;
    while (p--) {
        solve();
    }
    return 0;
}

// Jenny's Subtrees


#include <bits/stdc++.h>


#include <fstream>
#include <sstream>

#include <vector>
#include <set>
#include <bitset>
#include <map>
#include <deque>
#include <string>

#include <algorithm>
#include <numeric>

#include <cstdio>
#include <cassert>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <cmath>

#define pb push_back
#define pbk pop_back
#define mp make_pair
#define fs first
#define sc second
#define all(x) (x).begin(), (x).end()
#define foreach(i, a) for (__typeof((a).begin()) i = (a).begin(); i != (a).end(); ++i)
#define len(a) ((int) (a).size())

#ifdef CUTEBMAING
#define eprintf(...) fprintf(stderr, __VA_ARGS__)
#else
#define eprintf(...) 42
#endif

using namespace std;

typedef long long int64;
typedef long double ld;
typedef unsigned long long lint;

const int inf = (1 << 30) - 1;
const int64 linf = (1ll << 62) - 1;
const int N = 1e5 + 100;

int n, r;
vector<int> g[N];
bool used[N];

void dfsMark(int v, int p = -1, int d = 0) {
    if (d > r) {
        return;
    }
    used[v] = true;
    for (int to : g[v]) {
        if (p != to) {
            dfsMark(to, v, d + 1);
        }
    }
}

int way[N], wayLen = 0;
int dist[N];

void findDist(int v, int p = -1, int d = 0) {
    if (!used[v]) {
        return ;
    }
    dist[v] = d;
    for (int to : g[v]) {
        if (to != p) {
            findDist(to, v, d + 1);
        }
    }
}

bool findWay(int v, int x, int p = -1) {
    if (!used[v]) {
        return false;
    }
    way[wayLen++] = v;
    if (v == x) {
        return true;
    }
    for (int to : g[v]) {
        if (p != to && findWay(to, x, v)) {
            return true;
        }
    }
    wayLen--;
    return false;
}

vector<int> findCenters(int v) {
    fill_n(dist, n, -inf);
    findDist(v);
    v = max_element(dist, dist + n) - dist;
    findDist(v);
    int to = max_element(dist, dist + n) - dist;
    wayLen = 0;
    assert(findWay(v, to));
    if (wayLen % 2 == 0) {
        return { way[wayLen / 2 - 1], way[wayLen / 2] };
    }
    return { way[wayLen / 2] };
}

int64 rnd[N];

inline int64 myrand() {
    int64 res = 0;
    for (int i = 0; i < 4; i++) {
        res <<= 16;
        res += rand();
    }
    return res;
}

inline int64 dfsHash(int v, int p = -1) {
    vector<int64> go;
    for (int to : g[v]) {
        if (to != p && used[to]) {
            go.pb(dfsHash(to, v));
        }
    }
    sort(all(go));
    int64 res = 423929593294391LL;
    for (int i = 0; i < len(go); i++) {
        res ^= go[i] * rnd[i];
    }
    return res;
}

int main() {
#ifdef XCODE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    srand(-1);
    for (int i = 0; i < N; i++) {
        rnd[i] = myrand();
    }
    cin >> n >> r;
    assert(1 <= n && n <= 3000);
    assert(0 <= r && r <= 3000);
    for (int i = 0; i < n - 1; i++) {
        int u, v; scanf("%d%d", &u, &v), u--, v--;
        g[u].pb(v), g[v].pb(u);
    }
    vector<int64> res;
    for (int i = 0; i < n; i++) {
        fill_n(used, n, false);
        dfsMark(i);
        auto centers = findCenters(i);
        if (len(centers) == 1) {
            int64 h = dfsHash(centers.back());
            eprintf("v = %d; center = %d; hash = %lld\n", i, centers.back(), h);
            res.pb(h);
        } else {
            int64 h1 = dfsHash(centers[0], centers[1]), h2 = dfsHash(centers[1], centers[0]);
            if (h1 > h2) {
                swap(h1, h2);
            }
            int64 h = (8418348238341LL * h1) ^ (4847574732881394LL * h2);
            res.pb(h);
            eprintf("v = %d; centers = %d, %d; hash = %lld\n", i, centers[0], centers[1], h);
        }
    }
    sort(all(res));
    for (auto i : res) {
        eprintf("%lld ", i);
    }
    eprintf("\n");
    res.resize(unique(all(res)) - res.begin());
    cout << len(res) << endl;
    return 0;
}

// Tree Coordinates

#include <iostream>
#include <fstream>
#include <sstream>
 
#include <vector>
#include <set>
#include <bitset>
#include <map>
#include <deque>
#include <string>
 
#include <algorithm>
#include <numeric>
 
#include <cstdio>
#include <cassert>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <cmath>
 
#define pb push_back
#define pbk pop_back
#define mp make_pair
#define fs first
#define sc second
#define all(x) (x).begin(), (x).end()
#define foreach(i, a) for (__typeof((a).begin()) i = (a).begin(); i != (a).end(); ++i)
#define len(a) ((int) (a).size())
 
#ifdef CUTEBMAING
#define eprintf(...) fprintf(stderr, __VA_ARGS__)
#else
#define eprintf(...) 42
#endif
 
using namespace std;
 
typedef long long int64;
typedef long double ld;
typedef unsigned long long lint;
 
const int inf = (1 << 30) - 1;
const int64 linf = (1ll << 62) - 1;
const int N = 1e5 + 100;
const int K = 17;
 
struct layer {
	int color[N], root[N];
	int dist[N];
	pair<int, int> max1[N], max2[N];
 
	layer() {
		fill_n(color, N, -1);
		fill_n(root, N, -1);
		fill_n(dist, N, -1);
		fill_n(max1, N, mp(-inf, -inf));
		fill_n(max2, N, mp(-inf, -inf));
	}
};
 
int n, m;
vector<vector<int>> g, backup;
int reqA[N], reqB[N];
 
layer st[K];
 
int comp[N], compLen = 0;
int parent[N], size[N];
 
inline void update(pair<int, int> &a, pair<int, int> &b, const pair<int, int> &c) {
	if (a.fs < c.fs) {
		if (a.sc != c.sc) {
			b = a;
		}
		a = c;
	} else if (b.fs < c.fs && c.sc != a.sc) {
		b = c;
	}
}
 
inline void update(int v, int value) {
	for (int i = 0; i < K; i++) {
		layer &layer = st[i];
		int root = layer.root[v];
		if (root == -1) {
			break;
		}
		update(layer.max1[root], layer.max2[root], mp(value + layer.dist[v], layer.color[v]));
	}
}
 
inline int getValue(int v) {
	int ans = -inf;
	for (int i = 0; i < K; i++) {
		layer &layer = st[i];
		int root = layer.root[v];
		if (root == -1) {
			break;
		}
		if (layer.max1[root].sc != layer.color[v] || layer.max1[root].sc == -1) {
			ans = max(ans, layer.max1[root].fs + layer.dist[v]);
		} else if (layer.max2[root].sc != layer.color[v] || layer.max2[root].sc == -1) {
			ans = max(ans, layer.max2[root].fs + layer.dist[v]);
		}
	}
	return ans;
}
 
inline int dfsSize(int v, int p = -1) {
	size[v] = 1;
	comp[compLen++] = v;
	parent[v] = p;
	for (int to : g[v]) {
		if (to != p) {
			size[v] += dfsSize(to, v);
		}
	}
	return size[v];
}
 
inline int findRoot(int v) {
	compLen = 0;
	int total = dfsSize(v);
	for (int i = 0; i < compLen; i++) {
		v = comp[i];
		bool flag = true;
		if ((total - size[v]) * 2 > total) {
			continue;
		}
		for (int j : g[v]) {
			if (j != parent[v] && size[j] * 2 > total) {
				flag = false;
				break;
			}
		}
		if (flag) {
			return v;
		}
	}
	assert(false);
}
 
inline void dfsColor(layer &layer, int v, int root, int color, int d = 1, int p = -1) {
	layer.color[v] = color;
	layer.root[v] = root;
	layer.dist[v] = d;
	for (int to : g[v]) {
		if (to != p) {
			dfsColor(layer, to, root, color, d + 1, v);
		}
	}
}
 
inline void buildDivideAndConquer(int x, int v) {
	layer &layer = st[x];
	v = findRoot(v);
	for (int to : g[v]) {
		g[to].erase(find(all(g[to]), v));
	}
	layer.color[v] = -1;
	layer.root[v] = v;
	layer.dist[v] = 0;
	for (int to : g[v]) {
		dfsColor(layer, to, v, to);
	}
	for (int to : g[v]) {
		buildDivideAndConquer(x + 1, to);
	}
}
 
int ans = -inf;
 
int color[N], dist[N];
 
inline void dfsColor2(int v, int c, int d = 1, int p = -1) {
	color[v] = c;
	dist[v] = d;
	for (int to : g[v]) {
		if (to != p) {
			dfsColor2(to, c, d + 1, v);
		}
	}
}
 
inline void clearUpdate(int v) {
	for (int i = 0; i < K; i++) {
		if (st[i].root[v] == -1) {
			break;
		}
		st[i].max1[st[i].root[v]].fs = -inf;
		st[i].max2[st[i].root[v]].fs = -inf;
	}
}
 
inline void divideAndConquer(int v, vector<int> requests) {
	v = findRoot(v);
	for (int to : g[v]) {
		g[to].erase(find(all(g[to]), v));
	}
	color[v] = -1, dist[v] = 0;
	for (int i = 0; i < len(g[v]); i++) {
		int to = g[v][i];
		dfsColor2(to, i);
	}
	vector<vector<int>> req(len(g[v]));
	for (int i : requests) {
		if (reqA[i] == v) {
			ans = max(ans, getValue(reqB[i]));
			update(reqB[i], 0);
		} else {
			req[color[reqA[i]]].pb(i);
		}
	}
	for (const auto &subtree : req) {
		for (int j : subtree) {
			ans = max(ans, getValue(reqB[j]) + dist[reqA[j]]);
		}
		for (int j : subtree) {
			update(reqB[j], dist[reqA[j]]);
		}
	}
	for (int i : requests) {
		clearUpdate(reqB[i]);
	}
	for (int i = 0; i < len(g[v]); i++) {
		int to = g[v][i];
		divideAndConquer(to, req[i]);
	}
}
 
int main() {
	cerr << sizeof(st) / 1024 / 1024 << endl;
	cin >> n >> m;
	g.resize(n);
	for (int i = 0; i < n - 1; i++) {
		int u, v; scanf("%d%d", &u, &v), u--, v--;
		g[u].pb(v);
		g[v].pb(u);
	}
	backup = g;
	for (int i = 0; i < m; i++) {
		scanf("%d%d", &reqA[i], &reqB[i]), reqA[i]--, reqB[i]--;
	}
	buildDivideAndConquer(0, 0);
	g = backup;
	vector<int> req(m);
	for (int i = 0; i < m; i++) {
		req[i] = i;
	}
	divideAndConquer(0, req);
	eprintf("ans = %d\n", ans);
	printf("%d\n", ans);
    return 0;
}