class Solution {
   public:
    int calPoints(vector<string>& operations) {
        int poa = 0, length = operations.size();
        vector<int> record;
        for (poa; poa < length; poa++) {
            if (isdigit(operations[poa][0]) || (operations[poa][0] == '-' && isdigit(operations[poa][1]))) {
                record.push_back(stoi(operations[poa]));
                continue;
            } else if (operations[poa] == "+") {
                record.push_back(record[record.size()-1]+record[record.size()-2]);
                continue;
            } else if (operations[poa] == "C") {
                record.pop_back();
            } else if (operations[poa] == "D") {
                record.push_back(record[record.size() - 1] * 2);
                continue;
            }
        }
        return accumulate(record.begin(), record.end(), 0);
    }
};