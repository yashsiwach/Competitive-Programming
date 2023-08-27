int solve(int num,int i)
{
    //create mask 
    //n=  00101
   //mask=00100 for 2nd bit
   int mask=1<<i;
   int ans=mask&num;
   if(ans==0)
   {
    return 0;
   }
   else 
   {
    return 1;
   }
}