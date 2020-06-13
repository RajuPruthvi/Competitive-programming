template<typename T>
class segTree
{
public:
    int n;
    vector<T> st;

    segTree() {}
    segTree(int _n) {
        n = _n;
        st.resize(4*n);
    }
    // segTree(vector<T> a) {
        // n = a.size();
        // st.resize(4*n);
        // for(int i=0; i<n; i++) {
            // update(i, a[i]);
        // }
    // }

    T combine(T a, T b)
    {
        return a+b;
    }
    
    // void build(int v, int tl, int tr)
    // {
        // if(tl==tr) {
            // st[v]=something;
            // return;
        // }
        
        // int tm=(tl+tr)/2;
        // build(2*v+1, tl, tm);
        // build(2*v+2, tm+1, tr);
        // st[v]=combine(st[2*v+1], st[2*v+2]);
    // }

    auto query2(int v, int tl, int tr, int l, int r)
    {
        if(l>r) return something;
        if(tl==l and tr==r) {
            return st[v];
        }
        int tm=(tl+tr)/2;
        auto ans1=query2(2*v+1, tl, tm, l, min(r, tm));
        auto ans2=query2(2*v+2, tm+1, tr, max(l, tm+1), r);
        return combine(ans1, ans2);
    }

    void update2(int v, int tl, int tr, int pos, T new_val)
    {
        if(tl==tr) {
            st[v] = new_val;
            return;
        }
        int tm=(tl+tr)/2;
        if(pos<=tm) {
            update2(2*v+1, tl, tm, pos, new_val);
        }
        else {
            update2(2*v+2, tm+1, tr, pos, new_val);
        }
        st[v]=combine(st[2*v+1], st[2*v+2]);
    }

    void update(int pos, T new_val) {
        update2(0, 0, n-1, pos, new_val);
    }

    auto query(int l, int r) {
        return query2(0, 0, n-1, l, r);
    }
};