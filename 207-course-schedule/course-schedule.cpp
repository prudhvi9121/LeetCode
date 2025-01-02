class Solution {
public:
    bool dfs(vector<int>&vis,vector<vector<int>> &adj,int node,vector<bool>&recStack){
        vis[node]=1;
        recStack[node]=true;
        for(int i:adj[node]){
            if(!vis[i] && dfs(vis,adj,i,recStack))
                return true;
            else if(recStack[i]) return true;
        }
        recStack[node]=false;
        return false;
    }
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>> adj(numCourses);
        for(auto it:prerequisites){
            adj[it[0]].push_back(it[1]);
        }
        vector<int> vis(numCourses);
        vector<bool> recStack(numCourses, false);
        for(int  i=0;i<numCourses;i++){
            if(!vis[i] && dfs(vis,adj,i,recStack)){
                return false;
            }
        }
        return true;
    }
};