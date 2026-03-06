class Test
{
    public static void main(String args[])
    {
        int []iArr = new int[4];

        iArr[0] = 5;
        iArr[1] = 2;
        iArr[2] = 7;
        iArr[3] = 11;

        int iSum = 0;

        for(int i = 0; i < 4; i++)
        {
            iSum = iSum + iArr[i];
        }

        System.out.println(iSum);



    }
}