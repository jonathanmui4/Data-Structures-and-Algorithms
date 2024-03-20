// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int first = 1;
        int last = n;
        // Records 1st index of faulty product
        long pos = 0;
        while (first <= last) {
            int mid = first + (last - first) / 2;
            bool isBad = isBadVersion(mid);
            if (isBad) {
                pos = mid;
                last = mid - 1;
            } else {
                first = mid + 1;
            }
        }
        return pos;
    }
};