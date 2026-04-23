class MyString 
{
    private String str;

    public MyString(String s)
    {
        this.str = s;
    }

    public int countVowels()
    {
        int iCnt = 0;

        String[] sArr = this.str.split("\\s");

        for(int i = 0; i < sArr.length; i++)
        {
            if(sArr[i].charAt(0) == 'A' || sArr[i].charAt(0) == 'E' || sArr[i].charAt(0) == 'I' || sArr[i].charAt(0) == 'O' || sArr[i].charAt(0) == 'U'
        || sArr[i].charAt(0) == 'a' || sArr[i].charAt(0) == 'e' || sArr[i].charAt(0) == 'i' || sArr[i].charAt(0) == 'o' || sArr[i].charAt(0) == 'u')
            iCnt++;
        }

        return iCnt;
    }
}

class Test
{
    public static void main(String[] args) {
        MyString ms = new MyString("I am learning OpenAI everyday");

        System.out.println(ms.countVowels());
    }
}