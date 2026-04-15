class Solution {
public:

    // Custom Comparator
        struct comp{
            bool operator()(pair<string, int>& a, pair<string,int>& b){
                if(a.second == b.second){
                    return a.first < b.first;
                }
                return a.second > b.second;
            }
        };

    vector<string> topKFrequent(vector<string>& words, int k) {

        priority_queue<pair<string, int>, vector<pair<string, int>>, comp> pq;
        unordered_map<string, int> mpp;

        //Store the frequency
        for(auto w: words){
            mpp[w]++;
        }

        //Traverse through the mpp and push it to min-heap
        for( auto c : mpp){
            pq.push({c.first, c.second});

            if(pq.size()>k){
                pq.pop();
            }
        }
        vector<string> result;
        
        // Extracting the Top K frequent words
        while(!pq.empty()){
            result.push_back(pq.top().first);
            pq.pop();
        }

        reverse(result.begin(), result.end());
        return result;
    }
};