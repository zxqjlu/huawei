    /*
   题目描述
   在一个二维数组中，每一行都按照从左到右递增的顺序排序，每一列都按照从上到下递增的顺序排序   。请完成一个函数，输入这样的一个二维数组和一个整数，判断数组中是否含有该整数。
    */
    bool Find(int target, vector<vector<int> > array) {
        bool ret = false;
        int length = array.size();
        for (int i = 0; i< length; i++){
            vector <int> curr_vector = array.at(i);
            int curr_length = curr_vector.size();
            for (int j = 0; j < curr_length; j++){
                if (target == curr_vector.at(j)){
                    ret = true;
                    return ret;
                }
            }
        }
        return ret;
    }