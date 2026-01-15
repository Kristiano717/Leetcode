class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int n =points.size();
        int count=0;
        float ans=0;
        for (int i=1;i<n;i++)
        {   //dy , dx max
            ans+=max((abs(points[i][0]-points[i-1][0])),
                    (abs(points[i][1]-points[i-1][1])));


        }
        return ans;
    }
};