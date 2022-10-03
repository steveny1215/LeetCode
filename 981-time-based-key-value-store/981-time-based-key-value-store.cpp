class TimeMap {
public:
    unordered_map<string, vector<pair<string,int>>> tm;
    TimeMap() {
                
    }
    
    void set(string key, string value, int timestamp) {
        pair<string, int> p;
        p = make_pair(value, timestamp);
        tm[key].push_back(p);
        
    }
    
    string get(string key, int timestamp) {
        string res = "";
        int n = tm[key].size();
        int l = 0;
        int r = n-1;
        while(l <= r){
            int mid = l+(r-l)/2;
            if(tm[key][mid].second <= timestamp){
                l = mid + 1;
                res = tm[key][mid].first;
            }else{
                r = mid -1;
            }
        }
        return res;
    }
};

/**
 * Your TimeMap object will be instantiated and called as such:
 * TimeMap* obj = new TimeMap();
 * obj->set(key,value,timestamp);
 * string param_2 = obj->get(key,timestamp);
 */