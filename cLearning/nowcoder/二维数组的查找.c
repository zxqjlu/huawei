    /*
   ��Ŀ����
   ��һ����ά�����У�ÿһ�ж����մ����ҵ�����˳������ÿһ�ж����մ��ϵ��µ�����˳������   �������һ������������������һ����ά�����һ���������ж��������Ƿ��и�������
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