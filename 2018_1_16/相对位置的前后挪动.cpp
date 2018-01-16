 void reOrderArray(vector<int> &array) {
        vector<int> a;
        for(int i = 0; i < array.size(); i++)
        {
            if (array[i] % 2 == 1) {
                a.push_back(array[i]);
            }
        }
        for (int j = 0; j < array.size(); j++)
            
        {
            if (array[j] % 2 == 0) {
                a.push_back(array[j]);
            }
        }
        array = a;
    }