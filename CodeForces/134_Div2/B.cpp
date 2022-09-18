// DP padh madarchod.....memory use kar


#include <bits/stdc++.h>
using namespace std;




// void display(vector<vector<int>> &vec){
//     cout<<"....................\n";
//     for(int i=0;i<vec.size();i++){
//         for(int j=0;j<vec[i].size();j++){
//             cout<<vec[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     cout<<"......................\n";
// }

int shortestPath(vector<vector<int>> &vec){

    int res=1;

    if(vec.size()==0 || vec[0].size()==1){
        return -1;
    }

    int ans=0;

    int row=vec.size();
    int col=vec[0].size();

    if(vec[0][0]==1 || vec[row-1][col-1]==1){
        return -1;
    }

    queue<pair<int,int>> queue;
    queue.push(make_pair(0,0));

    vector<vector<int>> directions = {{0, 0+1}, {0+1, 0}, {0, 0-1}, {0-1, 0}};

    vec[0][0]=1;

    while(!queue.empty()){
        auto curr = queue.front();
        int x=curr.first, y=curr.second;
        if(x==row-1 && y==col-1)    return vec[x][y];

        for(auto direction : directions){
            int nx = x+direction[0];
            int ny = y+direction[1];
            if(nx >=0 && nx<row && ny>=0 && ny<col && vec[nx][ny]==0){
                queue.push(make_pair(nx,ny));
                vec[nx][ny] = vec[x][y]+1;
            }
        }
        queue.pop();
    }
    return -1;

}


int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,m,x,y,d;
        cin>>n>>m>>x>>y>>d;
        x--;
        y--;
        vector<vector<int>> vec;

        vector<int> temp (m,0);

        for(int i=0;i<n;i++){
            vec.push_back(temp);
        }


        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if((abs(x-i)+abs(y-j)) <= d){
                    vec[i][j]=1;
                }
                else{
                    vec[i][j]=0;
                }
            }
        }

        

        // display(vec);
        int ans = shortestPath(vec);
        // cout<<"Answer-->"<<shortestPath(vec)-1<<endl;
        ans == -1 ? cout<<-1<<endl : cout<<ans-1<<endl;
    }

    return 0;
} 