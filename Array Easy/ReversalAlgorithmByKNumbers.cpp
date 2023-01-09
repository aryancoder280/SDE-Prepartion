
class Solution{
public:
    void leftRotate(int arr[], int n, int d) {
        d= d%n;
        int second = d;
        int back = n-1;
        while(second<back) {
            swap(arr[second],arr[back]);
            second++;
            back--;
        }
        int first = 0, j = d-1;
        while(first<j) {
            swap(arr[first],arr[j]);
            first++;
            j--;
        }
        int s = 0,e=n-1;
        while(s<e) {
            swap(arr[s],arr[e]);
            s++;
            e--;
        }
    }
};
