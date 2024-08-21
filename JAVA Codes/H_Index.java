import java.util.Arrays;

class H_Index {
    public int hIndex(int[] citations) {
        int n = citations.length;
        int[] cnt = new int[n + 1];
        for (int x : citations) {
            ++cnt[Math.min(x, n)];
        }
        int s = 0;
        for (int h = n; h >= 0; --h) {
            s += cnt[h];
            if (s >= h) {
                return h;
            }
        }
        return 0;  // In case no valid h-index is found
    }

    public static void main(String[] args) {
        int[] citations = {3, 0, 6, 1, 5};
        
        H_Index solution = new H_Index();
        int hIndex = solution.hIndex(citations);
        System.out.println("The H-Index is: " + hIndex);
    }
}
