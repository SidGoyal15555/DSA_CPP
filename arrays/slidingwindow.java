public class slidingwindow {
    int wsum =0;
    int msum=0;

    for(int i=0;i<k;i++){

        wsum+=A[i];
    }
    for(int j=i;j<A.length;j++){
        wsum+=A[j]-A[j-k];
        msum = Math.max(wsum,msum);
    }
    return msum;
}
