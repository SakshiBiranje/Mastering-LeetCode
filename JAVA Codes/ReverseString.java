public class ReverseString 
{
    public void reverseString(char[] s) 
    {
        int left = 0;
        int right = s.length - 1;

        while (left < right)
        {
            char temp = s[left];
            s[left] = s[right];
            s[right] = temp;

            left++;
            right--;
        }
    }

    public static void main(String[] args) 
    {
        ReverseString solution = new ReverseString();
        char[] str = {'h', 'e', 'l', 'l', 'o'};
        solution.reverseString(str);
        
        for (char c : str) 
        {
            System.out.print(c);
        }
        System.out.println();
    }
}
