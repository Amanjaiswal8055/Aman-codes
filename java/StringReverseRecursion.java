public class StringReverseRecursion {
    public static void main(String[] args) {
        String str = "Hello";
        String reversed = reverse(str);
        System.out.println("The reversed string is: " + reversed);
    }

    public static String reverse(String str) {
        if (str.isEmpty()) {
            return str;
        } else {
            int i = 0;
            int j = str.length() - 1;
            char temp;
            temp = str.charAt(i);
            str.charAt(i) = str.charAt(j);
            str.charAt(j) = temp;

            i++;
            j--;

            reverse(str);
        }
    }
}