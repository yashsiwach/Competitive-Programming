bool check(int num )
{
    if(num&(num-1))==0)
    {
        return true;
    }
    else 
    {
        return false;
    }
}