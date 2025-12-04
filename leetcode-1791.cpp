class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        map<int, vector<int>> graph;

        for(int i=0; i<edges.size(); i++){
            graph[edges[i][0]].push_back(edges[i][1]);
            graph[edges[i][1]].push_back(edges[i][0]);
        }

        for(auto &x : graph){
            if(x.second.size() == graph.size()-1) return x.first;
        }
        return 0;
        
    }
};
