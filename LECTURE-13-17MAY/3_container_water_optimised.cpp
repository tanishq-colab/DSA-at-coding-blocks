class solution{
    public:
    int area(vector<int> &height){
        int h = height.size();
        int i=0;
        int j= n-1;
        int maxi = 0;
        while(i<j){
            int w = j-i;
            int h = min(height[i],height[j]);
            int a = w * h;
            maxi = max(maxi,a);
            if(height[i] < height[j]){
                i++;
            }
            else{
                j--;
            }
        }
        return maxi;
    }
}
