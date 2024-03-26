public class floatArraySum {

    public static void main(String[] args) {
        
        
        int arr[] = {22,23,55,96,25};
        int sum = 0;
        
        for(int i = 0; i<arr.length;i++){
            sum = sum +arr[i];
        }
            System.out.println(sum);
    }
}