//暴力法
        //vector<int>res;
        // for(int i = 0;i<nums.size();i++){
        //     for(int j = i+1;j<nums.size();j++)
        //     {
        //         if(nums[i] + nums[j] == target)
        //         {
        //             res.push_back(i);
        //             res.push_back(j);
        //             return res;
        //         }
        //     }
        // }
        // return res;
        //哈希表法
        unordered_map<int, int>map;
        for(int i = 0;i<nums.size();i++){
            auto el = map.find(target-nums[i]);
            if(el != map.end()){
                return {i,el->second};
            }
            map[nums[i]] = i;
        }
        return {};