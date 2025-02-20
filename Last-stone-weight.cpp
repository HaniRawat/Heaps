class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> pq;

        for(int i=0; i<stones.size(); i++){
            pq.push(stones[i]);
        }

        while(pq.size() > 1){
            int rem;
            int y = pq.top();
            pq.pop();
            int x = pq.top();
            pq.pop();

            if(x != y){
                rem = y-x;
                pq.push(rem);
            }
        }

        if(pq.size() == 1)
            return pq.top();

        return 0;
    }
};