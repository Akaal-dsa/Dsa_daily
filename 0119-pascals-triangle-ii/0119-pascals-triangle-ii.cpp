class Solution {
public:
    vector<int> getRow(int rowIndex) {

        vector<int> row;

        for(int i = 0; i <= rowIndex; i++) {

            vector<int> next(i + 1, 1);

            for(int j = 1; j < i; j++) {
                next[j] = row[j - 1] + row[j];
            }

            row = next;
        }

        return row;
    }
};