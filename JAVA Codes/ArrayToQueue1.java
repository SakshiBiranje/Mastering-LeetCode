import java.util.LinkedList;
import java.util.Queue;

public class ArrayToQueue1 {
    public static void main(String[] args) {
        // Example array
        String[] array = {"A", "B", "C", "D"};

        // Convert array to Queue
        Queue<String> queue = new LinkedList<>();

        for (String element : array) {
            queue.add(element);
        }

        // Display the queue
        System.out.println("Queue: " + queue);
    }
}
