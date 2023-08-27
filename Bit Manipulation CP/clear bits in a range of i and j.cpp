void clear(int num,int i,int j)
{
    //0001010
    //1110011 ->mask
    int zero=(-1<<(i+1);//for 1110000
    int one =(1<<j)-1//for 00001000->00000111
    int mask=zero|one;
    int ans=mask&num;
    return ans;

}