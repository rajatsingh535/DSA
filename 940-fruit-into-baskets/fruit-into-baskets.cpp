class Solution {
public:
    int totalFruit(vector<int>& fruit) {
      int n = fruit.size();
      int count = 0;

      unordered_map<int , int> map;

      for(int i = 0 , j = 0; j < n; j++){
            map[fruit[j]]++;
            if(map.size()<=2){
                count = max(count , j-i+1);
            }

            else{
                map[fruit[i]]--;
                if(map[fruit[i]]==0) map.erase(fruit[i]);
                i++;
    
            }

      }

    return count;
        
    }
};