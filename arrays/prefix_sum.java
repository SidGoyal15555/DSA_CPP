public class prefix_sum{

    int[] a = new int[N];
    
   static int N;
    public static long[] psum(long[] a){
    long[] psums = new long[N+1];

    for(int i = 0; i<N; i++){
        psums[i+1] = psums[i] + a[i];
    }

    return psums;
}
}
