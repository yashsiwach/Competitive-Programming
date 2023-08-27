void clearnbits(int num ,int i)
{
    //001010
    //111100
    //to make this mask use -1<<
    int mask=(-1<<i);
    int ans=mask&num;
    cout<<ans<<endl;
}