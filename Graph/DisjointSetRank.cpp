#include<bits/stdc++.h>
using namespace std;

class DisjointSet{
    public:
    vector<int>rank,parent,size;

    DisjointSet(int n){
        rank.resize(n+1,0);
        parent.resize(n+1);
        size.resize(n+1,1);
        for(int i=0;i<n;i++) parent[i]=i;
    }

    int findUp(int u){
        if(u==parent[u]) return u;
        return parent[u]=findUp(parent[u]);
    }

    void unionByRank(int u,int v){
        int parentu = findUp(u);
        int parentv = findUp(v);
        if(parentu==parentv) return;

        int ranku = rank[parentu];
        int rankv = rank[parentv];
        if(ranku>rankv){
            parent[parentv]=parentu;
        }
        else if(ranku<rankv){
            parent[parentu]=parentv;
        }
        else{
            parent[parentu]=parentv;
            rank[parentu]++;
        }
    }

    void unionBySize(int u,int v){
        int parentu = findUp(u);
        int parentv = findUp(v);
        if(parentu==parentv) return;
        if(size[parentu]<size[parentv]){
            parent[parentu]=parentv;
            size[parentv]+=size[parentu];
        }
        else{
            parent[parentv]=parentu;
            size[parentu]+=size[parentv];
        }
    }
};

int main(){

}

///////////->>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>2nd 

class DisjointSet {
    vector<int> rank, parent, size;
public:
    DisjointSet(int n) {
        rank.resize(n + 1, 0);
        parent.resize(n + 1);
        size.resize(n + 1);
        for (int i = 0; i <= n; i++) {
            parent[i] = i;
            size[i] = 1;
        }
    }

    int findUPar(int node) {
        if (node == parent[node])
            return node;
        return parent[node] = findUPar(parent[node]);
    }

    void unionByRank(int u, int v) {
        int ulp_u = findUPar(u);
        int ulp_v = findUPar(v);
        if (ulp_u == ulp_v) return;
        if (rank[ulp_u] < rank[ulp_v]) {
            parent[ulp_u] = ulp_v;
        }
        else if (rank[ulp_v] < rank[ulp_u]) {
            parent[ulp_v] = ulp_u;
        }
        else {
            parent[ulp_v] = ulp_u;
            rank[ulp_u]++;
        }
    }

    void unionBySize(int u, int v) {
        int ulp_u = findUPar(u);
        int ulp_v = findUPar(v);
        if (ulp_u == ulp_v) return;
        if (size[ulp_u] < size[ulp_v]) {
            parent[ulp_u] = ulp_v;
            size[ulp_v] += size[ulp_u];
        }
        else {
            parent[ulp_v] = ulp_u;
            size[ulp_u] += size[ulp_v];
        }
    }
};