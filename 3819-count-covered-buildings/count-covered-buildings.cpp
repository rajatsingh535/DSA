class Solution {
public:
    int countCoveredBuildings(int n, vector<vector<int>>& buildings) {

        /*


        1,2   2,2 -> count = 1  3,2   2,1    2,3
        brute force one by one check for each x , y that up , down , right , left exist or not

        optial check each direction one building exist
        min , max x  axis and y aixs if exist
        then it lie


store 3*3 x and y axis min and max store kar le
traverse in each building x and y lies in betwin  min and max then its covered building and increment the count






        */


    vector<int> minx(n+1,n+1);
    vector<int> maxx(n+1,-1);
    vector<int> miny(n+1,n+1);
    vector<int> maxy(n+1,-1);

    for(auto b : buildings){
        int x = b[0];
        int y = b[1];

        minx[y] = min(minx[y] , x);
        maxx[y] = max(maxx[y] , x);


        miny[x] = min(miny[x] , y);
        maxy[x] = max(maxy[x] , y);
    }


    int ans = 0;
    for(auto b : buildings){
        int x = b[0];
        int y = b[1];
        if(minx[y] < x && x < maxx[y] && miny[x] < y & y < maxy[x]) {
            ans += 1;
        }
    }


    return ans;

        
    }
};