import java.util.ArrayDeque;
import java.util.ArrayList;
import java.util.Deque;
import java.util.LinkedList;
import java.util.List;
import java.util.Scanner;

class Node {
    public int val;
    public List<Node> children;

    public Node(int _val) {
        val = _val;
        children = new ArrayList<>();
    }
}

class N_ary_tree {

    private Node buildTree(int[] input, int[] index) {
        if (index[0] >= input.length) return null;

        Node root = new Node(input[index[0]++]);
        int childrenCount = input[index[0]++];
        for (int i = 0; i < childrenCount; ++i) {
            root.children.add(buildTree(input, index));
        }
        return root;
    }

    public List<Integer> postorder(Node root) {
        LinkedList<Integer> ans = new LinkedList<>();
        if (root == null) return ans;

        Deque<Node> stk = new ArrayDeque<>();
        stk.offer(root);
        while (!stk.isEmpty()) {
            root = stk.pollLast();
            ans.addFirst(root.val);
            for (Node child : root.children) {
                stk.offer(child);
            }
        }
        return ans;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int[] input = {1, 3, 2, 0, 3, 0, 4, 0}; // Example input
        int[] index = {0};
        N_ary_tree sol = new N_ary_tree();
        Node root = sol.buildTree(input, index);
        List<Integer> result = sol.postorder(root);

        for (int val : result) {
            System.out.print(val + " ");
        }
        sc.close();
    }
}
