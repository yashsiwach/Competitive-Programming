int countbits(int num)
{
    int count=0;
    while(num!=0)
    {
        int lastbit=num&1;
        if(lastbit)
        {
            count++;
        }
        //forgetting part
        num=num>>1;
    }
    return count;
}

//Faster than that
int faster(int num)
{
    int count=0;
    while(num!=0)
    {
        num=(num&(num-1));//brackets are imp
        count++;
        //just remove last set bit till number became 0
    }
    return count;
}