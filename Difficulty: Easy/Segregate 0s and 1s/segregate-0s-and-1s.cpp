class Solution {
  public:
    void segregate0and1(vector<int> &arr) {
        int n = arr.size();
        int pt1 = 0 , pt2 = n-1;
        while(pt1<pt2){
            if(arr[pt1]==0) pt1++;
            else if(arr[pt2]==1) pt2--;
            else{
                swap(arr[pt1],arr[pt2]);
                 pt1++;
                 pt2--;
            }
        }
       
       
   }  
            
};






